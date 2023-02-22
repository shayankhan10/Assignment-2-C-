//Program to find the factorial of a number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,fic=1;
    cout<<"Enter number to find factorial ";
    cin>>num;
    for(int i=1; i<=num; i++) 
	{
        fic=fic*i;
    }
    cout<<"Factorial of given number is "<<fic<<endl;
}
