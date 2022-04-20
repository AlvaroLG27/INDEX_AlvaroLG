#include<bits/stdc++.h>

using namespace std;

int F,C;
int fresas=0;
int mapa[1010][1010];
bool visitadasB[1010][1010];
bool visitadasC[1010][1010];
int mapaB[1010][1010];
int mapaC[1010][1010];
int distancia[1000010];

int ady_x[] = { 0, -1, 1, 0};
int ady_y[] = { 1, 0, 0, -1};

class clase{
public:
    int x;
    int y;
    int valor;

    clase(int xx, int yy, int v){
        x = xx;
        y = yy;
        valor = v;
    };
};

void BFS_Bessie(int Bf, int Bc){
    int aux=0;
    mapaB[Bf][Bc]=0;
    visitadasB[Bf][Bc]=true;
    queue<clase> cola;
    cola.push(clase(Bf, Bc, mapaB[Bf][Bc]));
    while(!cola.empty()){
        clase e = cola.front();   cola.pop();
        int a = e.x;
        int b = e.y;
        for(int i=0; i<4; i++){
            int xx = a + ady_x[i];
            int yy = b + ady_y[i];
            if(xx>=1 && xx<=F && yy>=1 && yy<=C){
                if(!visitadasB[xx][yy] && mapa[xx][yy]!=1){
                    visitadasB[xx][yy] = true;
                    cola.push(clase(xx, yy, mapaB[a][b]+1));
                    mapaB[xx][yy]=mapaB[a][b]+1;
                }
            }
        }
    }
    for (int i=1; i<=F; i++){
        for(int j=1; j<=C; j++){
            if (mapa[i][j]==4){
                distancia[aux]=mapaB[i][j];
                aux++;
            }
        }
    }
}
void BFS_Caballero(int Cf, int Cc){
    int aux=0;
    mapaC[Cf][Cc]=0;
    visitadasC[Cf][Cc]=true;
    queue<clase> cola;
    cola.push(clase(Cf, Cc, mapaC[Cf][Cc]));
    while(!cola.empty()){
        clase e = cola.front();   cola.pop();
        int a = e.x;
        int b = e.y;
        for(int i=0; i<4; i++){
            int xx = a + ady_x[i];
            int yy = b + ady_y[i];
            if(xx>=1 && xx<=F && yy>=1 && yy<=C){
                if(!visitadasC[xx][yy] && mapa[xx][yy]!=1){
                    visitadasC[xx][yy] = true;
                    cola.push(clase(xx, yy, mapaC[a][b]+1));
                    mapaC[xx][yy]=mapaC[a][b]+1;
                }
            }
        }
    }
    for (int i=1; i<=F; i++){
        for(int j=1; j<=C; j++){
            if (mapa[i][j]==4){
                distancia[aux]+=mapaC[i][j];
                aux++;
            }
        }
    }
}

void mapeado(){
    int Bc, Bf;
    int Cc, Cf;
    int aux=0;
    for (int i=1; i<=F; i++){
        for(int j=1; j<=C; j++){
            cin >> mapa[i][j];
            if (mapa[i][j]==2){
                Bf = i;
                Bc = j;
            }
            if (mapa[i][j]==3){
                Cf = i;
                Cc = j;
            }
            if (mapa[i][j]==4){
                fresas++;
            }
        }
    }
    BFS_Bessie(Bf,Bc);
    BFS_Caballero(Cf,Cc);
}


int main(){
    freopen("ni.in","r",stdin);
    freopen("ni.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int menor=1e9;
    cin >> C >> F;
    mapeado();

    for (int i=0; i<fresas; i++){
        if (distancia[i]<menor && distancia[i]!=0){
            menor=distancia[i];
        }
    }

    cout << menor;

    return 0;
}