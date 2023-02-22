//print multiplication table of number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number,i;
    cout<<"Enter a number ";
    cin>>number;
    for(i=1; i<=10; i++)
    {
        cout<<number<<" * "<<i<<" = "<<number*i<<endl;
    }
}
