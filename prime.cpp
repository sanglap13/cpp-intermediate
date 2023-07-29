#include <iostream>
using namespace std;


 int main() {

    int n,count=0;
    cout<<"Enter the no. : ";
    cin>>n;
    if(n < 2)
        cout<<n<<" is not prime";
    else
    {    
        for(int i=1;i<=n;i++)
        {
            if(n % i == 0)
                count += 1;
        }
    if(count > 2)
        cout<<n<<" is not prime";
    else
        cout<<n<<" is prime";        

    }

    return 0;
 }