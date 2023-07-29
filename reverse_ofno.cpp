#include <iostream>
using namespace std;

int main() {

    int n,reverse=0, rem,temp;
    cout<<"Enter the no.: ";
    cin>>n;
    temp = n;

    while(n!=0)
    {
        rem = n%10;
        reverse = reverse * 10 + rem;
        n/= 10;
    }
    cout<<"Reverse of "<<temp<< " is: "<<reverse;


    return 0;
}    