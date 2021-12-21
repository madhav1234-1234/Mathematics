// // Factorial of a number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int fact=1;
//     for(int i=1;i<=n;i++){
//        fact*=i;
//     }
//     cout<<fact;
// }

// Recursive approach
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans;
}