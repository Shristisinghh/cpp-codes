#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter your choice"<<endl;
    cin>>ch;
    switch(ch)
    {
        

        case 'a':
        cout<<"the character is a";
        break;
        case 'A':
        cout<<"the character is A";
        break;

         case 'j':
        cout<<"the character is j";
        break;

        default:
        cout<<"enter valid choice";
        break;
       
    }
    return 0;
}