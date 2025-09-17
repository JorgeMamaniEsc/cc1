#include <iostream>

using namespace std;
#define int long long
#define f(i,a,n,b) for(int i=a;i<n;i+=b)
#define rf(i,a,n,b) for(int i=a;i>=n;i-=b)
#define endl '\n'
#define af(a,c) for(auto a:c)

bool isPal(string s){
    int n=s.length();
    f(i,0,n/2,1){
        if(s.at(i)!=s.at(n-i-1)){
            return false;
        }
    }
    return true;
}
int cnt(string s,char c){
    int t=0,n=s.length();
    f(i,0,n,1){
        if(s.at(i)==c) t++;
    }
    return t;
}
void sa(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
signed main()
{
    int a,b;cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    sa(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
