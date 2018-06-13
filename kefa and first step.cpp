#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,count=1,a,i,max=1,l=0,r=1;
    cin>>n;
    vector<int>v;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    while(l<n-1)
    {
        if(v[l++]<=v[r++])
        {
            count++;
          ///  cout<<l<<" "<<r<<" "<<count<<endl;
            if(count>max)
                max=count;
        }
        else
        {
            if(count>max)
                max=count;
            count=1;
        }


    }
    cout<<max;



}
