// // GCD

// // Naive solution
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     bool flag=true;
//     int ans=(a>b)?b:a;
//     while(ans!=0){
//         if(a%ans==0 && b%ans==0){
//             cout<<ans;
//             flag=false;
//             break;
//         }else{
//             ans--;
//         }
//     }
// }

// // Euclidian theorem
// // Optimised approach -1
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }else{
//             b=b-a;
//         }
//     }
//     cout<<a;
    
// }

// Euclidian theorem
//  Optimised approach -2
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<ans;
    return 0;
}