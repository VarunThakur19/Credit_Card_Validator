#include <iostream>
using namespace std;
class Credit_card
{
    private:
    long long  number,div;
    public:
    void Enter_number()
	{
        cout<<"Enter your credit card number:";
        cin>>number;
        
    }
    void Card()
	{
        div = number;
        int digit_number=0;
        while(div>0)
       {
  	     div = div/10;
  	     digit_number++;
       }
       
  int Credit_card_number[digit_number]; 
  for(int in=0; in<digit_number; in++)
  {
  	Credit_card_number[(digit_number-1)-in]=number%10;
  	number=number/10;
  }
	if(digit_number<16 && digit_number>16)
	{
		cout<<"Not a valid number.\n"<<"Number should be in the range of 13-16 digits.";
	}
	else
	{
	int sumodd=0;
	int sumeven=0;
	int twosum=0;
	int digitsecond,totalsum,multiply,digitfirst,sum;
	for(int i=digit_number-1;i>0;i--)
	{
		
		multiply = Credit_card_number[i-1]*2;
		if(multiply/10 != 0)
		{
			digitfirst = multiply/10;
			digitsecond = multiply%10;
			sum = digitfirst+digitsecond;
			twosum = twosum + sum;
		} 
		else 
		{
			sumeven = sumeven+multiply;
		}	
			i--;
	}
	sumeven = sumeven + twosum;
	for(int j=digit_number;j>0;j--)
	{
		sumodd=sumodd+Credit_card_number[j-1];
		j--;
	}
	totalsum = sumeven+sumodd;
	if(totalsum%10 == 0 && Credit_card_number[0]==4 || Credit_card_number[0]==5 || Credit_card_number[0]==6 || Credit_card_number[0] == 3 )
	{
		if( Credit_card_number[0] == 4)
		{
			cout<<"The number is valid.\nIt is a Visa Card.";
		}
		if( Credit_card_number[0] == 5 || Credit_card_number[0]==2)
		{
			cout<<"The number is valid.\nIt is a Master Card.";
		}
		if( Credit_card_number[0] == 6)
		{
			cout<<"The number is valid.\nIt is a Discover Card.";
		}
		if( Credit_card_number[0] == 3 && Credit_card_number[1]==7 )
		{
			cout<<"The number is valid.\nIt is a American Express Card.";
		}
	}
	else
	{
		cout<<"The number is not valid";
	}
    }
    }
};

int main()
{
    Credit_card C1;
    C1.Enter_number();
    C1.Card();
    return 0;
}
