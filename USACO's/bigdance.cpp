#include <bits/stdc++.h>

using namespace std;

#define middle (l+r)/2

int N, SOL;
int suma = 0;

int _fun(int l, int r){
    if((r-l)+1==3 || (r-l)+1==2){
        return l*(l+1);
    }
    return _fun(l, middle)+_fun(middle+1, r);
}

void f(int l, int r){
    if((r-l)+1==2){
        suma+=l*r;
    }
    if ((r-l)+1==1)return;

    f(l, middle);
    f(middle+1, r);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("bigdance.in","r",stdin);
    freopen("bigdance.out","w",stdout);

    cin>>N;
    if(N<2)cout<<0;
//  else cout<<_fun(1, N);

    else f(1, N);

    cout << suma << "\n";

    return 0;
}
