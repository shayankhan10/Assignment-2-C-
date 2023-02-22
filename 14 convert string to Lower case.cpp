//convert string to Lower case
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    string str="SHAYAN";
    for(size_t i=0; i<str.length(); ++i)
	{
        str[i]=tolower(str[i]);
    }
    cout<<"String in lower case is "<<str<<endl;
}


