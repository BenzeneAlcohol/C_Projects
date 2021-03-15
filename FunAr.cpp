#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    vector <int> a(n);
    for(i=0;i<n;i++)
    cin>>a[i];
    int max=0;
    int min1;
    for(i=0;i<n;i++)
    {
        min1=max;
        for(j=i;j<n;j++)
        {
            if(a[j]-a[i]>max)
            max=a[j]-a[i];
        }
        if(max>min1)
        min1=max;
    }   
    cout<<min1;
}