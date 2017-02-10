//Codechef problem:Make XOR zero(Problem code: MXZERO)
#include <iostream>
using namespace std;

int main() {
	 int t,n,i,m;
    cin>>t;
    while(t--)
    {   int count1=0;
        cin>>n;
        for(i=0;i<n;i++)
        {   cin>>m;
            if(m==1)
                count1++;
        }
        if(count1%2==0)
            cout<<n-count1<<endl;
        else
            cout<<count1<<endl;
    }
    
    return 0;
}
