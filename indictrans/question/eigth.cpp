#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter string"<<endl;
    getline(cin,str);
    
    int n = str.size();
    
    int i =0;
    int j = n-1;
    int flag = true;

    while(i <= n/2){
        if(str[i] != str[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    
    if(flag)
    cout<<"Given string is palindrome "<<endl;
    else 
    cout<<"Given string not palindrome "<<endl;
    
    return 0;
}