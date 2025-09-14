#include<iostream>
using namespace::std;
int main(){
    int array[10]={0};
    for(int i =0;i<10;i++)
    {
        cout<<"Enter "<<i<<" number: ";
        cin>>array[i];
    }
    cout<<"Enter the number you want to search for: ";
    int key;
    cin>>key;


    cout<<"The indices where the key is are as follows: "<<endl;
    int count=0;
    for(int i=0;i<10;i++)
    {
        if(key==array[i]){
        cout<<i<<endl;
        count++;
    }
    }
    if(count==0)
    cout<<"key not found in array";
}
