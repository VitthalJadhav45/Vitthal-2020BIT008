#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> cur;
    int n ;
    cout<<"Enter vector size "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
      cout<<"Enter word "<<endl;
      string str;
      cin>>str;
      cur.push_back(str);
    }

    int mx = 0;

    for(int i=0;cur[0].size();i++){
        int j = 1;
        int flag = true;

        while(j < cur.size()){
            if(cur[j][i] != cur[0][i])
            flag=false;
            j++;
        }

        if(flag)
        mx = max(mx,i+1);
        else 
        break;
    }

    cout<<"longest prefix is "<<mx<<endl;

    return 0;
}