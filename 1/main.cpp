#include <iostream>

using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    int n,m,t=0,t1=1;cin>>n;
        m=n;
    while(m>=10){
        m/=10;
        t1*=10;
    }
    m=n;
    while(m>0){
        t+=(m%10)*t1;
        t1/=10;
        m/=10;
    }
    cout<<(t==n?"YES":"NO");
    return 0;
}
