#include <iostream>
#include <math.h>
using namespace std;


 int main() {

    int n;
    bool isPrime = true;
    cout<<"Enter the no. : ";
    cin>>n;

    if(n <= 1)
        isPrime = false;
    else if(n == 2)
    {
        isPrime = true;
    }
    else if(n % 2 == 0)
    {
        isPrime = false;
    }
    else
    {
        for(int i=3; i<=sqrt(n); i+=2)
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
