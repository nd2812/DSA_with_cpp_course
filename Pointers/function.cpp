#include<bits/stdc++.h>
using namespace std;

void print(int *p){
    cout<<p<<endl;
}

void update(int *p){
    // p++;
    // cout<<"inside "<<p<<endl;
    *p=*p+1;
}

int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main() {
    // int value=5;
    // int *p = &value;
    // // print(p);

    // cout<<" Before "<<*p<<endl;
    // update(p);
    // cout<<" After "<<*p<<endl;

    int arr[5]={1,2,3,4,5};
    cout<<"Sum is "<<getSum(arr+2,3)<<endl;
    return 0;
}