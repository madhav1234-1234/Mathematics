
// Given a number n,find all the prime nummbers less than n.

// Naive approach
// #include<iostream>
// using namespace std;
// bool isprime(int k){
//     for(int i=2;i*i<=k;i++){
//         if(k%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         if(isprime(i)){
//             cout<<i<<" ";
//         }
//     }
// }

// Optimised approach-seive of eratoshthenes.
#include<iostream>
#include<vector>
using namespace std;
void seive(int n){
    vector<int>temp(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(temp[i]){
           for(int j=2*i;j<=n;j+=i){
               temp[j]=false;
            }
        }    
    }
    for(int i=2;i<=n;i++){
        if(temp[i]){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    seive(n);
    return 0;
}