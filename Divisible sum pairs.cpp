//Hackerrank problem:Divisible sum pairs
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,i,j,count=0;
    int a[100];
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
        if((a[i]+a[j])%k==0)
            count++;
    }
    cout<<count;
    return 0;
}

