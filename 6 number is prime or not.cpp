//check number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Check whether a number is prime or not:"<<endl;
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"The entered number is a prime number: "<<endl;
    }
    else 
	{
        cout<<"The number you entered is not a prime number: "<<endl;
    }
}
