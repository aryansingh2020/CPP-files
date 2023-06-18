#include<iostream>
using namespace std;

void isTrendyNumb(int numb)
{
    string num=to_string(numb);
    int mid=int(num[1]);
    cout<<mid;
    // if(mid%3=0 && num.length()==3)
    // {
    //     return(true);
        
    // }
    // else{
    //     return(false);
    // }
} 
int main()
{
    int number;
    cin>>number;
    isTrendyNumb(number);
    // if(isTrendyNumb(796))
    // {
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }
}