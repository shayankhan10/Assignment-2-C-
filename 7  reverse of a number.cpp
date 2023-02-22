//reverse of a number
#include<iostream>
using namespace std;
int main()
{
    int x,y,Rev=0;
    cout<<"Enter the Number: ";
    cin>>x;
    while(x!=0)
    {
        y=x%10;
        Rev=y+(Rev*10);
        x=x/10;
    }
    cout<<"Reverse of the Number = "<<Rev;
}
