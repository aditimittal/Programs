//Hackerrank problem:Anagram
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
    char s[10000];
    
    
    cin>>t;
    while(t--)
        {  
        int ch1[26]={0},ch2[26]={0};
        int i;
        cin>>s;
        int l=strlen(s);
        if(l%2!=0)
            cout<<"-1\n";
        else{int count=0;
            for(i=0;i<l/2;i++)
                ch1[s[i]-'a']++;
            for(i=l/2;i<l;i++)
                ch2[s[i]-'a']++;
            for(i=0;i<26;i++)
                {
                if(ch1[i]<=ch2[i])
                    continue;
                else if(ch1[i]>ch2[i])
                {  count+=ch1[i]-ch2[i];}
            }
            cout<<count<<"\n";
        }
        
    }
    return 0;
}