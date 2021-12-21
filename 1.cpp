// // Count number of digits

// // method-1
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans=(int)log10(n) +1;
//     cout<<ans;
//     return 0;
// }

// method-2
#include<iostream>
using  namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
      n/=10;
      count++;
    }
    cout<<count;
}