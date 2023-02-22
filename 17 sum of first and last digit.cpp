//find the sum of first and last digit of a number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number,first,last,sum;
    cout<<"Enter a number ";
    cin>>number;
    first=number;
    last=number%10;
    for(first=number; first>=10; first=first/10);
    cout<<"Sum of first and last digit of "<<number<<" is "<<first+last<<endl;
}
