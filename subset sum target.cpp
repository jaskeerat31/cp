#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n>1 && n<=1000)
	{
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int target;
		cin>>target;
		for(int i=0;i<n;i++)
		{
			for(int j=n-1;j>i;j--)
			{
				if(a[i]+a[j]==target)
				cout<<a[i]<<" "<<"and"<<" "<<a[j]<<endl;
			}
		}
	}
	return 0;
}
