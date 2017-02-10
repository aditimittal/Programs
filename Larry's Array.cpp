//Hackerrank problem:Larry's Array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int t;
    cin>>t;
    while(t--)
        {
        int i,j,n,count=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
           for(i=0;i<n;i++)
            {
            for(j=i+1;j<n;j++)
                {
                if(a[i]>a[j])
                    count++;
            }
        }
        if(count%2==0)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}