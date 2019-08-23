#include <iostream>

using namespace std;


int main()
{
    int N;
    cin>>N;
    int arr[]={2,3,5,7,11,13,17,19};
    int n=sizeof(arr)/sizeof(int);
    int ans=0;
    for(int i=1;i<(1<<n);i++)
    {
        int temp=i;
        int bits=__builtin_popcount(temp);
        int denom=1;
        int j=0;
        while(temp>0)
        {
            if(temp&1)
            {
                denom*=arr[j];
            }
            j++;
            temp>>=1;
        }
        if(bits&1){
            ans+=N/denom;
        }
        else
            ans-=N/denom;
    }
    cout<<ans<<endl;
}
