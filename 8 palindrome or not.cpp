//check whether num is palindrome or not
#include<iostream>
#include<conio.h>
using namespace std;
bool isPalindrome(int num) 
{
    int reversed = 0, remainder, original = num;
    while(nim>0) 
	{
        remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;
    }
    if(original==reversed)
	{
        return true;
    }
    else 
	{
        return false;
    }
}
int main() 
{
    int num;
    cout<<"Enter a number ";
    cin>>n;
    if(isPalindrome(num)) 
	{
        cout<<num<<" is a palindrome"<<endl;
    }
    else 
	{
        cout<<num<<" is not a palindrome"<<endl;
    }
    return 0;
}
