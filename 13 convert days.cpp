//convert days to years,weeks and days
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int y,d,w;
    cout<<"Enter number of days ";
    cin>>d;
    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7;
    cout<<"Number of Years "<<y<<endl<<"Number of Weeks "<<w<<endl<<"Number of Days "<<d<<endl;
}
