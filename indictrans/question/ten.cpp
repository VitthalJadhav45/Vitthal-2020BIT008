#include<iostream>
using namespace std;

int facto(int n){
    if(n <= 1) return 1;

    return n * facto(n-1);
}

int main(){
    int n;
    cout<<"Enter value of number"<<endl;
    cin>>n;

    cout<<"Factorial is "<<facto(n)<<endl;
    
    return 0;
}