#include<bits/stdc++.h>
using namespace std;

#define   fi(a,b) for(int i=a;i<b;i++)
#define   fj(a,b) for(int j=a;j<b;j++)
#define   ff first
#define   ss second
#define   ll long long
#define   ld long double
#define   ull unsigned long long
#define   bp(x) __builtin_popcount(x)
#define   pr(x) for(auto it: x) cout<<it<<" "; cout<<endl;
#define   getMax(x) max_element(x.begin(),x.end())
#define   getMin(x) min_element(x.begin(),x.end())
#define   endl "\n"
typedef   vector<int> vi;
typedef   vector< pair<int,int> > vii;
typedef   vector<long long> vl;
typedef   pair<int,int> pii;
typedef   pair<ll,ll> pll;
typedef   vector< pair<ll,ll> > vll;
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1};
//int dx[]={-1,0,1,1,1,0,-1,-1};
//int dy[]={-1,-1,-1,0,1,1,1,0};

void nikal_pehli_fursat_mai(){
    int n;
    cin>>n;

    vii v;
    set<int>st;
    vi ans(n+1, 0);

    fi(1, n+1) st.insert(i);

    fi(1, n+1) {
        int a,b;
        cin>>a>>b;
        v.push_back({a, i});
        v.push_back({b+1, -i});
    }

    sort(v.begin(), v.end());

    fi(0, 2*n){
        if(v[i].ss>0){
            ans[v[i].ss] = *st.begin();
            st.erase(st.begin());
        }
        else{
            st.insert(ans[abs(v[i].ss)]);
        }
    }

    cout<<*getMax(ans)<<endl;
    fi(1, n+1) cout<<ans[i]<<" ";
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc=1; 
    // cin>>tc;
    while(tc--){
    nikal_pehli_fursat_mai();
    }
}
