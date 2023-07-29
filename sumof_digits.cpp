#include <iostream>
using namespace std;

int main() {

    int n,sum=0;
    cout<<"Enter the no.: ";
    cin>>n;
    while(n!=0)
    {
        sum = sum + n%10;
        n/= 10;
    }
    cout<<"The sum of digits for is: "<<sum;


    return 0;
}