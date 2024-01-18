#include<iostream>
#include<vector>
using namespace std;

void permutation(int indx,vector<int> cur,vector<int> num,vector<vector<int>> &ans){
    if(indx < 0){
        // num.push_back(cur[indx]);
        ans.push_back(num);
        return;
    }

    for(int i=indx;i>=0;i--){
        num.push_back(cur[i]);
        permutation(i--,cur,num,ans);
        num.pop_back();
        permutation(indx,cur,num,ans);
    }
     
}

void permutation_calculation(vector<int> cur){
    vector<vector<int>> ans;
    vector<int> tmp;
  
    permutation(cur.size(),cur,tmp,ans);
 
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int> cur={1,2,3};
    
    permutation_calculation(cur);

    return 0;
}