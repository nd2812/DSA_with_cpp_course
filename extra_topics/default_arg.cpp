#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}//default arg is use from rightmost element

int main() {
    int arr[5]={1,4,7,8,9};
    int size=5;
    print(arr,size,2);
    return 0;
}