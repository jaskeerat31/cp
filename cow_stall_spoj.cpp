#include <iostream>

using namespace std;
bool canplace(int n,int stalls[],int c,int sep)
{
    int placed=1;
    int last_placed=stalls[0];
    for(int i=1;i<n;i++)
    {
        int c_stall=stalls[i];
        if(c_stall-last_placed>=sep)
        {
            placed++;
            last_placed=c_stall;
            if(placed==c)
                return true;
    }
}
}

int main()
{
    int n=5;
    int stalls[]={1,2,4,8,9};
    int c=3;

    int s=0;
    int e=stalls[n-1]-stalls[0];
    int ans=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(canplace(n,stalls,c,mid))
        {ans=mid;
        s+mid+1;

    }

}
    cout<<ans;
    return 0;
}
