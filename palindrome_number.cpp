#include<iostream>
using namespace std;
bool isPalindrome(int x) {
        string numb=to_string(x);
        string revNumb;
        char revNumb[numb.length()];
        for(int i=numb.length();i>0;i++)
        {
            revNumb[i];
        }
        if(revNumb==numb)
        {
            return(true);
        }
        else
        {
            return(false);
        }
        
    }
int main()
{
    if(isPalindrome(121))
    {
        cout<<"Palindrome";
    }
}