#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter the number"<<endl;
    cin>>a;
    for(int i=2;i<a;i++){
        if(a%i!=0){
            cout<<"Prime no.";
            break;
        }
        else
        cout<<"not a prime number";
        break;

    }

}