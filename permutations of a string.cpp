#include <iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


void permute(string input,int i,vector<string> v)
{
    if(input[i]=='\0')
        {   v.push_back(input);

            return;}
    for(int j=i;input[j]!='\0';j++)
    {
        swap(input[i],input[j]);
        permute(input,i+1,v);
        swap(input[i],input[j]);//to backtrack to the original array after swapping:bottom to top
    }
}

int main()
{

    vector<string> v;
    string input;
    cin>>input;
    permute(input,0,v);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
}
