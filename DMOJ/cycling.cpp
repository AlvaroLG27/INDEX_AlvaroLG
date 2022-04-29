#include <bits/stdc++.h>

using namespace std;

int main (){
    freopen("cycling.in","r",stdin);
    freopen("cycling.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long T;
    long long D=0,H=0,M=0;
    double mayor=-1;
    long long indice=0;
    cin >> T;
    for (int i=1; i<=T; i++){
        long long a,b,d;
        double v;
        cin >> a >> b >> d;
        H+=a;
        M+=b; 
        d=d*1000;
        b+=a*60;
        v=d/b;
        if (v>mayor){
            mayor=v;
            indice=i;
        }
    }
    if (M>60){
        H+=M/60;
        M=M%60;
    }
    if (H>24){
        D+=H/24;
        H=H%24;
    }

    cout << D << " " << H << " " << M << " " <<indice;

    return 0;
}