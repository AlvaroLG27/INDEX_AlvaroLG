#include<bits/stdc++.h>

using namespace std;

int N,C;
int sol=INT_MIN;
vector<int>grafo[10010];
vector<int>distancia(10010);

void BFS(){
    queue<int>cola;
    cola.push(0);
    fill(distancia.begin(),distancia.end(),INT_MAX);
    distancia[0]=0;
        while(!cola.empty()){
            int e = cola.front(); cola.pop();
                for (int k=0; k<grafo[e].size(); k++){
                    int N_ady = grafo[e][k];
                        if (distancia[N_ady]>distancia[e]+1){
                            distancia[N_ady]=distancia[e]+1;
                            cola.push(N_ady);
                            sol=max(sol,distancia[N_ady]);
                        }
                }
        }
}

int main(){

    freopen("sixdeg.in","r",stdin);
    freopen("sixdeg.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> C;

    for (int i=0; i<C; i++){
        int a,b;
        cin >> a >> b;
        grafo[a-1].push_back(b-1);
        grafo[b-1].push_back(a-1);
    }
    BFS();
    cout << sol;
    return 0;
}