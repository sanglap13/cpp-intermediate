#include <iostream>
using namespace std;

bool isPrime(int n){

    if(n < 2)
        return false;
    
    for(int i = 2;i < n; i++) 
    { 
        if(n % i == 0) 
            return false;
    }

    return true;
}

int main()
{
    int l, h;
    cout<<"Enter lower bound: ";
    cin>>l;
    cout<<"Enter higher bound: ";
    cin>>h;
    
    for(int i = l; i <= h; i++)
    {
        if(isPrime(i))
            cout << i << " ";
    }        

}
// Time Complexity : O(N^2)
// Space Complexity : O(1)