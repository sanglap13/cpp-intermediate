#include <iostream>
using namespace std;

int main() {

    int sum=0,n;
    cout<<"Enter the natural no: ";
    cin>>n;
     cout<<"Sum of natural numbers till "<<n<<" :"<<endl;
    for(int i=1;i<=n;i++)
    {
        sum = sum+i;
    }
    cout<<sum;


    return 0;
}