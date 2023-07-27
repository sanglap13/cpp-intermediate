#include <iostream>
using namespace std;


 int main() {
     int n;
    cout<<"Enter natural no.: ";
     cin>>n;
        cout<<"List of natural numbers from "<<n<<" to 1 :"<<endl;
     for(int i=n;i>0;i--)
     {
         cout<<i<<" ";
    }
     return 0;
 }

// int main() {
//     int n,i;
//     cout<<"Enter natural no.: ";
//     cin>>n;
//     i=n;
//     cout<<"List of natural numbers from "<<n<<" to 1 :"<<endl;
//     while(i>=1)
//     {
//         cout<<i<<" ";
//         i--;
//     }
//     return 0;
// }