#include<bits/stdc++.h>

using namespace std;

int main(){

    freopen("ratf.in","r",stdin);
    freopen("ratf.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    int a, b;
    int contador=0;
    cin >> N >> K;

    queue<int>cola;
    a=(N+K)/2;
    b=N-a;
    if ((N+K)%2!=0 || b<=0 || a<=0){
        contador=1;
    }
    else {
        cola.push(a);
        cola.push(b);
    }
    while (!cola.empty()){
        int cow=cola.front(); cola.pop();
        a=(cow+K)/2;
        b=cow-a;  
        if ((cow+K)%2!=0 || b<=0 || a<=0){
            contador++;
        }
        else {
            cola.push(a);
            cola.push(b);
        }
    }
    cout << contador;

    return 0;
}