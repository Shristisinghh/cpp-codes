#include<iostream>
using namespace std;

void swap(int arr[], int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);}
    }

}
void printarr(int arr[], int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main(){
    int arrA[]={2,3,4,5};
    int arrB[]={1,2,3,4,5};
    swap(arrA, 4);
    printarr(arrA, 4);
    swap(arrB, 5);
    printarr(arrB, 5);
    return 0;

}