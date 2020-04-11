#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define mii map<int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector
#define mk_arr(n, t, s) t* n = new t[s]; loop(s) cin >> n[i]; 
#define mi_arr(n, s) int* n = new int[s]; loop(s) cin >> n[i]; 
#define arr_out(n, s) Loop(0, s, lout) cout << n[lout] << " ";
#define pi(x) printf("%lld ", x);
#define end printf("\n");

pii next(int i, int j){
    if(i%2 == 0) j++;
    i++;
    return {i, j};
}

int32_t main(){
    fastio;
    int pt[510][510];
    memset(pt, 0, sizeof(pt));
    for(int i = 1; i < 505; i++){
        pt[i][1] = pt[i][i] = 1;
    }
    for(int i = 3; i < 505; i++){
        for(int j = 2; j < i; j++){
            pt[i][j] = pt[i-1][j-1] + pt[i-1][j];
        }
    }
    int pt2[505][505];
    memset(pt2, 0, sizeof(pt2));
    for(int i = 1; i < 501; i++){
        for(int j = 1; j <= i; j++){
            pt2[i][j] = pt2[i][j-1]+pt[i][j];
        }
    }
    w(t){
        int n;
        cin >> n;
        cout << "Case #" << t << ":\n";
        n--;
        cout << "1 1" << endl;
        int i = 1;
        int j = 1;
        pii n1 = next(i, j);
        while(pt2[n1.first][n1.second] <= n){
            if(i%2 == 0) j++;
            i++;
            n-=pt[i][j];
            // cout << i << " " << j << endl;
            n1 = next(i, j);
        }
        deb(n);
        deb(pt2[i][j]);
        j--;
        while(j >= 1 and n > 0){
            // cout << i << " " << j << endl;
            n -= pt[i][j];
            j--;
        }
        i++;

        while(n--){
            // cout << i << " 1" << endl;
            i++;
        }
    }

}