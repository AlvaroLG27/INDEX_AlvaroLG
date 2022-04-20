#include<bits/stdc++.h>

using namespace std;

class Arista{
    public:
        long long destino;
        long long costo;

        Arista(){};
        Arista(long long d, long long c){
            destino=d; costo=c;
        };

        bool operator > (const Arista& a) const{
            return costo > a.costo;
        };
};

const long long MAX = 1000005;
const long long INF = 1000000000;

vector<Arista> grafo[MAX];
long long distancia[MAX];
bool visitado[MAX];
long long N;
long long suma=0;
long long sum=0;
long long M,X,a,b;
long long Xa, Xb;
long long c;

void init (){
    for (int i=1; i<=N; i++){
        distancia[i] = INF;
        visitado[i] = false;
    }
}

void Dijkstra_x(long long inicial, long long final){
    init();
    priority_queue<Arista, vector <Arista>, greater <Arista> > cola;
    Arista u, v;
    long long actual, adyacente, m;
    long long peso;

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
    suma+=distancia[final];
}
void Dijkstra_y(long long inicial, long long final){
    init();
    priority_queue<Arista, vector <Arista>, greater <Arista> > cola;
    Arista u, v;
    long long actual, adyacente, m;
    long long peso;

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
    sum+=distancia[final];
}


int main(){

    freopen("apple.in","r",stdin);
    freopen("apple.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> M >> N >> X >> Xa >> Xb;
    for (int i = 0; i<M; i++){
        cin >> a >> b >> c;
        grafo[a].push_back(Arista(b,c));
        grafo[b].push_back(Arista(a,c));
    }
    long long k=0;
    Dijkstra_x(X, Xb);
    Dijkstra_x(Xb, Xa);

    Dijkstra_y(X, Xa);
    Dijkstra_y(Xa, Xb);

    if (suma<sum)cout << suma;
    else cout << sum;

    return 0;
}