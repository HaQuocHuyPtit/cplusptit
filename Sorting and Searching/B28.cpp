#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, tmp;
    vi b;
    vi a;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        a.pb(tmp);
    }
    int dem = 0;
    for(int i = 0; i < n; i++){
        b.pb(a[i]);
        sort(b.begin(), b.end());
        cout<<"Buoc "<<dem<<": ";
        for(int j = 0; j < b.size(); j++){
            cout<<b[j]<<" ";
        }
        cout<<endl;
        dem++;
    }
    return 0;
}
