#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={2,4,5,3,1,6,8,9,7};
    vector<pair<int,int>> ans;
    int find_sum = 10;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
           int sum = arr[i] + arr[j];
           if(sum == find_sum){
              ans.push_back({arr[i],arr[j]});
           }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<","<<ans[i].second<<" ";
    }
    
    return 0;
}