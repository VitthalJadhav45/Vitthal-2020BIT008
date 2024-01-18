#include<iostream>
using namespace std;

int binary_search(int val,int arr[],int size){
    int low = 0;
    int high = size;

    while (low <= high)
    {
        int mid = low + (high-low)/2;

        if(arr[mid] == val) return mid;
        else if(arr[mid] < val) low = mid+1;
        else high = mid-1;
    }

    return -1; 
}
int main(){
    int arr[]={1,2,4,6,7,8,9};
    int size = 7;
    int value = 4;
    
    if(binary_search(value,arr,size) != 1)
    cout<<"Position of value is "<<binary_search(value,arr,size)<<endl;
    else 
    cout<<"Not found"<<endl;

    return 0;
}