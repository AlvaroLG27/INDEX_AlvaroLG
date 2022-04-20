#include <bits/stdc++.h>

using namespace std;

int suma[3000];
int costo[3000];

int main(){
    freopen("river.in", "r", stdin);
    freopen("river.out", "w", stdout);

    int n, Go;
    cin >> n >> Go;
    suma[0]=Go;

    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        suma[i] = suma[i-1] + a;
    }

    costo[0]=-suma[0];

    for(int i=1; i<=n; i++){
        costo[i]=suma[i];
        for(int j=0; j<=i; j++){
            if(costo[i] > (suma[j] + suma[0] + costo[i-j])){
                costo[i] = suma[j] + suma[0] + costo[i-j];
            }
        }
    }
    cout<<costo[n];
    return 0;
}
