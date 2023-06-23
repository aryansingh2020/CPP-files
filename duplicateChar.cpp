#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string inp;
    getline(cin,inp);
    stringstream ss;
    ss<<inp;
    char c;
    int i;
    while(ss>>c>>i)
    {
        cout<<string(i,c);
    }
}