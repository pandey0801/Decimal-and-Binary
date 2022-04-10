//rev floww
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i =  0,n;
    int ans=0;
    int ans1=0;
    cin>>n;
    while(n!=0)
    {
        int bit = n & 1;
       // cout<<bit<<endl;
            ans = (bit * pow(10,i))+ans;
           // cout<<ans<<endl;
            n = n>>1;
            i++;
    }
    cout<<"ans is "<<ans<<endl;
    return 0;
}