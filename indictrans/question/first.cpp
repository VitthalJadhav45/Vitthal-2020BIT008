#include<bits/stdc++.h>
using namespace std;

int main(){
    string str ;
    cout<<"Enter the string "<<endl;
    getline(cin,str);
    
    int i=0;
    int j = str.size()-1;

    while(i < str.size()/2){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    
    cout<<str<<endl;

    return 0;
}