#include<iostream>
#include<map>
using namespace std;

void find_frequency(string str){
    map<string,int> mp;
    int strt=0;

    for(int i=0;i<=str.size()-1;i++){
        if(str[i] == ' ' || str[i]=='.'){
            if(str[i] == '.'){
                 mp[str.substr(strt,i-strt)]++;
                 strt = i+1;
            }else{
            mp[str.substr(strt,i-strt)]++;
            strt = i;
            }
        }
    }
    mp[str.substr(strt,str.size()-strt)]++;

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<" , ";
    }
}
int main(){
    string str;
    cout<<"Enter string "<<endl;
    getline(cin,str);

    find_frequency(str);

    return 0;
}