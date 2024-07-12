#include <bits/stdc++.h>
using namespace std;
 
/*Data types shortcuts*/
typedef long long int lli;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpii;
typedef vector<pair<long long int,long long int>> vpll;
typedef map<int,int> mii;
typedef set<int> si;
typedef set<char> sc;
 
/*FUNCTIONS short*/
#define x first
#define y second
#define sz(a) int((a).size())
#define vpdsort(a) sort(a.rbegin(),a.rend())
#define vpasort(a) sort(a.begin(),a.end())
#define asort(a) sort(a.begin(),a.end())
#define dsort(a) sort(a.begin(),a.end(),greater<long long int>())
#define ai(i,s,n) for(int i=s ; i<n ;++i ){ cin>>arr[i]; }
#define pb push_back
#define mp make_pair
#define endl '\n'
 
/*FUNCTION*/
void check() { cout<<"CHECK\n";}
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
void swapint(int* a,int* b){ int t=*a; *a=*b; *b=t;}
void swapv(vll &v,lli i,lli j){ lli t=v[i];v[i]=v[j];v[j]=t;}
 
/*CONSTANTS*/
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
 
//COMENT//
/*
 
*/
 
void solve()
{
    lli a,b,c,vol;cin>>a>>b>>c>>vol;
    lli ans = 0;
    for(lli i=1;i<=a;i++){
        lli tvol = vol;
        if(vol%i==0){
            tvol/=i;
            for(lli j=1;j<=b;++j){
                if(tvol%j==0 && tvol/j <= c){
                    lli k=tvol/j;
                    lli p1=a-i+1;
                    lli p2=b-j+1;
                    lli p3=c-k+1;
                    ans=max(ans,p1*p2*p3);
                }
            }
        }
    }
    cout<<ans<<endl;
}   
 
/* main()  FUNCTION */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // solve();
// }
    int tc;
    cin >> tc;
 
    while(tc--){
        solve();
    }
    return 0;
}