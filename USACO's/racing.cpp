#include<bits/stdc++.h>

using namespace std;

int main(){
    freopen("racing.in","r",stdin);
    freopen("racing.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int M,T,U,F,D;
    int acumulado=0;
    int result=0;
    int estado=0;
    cin >> M >> T >> U >> F >> D;
    char tramos[100010];
    for (int i=0; i<T; i++){
        cin >> tramos[i];
    }

    for (int i=0; i<T && estado==0; i++){
        if (tramos[i]=='u'){
            if (acumulado+U <= M){
                int aux=acumulado;
                aux+=U;
                if (aux+D <= M){
                    acumulado+=U;
                    acumulado+=D;
                    result++;
                }
                else{
                    estado=1;
                }
            }
        }
        else if (tramos[i]=='f'){
            if (acumulado+F <= M){
                int aux=acumulado;
                aux+=F;
                if (aux+F <= M){
                    acumulado+=F;
                    acumulado+=F;
                    result++;
                }
                else{
                    estado=1;
                }
            }
        }
        else if (tramos[i]=='d'){
            if (acumulado+D <= M){
                int aux=acumulado;
                aux+=D;
                if (aux+U <= M){
                    acumulado+=D;
                    acumulado+=U;
                    result++;
                }
                else{
                    estado=1;
                }
            }
        }
    }
    cout << result;

    return 0;
}
