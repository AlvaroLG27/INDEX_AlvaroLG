#include<bits/stdc++.h>

using namespace std;

int B[10100];
int T[1200010];

int main(){

    freopen("snotes.in","r",stdin);
    freopen("snotes.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, Q;
    int question;
    int aux=0;
    int suport=1;
    int total=0;
    cin >> N;
    cin >> Q;
    for (int i=0; i<N; i++){
        cin >> B[i];
        total+=B[i];
    }
    for (int i=0; i<N; i++){
        for (int j=0; j<B[i]; j++){
            T[aux]=suport;
            aux++;
        }
        suport++;
    }
    for (int i=0; i<Q; i++){
        cin >> question;
        cout << T[question] << "\n";
    }

    return 0;
}
