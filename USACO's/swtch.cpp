#include<bits/stdc++.h>

using namespace std;

    bool luces[510];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("swtch.in", "r", stdin);
    freopen("swtch.out", "w", stdout);

    int N,M;
    int K,S,E;
    int cont=0;

    cin >> N >> M;

    for (int i=0; i<M; i++){
        cin >> K >> S >> E;
        if (K==0){
            for (int f=S; f<=E; f++){
                if (luces[f]==true){
                    luces[f]=false;
                }
                else{
                    luces[f]=true;
                }
            }
        }
        else{
            for (int j=S; j<=E; j++){
                if (luces[j]==true){
                    cont++;
                }
            }
            cout << cont << endl;
        }
        cont=0;
    }

    return 0;
}
