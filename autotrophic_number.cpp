#include<iostream>
using namespace std;

bool isAutotrophic(int numb)
{
    int square=numb*numb;
    int temp=square%10;
    if(temp==numb)
    {
        return(true);
    }
    else{
        return(false);
    }
}
int main()
{
    int number;
    cin>>number;
    if(isAutotrophic(number))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}