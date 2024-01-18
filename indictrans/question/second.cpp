#include<iostream>
#include<vector>
using namespace std;

vector<int> solve(vector<int> temp){
    vector<int> cur;

    for(int i=0;i<temp.size();i++){
        if(temp[i]%2 == 0){
            cur.push_back(temp[i]);
        }
    }

    return cur;
}
int main(){
    vector<int> temp;

    int n ;
    cin>>n;
    cout<<endl;
    cout<<"Enter value of vector "<<endl;
    
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        temp.push_back(a);
    }

    vector<int> ans = solve(temp);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}