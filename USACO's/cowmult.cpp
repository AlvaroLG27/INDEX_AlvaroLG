#include<bits/stdc++.h>

using namespace std;

int main(){

    freopen("cowmult.in","r",stdin);
    freopen("cowmult.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string N,M;
    long long suma=0;
    cin >> N >> M;

    for (int i=0; i<N.size(); i++){
        for (int j=0; j<M.size(); j++){
            int a,b;
            a=N[i]-'0';
            b=M[j]-'0';
            suma+=a*b;
        }
    }
    cout << suma;

    return 0;
}