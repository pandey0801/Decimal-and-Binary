//binary to decimal
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i=0,ans=0;
    cin>>n;
    while (n!=0)
    {
        int bit = n&1;
        if(bit == 1)
        {
            ans =(pow(2,i))+ans;
        }
        i++;
    }
    cout<<ans<<endl;
    
}