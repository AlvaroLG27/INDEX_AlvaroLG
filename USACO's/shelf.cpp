#include<bits/stdc++.h>

using namespace std;

int cows[30000];

int main(){

    freopen("shelf.in","r",stdin);
    freopen("shelf.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N,B;
    long long suma=0;
    long long cont=0;

    cin >> N >> B;
    
    for (int i=0; i<N; i++){
        cin >> cows[i];
    }
    
    sort(cows, cows+N);
    reverse(cows, cows+N);

    for (int i=0; i<N; i++){
        if (suma<B){
            suma+=cows[i];
            cont++;
        }
        else {
            break;
        }
    }
    cout << cont;
    return 0;
}