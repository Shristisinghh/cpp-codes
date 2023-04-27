#include<iostream>
using namespace std;
int main(){
    int money,partner_age;
    cout<<"how much money you have?"<<endl;
    cin>>money;
    cout<<"enter age of partner"<<endl;
    cin>>partner_age;
    if(money>1000)
    {
        
        if(partner_age>21)
        cout<<"lets have wine"<<endl;
        else
        cout<<"lets have coffee in starbucks"<<endl;

    }
else if(money>500)
        cout<<"lets have coffee in ccd"<<endl;
else
        cout<<"lets have tea"<<endl;
        cout<<"lets go home";
        return 0;
} 