#include<bits/stdc++.h>

using namespace std;

int K,N,M;
int cows[110];
vector < int > grafo[1010];
int points[1010];
int visitados[1010];

void BFS(int nodo){
    int u,v,nodo_size;
    queue<int>cola;
    cola.push(nodo);
    points[nodo]++;
    visitados[nodo]=0;
    while(!cola.empty()){
        u=cola.front(); cola.pop();
        nodo_size=grafo[u].size();
        for (int i=0; i<nodo_size; i++){
            v=grafo[u][i];
            if (visitados[v]==-1){
                visitados[v]=0;
                cola.push(v);
                points[v]++;
            }
        }
    }

}

int main(){

    freopen("picnic.in","r",stdin);
    freopen("picnic.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> K >> N >> M;
    for (int i=0; i<K; i++){
        cin >> cows[i];
    }
    for (int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;
        grafo[a].push_back(b);
    }

    memset(points, 0, sizeof(points));

    for (int i=0; i<K; i++){
        memset(visitados, -1, sizeof(visitados));
        BFS(cows[i]);
    }
    int cont=0;
    for (int i=1; i<=N; i++){
        if (points[i]==K){
            cont++;
        }
    }
    cout << cont;

    return 0;
}