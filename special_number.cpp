#include<iostream>
using namespace std;
bool isSpecialNumb(int numb)
{
    int f,s;
    f=numb/10;
    s=numb%10;
    if((f+s)+(f*s)==numb)
    {
        return(true);
    }
    else{
        return(false);
    }
}
void printSpecialNumbs(int fnumb,int snumb)
{
    for(int i=fnumb;i<=snumb;i++)
    {
        if(isSpecialNumb(i))
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int fnumb,snumb;
    cout<<"1st numb :";
    cin>>fnumb;
    cout<<"2nd numb :";
    cin>>snumb;
    printSpecialNumbs(fnumb,snumb);
}