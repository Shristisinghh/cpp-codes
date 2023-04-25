#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"enter your choice";
    cin>>ch;
    switch (ch-2){
    case 1:
    cout<<"i wanna know my balance";
    break;

    case 2:
    cout<<"i wanna register a complain";
    break;

    case 3:
    cout<<"i wanna talk to customer care executive";
    break;

    default:
        cout<<"enter valid character";
        break;
    }
    cout<<"/n end of switch statement";
return 0;
}
