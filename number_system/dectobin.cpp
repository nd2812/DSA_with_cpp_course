// positive number
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int bit,ans=0;
//     int i=0;
//     while(n!=0){
//         bit = n&1;
//         ans+=bit * pow(10,i);
//         i++;
//         n=n>>1;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// negative  number 
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    n=(-1)*n;
    int bit,ans=0;
    int i=0;
    while(n!=0){
        bit = n&1;
        ans+=bit * pow(10,i);
        i++;
        n=n>>1;
    }
    ans = (~ans) +1;
    cout<<ans<<endl;
    return 0;
}