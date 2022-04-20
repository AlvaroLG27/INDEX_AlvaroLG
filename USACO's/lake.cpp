#include<bits/stdc++.h>

using namespace std;

char lago[110][110];
bool visitadas[110][110];
int F,C,K;
int mayor=0;

int ady_x[] = { 0, -1, 1, 0};
int ady_y[] = { 1, 0, 0, -1};

class clase{
public:
    int x;
    int y;

    clase(int xx, int yy){
        x = xx;
        y = yy;
    };
};

int BFS(int fila, int columna){
    int contador = 1;
    queue<clase>cola;
    cola.push(clase(fila, columna));
    visitadas[fila][columna]=true;
    while(!cola.empty()){
        clase e = cola.front();   cola.pop();
        int a = e.x;
        int b = e.y;
            for(int k=0; k<4; k++){
                int xx = a + ady_x[k];
                int yy = b + ady_y[k];
                if(xx>=1 && xx<=F && yy>=1 && yy<=C){
                    if(!visitadas[xx][yy] && lago[xx][yy]=='#'){
                        visitadas[xx][yy] = true;
                        cola.push(clase(xx, yy));
                        contador++;
                    }
                }
            }
    }
    return contador;
}

void lake(){
    int result;
    for (int i=1; i<=F; i++){
        for (int j=1; j<=C; j++){
            lago[i][j]='.';
        }
    }
    for(int i=0; i<K; i++){
        int f,c;
        cin >> f >> c;
        lago[f][c]='#';
    }
    for (int i=1; i<=F; i++){
        for (int j=1; j<=C; j++){
            if(lago[i][j]=='#' && visitadas[i][j]==false){
                int fila, columna;
                columna = j;
                fila = i;
                result = BFS (fila, columna);
                if (result>mayor)mayor=result;
            }
        }
    }
}


int main(){

    freopen("lake.in","r",stdin);
    freopen("lake.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> F >> C >> K;

    lake();

    cout << mayor;

    return 0;
}