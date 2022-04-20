#include<bits/stdc++.h>

using namespace std;

int ady_x[] = { 0, -1, 1, 0, -1, 1, -1, 1};
int ady_y[] = { 1, 0, 0, -1, 1, 1, -1, -1};

int campo[1010][1010];
bool visitadas [1010][1010];
int F,C;
int contador=0;

class clase{
public:
    int x;
    int y;

    clase(int xx, int yy){
        x = xx;
        y = yy;
    };
};

void BFS(int f, int c){
    queue<clase>cola;
    cola.push(clase(f, c));
    visitadas[f][c]=true;
        while(!cola.empty()){
            clase e = cola.front();   cola.pop();
            int a = e.x;
            int b = e.y;
                for(int k=0; k<8; k++){
                    int xx = a + ady_x[k];
                    int yy = b + ady_y[k];
                    if(xx>=0 && xx<F && yy>=0 && yy<C){
                        if(!visitadas[xx][yy] && campo[xx][yy]>=1){
                            visitadas[xx][yy] = true;
                            cola.push(clase(xx, yy));
                        }
                    }
                }
        }
        contador++;
}


int main(){
    freopen("badgras.in","r",stdin);
    freopen("badgras.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int f,c;
    cin >> F >> C;

    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            cin >> campo[i][j];
        }
    }
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            if (campo[i][j]>=1 && visitadas[i][j]==false){
                c=j;
                f=i;
                BFS(f,c);
            }
        }
    }

    cout << contador;

    return 0;
}