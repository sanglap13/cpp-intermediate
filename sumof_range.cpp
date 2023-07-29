#include <iostream>
using namespace std;

// int main() {

//     int sum = 0,low,high;
//     cout<<"Enter the range: \n";
//     cout<<"Low: ";
//     cin>>low;
//     cout<<"High: ";
//     cin>>high;

//     for(int i=low;i<=high;i++)
//     {
//         sum= sum+i;
//     }
//     cout<<"The sum is: "<<sum;



//     return 0;
// }

int main() {

    int sum = 0,low,high;
    cout<<"Enter the range: \n";
    cout<<"Low: ";
    cin>>low;
    cout<<"High: ";
    cin>>high;

    sum = high*(high + 1)/2 - low*(low + 1)/2 + low;
    cout<<"The sum is: "<<sum;



    return 0;
}