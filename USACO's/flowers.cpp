#include <iostream>

using namespace std;

int flowers[10010];

int main(){
    freopen("flowers.in","r",stdin);
    freopen("flowers.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int total;
    int N;
    cin >> total >> N;

    for (int i=0; i<N; i++){
        int k,m;
        cin >> k >> m;
        for (int j=k; j<=total; j+=m){
            flowers[j]=1;
        }
    }
    int cont=0;
    for (int i=0; i<total; i++){
        if (flowers[i]==0)cont++;
    }
    cout << cont;

    return 0;
}
