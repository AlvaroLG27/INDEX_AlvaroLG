#include<bits/stdc++.h>

using namespace std;

class Arista{
    public:
        int destino;
        int costo;

        Arista(){};
        Arista(int d, int c){
            destino=d; costo=c;
        };

        bool operator > (const Arista& a) const{
            return costo > a.costo;
        };
};

const int MAX = 100005;
const int INF = 1000000000;

vector<Arista> grafo[MAX];
int distancia[MAX];
bool visitado[MAX];
int N;

void init (){
    for (int i=1; i<=N; i++){
        distancia[i] = INF;
        visitado[i] = false;
    }
}

void Dijkstra(int inicial){
    init();
    priority_queue<Arista, vector <Arista>, greater <Arista> > cola;
    Arista u, v;
    int actual, adyacente, m;
    int peso;

    cola.push(Arista(inicial, 0));
    distancia[inicial]=0;

    for (int i=1; i<=N; i++){
        do{
            if (cola.empty())return;
            u=cola.top(); cola.pop();
            actual = u.destino;
        }while (visitado[actual]);

        visitado[actual] = true;

        for (int j=0; j<grafo[actual].size(); j++){
            v = grafo[actual][j];
            adyacente = v.destino;
            peso = v.costo;
            if(distancia[adyacente] > distancia[actual] + peso){
                distancia[adyacente] = distancia[actual] + peso;
                cola.push(Arista(adyacente, distancia[adyacente]));
            }
        }
    }
}

int main(){

    freopen("bparty.in","r",stdin);
    freopen("bparty.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int M,X,a,b;
    int c;
    cin >> N >> M >> X;
    for (int i = 0; i<M; i++){
        cin >> a >> b >> c;
        grafo[a].push_back(Arista(b,c));
        grafo[b].push_back(Arista(a,c));
    }
    Dijkstra(X);
    int mayor=0;
    for(int i=1; i<=N; i++){
        if (distancia[i]>mayor) mayor=distancia[i];
    }
    cout << mayor*2;


    return 0;
}