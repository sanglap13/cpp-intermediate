#include <iostream>
using namespace std;


 int main() {

    int n;
    bool isPrime = true;
    cout<<"Enter the no. : ";
    cin>>n;

    if(n < 2)
        isPrime = false;
    else
    {
        for(int i=2; i<=n/2; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }    
        }
    }    

    if (isPrime)
        cout<<n<<" is Prime";
    else
        cout<<n<<" is not Prime";    



    return 0;

 }
