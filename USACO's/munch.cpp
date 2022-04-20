#include<bits/stdc++.h>

using namespace std;

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

char campo[100][100];
int pasto[100][100];
bool visitadas[100][100];

int ady_x[] = { 0, -1, 1, 0};
int ady_y[] = { 1, 0, 0, -1};

int main(){

    freopen("munch.in","r",stdin);
    freopen("munch.out","w",stdout);

    int R,C;
    int Br,Bc;
    int Cr,Cc;

    cin >> R >> C;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin >> campo[i][j];
            if (campo[i][j]=='B'){
                Br=i;
                Bc=j;
            }
            if (campo[i][j]=='C'){
                Cr=i;
                Cc=j;
            }
        }
    }

    pasto[Cr][Cc]=0;
    visitadas[Cr][Cc]=true;
    queue<clase> cola;
    cola.push(clase(Cr, Cc, pasto[Cr][Cc]));
    while(!cola.empty()){
        clase e = cola.front();   cola.pop();
        int a = e.x;
        int b = e.y;
        for(int i=0; i<4; i++){
            int xx = a + ady_x[i];
            int yy = b + ady_y[i];
            if(xx>=0 && xx<R && yy>=0 && yy<C){
                if(!visitadas[xx][yy] && campo[xx][yy]!='*'){
                    visitadas[xx][yy] = true;
                    cola.push(clase(xx, yy, pasto[xx][yy]+1));
                    pasto[xx][yy]=pasto[a][b]+1;
                }
            }
        }
    }

    cout << pasto[Br][Bc];

    return 0;
}
