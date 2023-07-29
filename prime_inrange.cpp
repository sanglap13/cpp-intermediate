#include <iostream>
using namespace std;


 int main() {


    int l,h,flag;
    cout<<"Enter lower bound: ";
    cin>>l;
    cout<<"Enter higher bound: ";
    cin>>h;
    for(int i=l;i<=h;i++)
    {

    if(i<2)
        continue;
    flag=1;       
        for(int j=2; j<=i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }    
        }   

    if (flag == 1)
        cout<<i<<" ";
    }    

    return 0;

 }
