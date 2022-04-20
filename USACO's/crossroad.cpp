#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("crossroad.in","r",stdin);
    freopen("crossroad.out","w",stdout);


    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int vacas[11];
    int N=0,A=0;
    int contador=0;
    int aux=0;

    for (int i=0; i<11; i++){
        vacas[i]=-1;
    }

    cin >> N;
    for (int i=0; i<N; i++){
        cin >> A;
        if (vacas[A]==-1){
            cin >> vacas[A];
        }
        else{
            aux = vacas[A];
            cin >> vacas[A];
            if (vacas[A]!=aux){
                contador++;
            }
        }
        aux=0;
    }
    cout << contador;

    return 0;
}
