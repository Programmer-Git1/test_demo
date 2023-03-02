#include<iostream>
using namespace std;

int main()
{
    int num1, i =0, j=0, d4 =0, sum =0, sub =0, mul =0;
    cout <<"Enter any number:-  ";
    cin >> num1;

    sum += num1 %10;

    while(num1 !=0)
    {
        num1 = num1 /10;
        if(num1 >0 && num1 < 10)
        {
            sum += num1 % 10;
        }

        if(num1 > 10)
        {
            sub = num1%10;
        }

        if(i == 0)
        {
            d4 = (num1 %10);
        }
        i++;
    }

    sub = sub - d4;

    cout << "\nSum of first and last digit:- " << sum;
    cout << "\nSubtraction of 2nd and 2nd last number:- " << sub;
}
