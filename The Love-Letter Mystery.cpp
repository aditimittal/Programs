//Hackerrank problem:The Love-Letter Mystery
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    char s[10000];
    while(t--)
        {int i,count=0;
        cin>>s;
        int l=strlen(s);
        for(i=0;i<l/2;i++)
            {
            if(s[i]==s[l-i-1])
                continue;
            else 
                count+=abs(s[i]-s[l-i-1]);
        }
         cout<<count<<"\n";
    }
    return 0;
}