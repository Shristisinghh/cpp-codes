#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag=false;
    while(!flag)
{
    cout<<"enter a number between 2 and 7:";
    cin>>n;
    if(n<=2||n>=7)
    cout<<"not a valid number";
    else
    {cout<<"thanks";
    flag=true;}
}
return 0;
}