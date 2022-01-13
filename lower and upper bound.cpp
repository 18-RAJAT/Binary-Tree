#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>&v,int element )
{
    int low=0,high=v.size()-1;
    int mid;

    while(high>low-1)
    {
        int mid=(high+low)/2;
        if(v[mid]<element)
        {
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    if(v[low]>=element)
    {
        return low;
    }
    if(v[high]>=element)
    {
        return high;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int element;
    cin>>element;

    int lower=lower_bound(v,element);
    cout<<lower<<" "<<v[lower]<<endl;

}