#include<bits/stdc++.h>

using namespace std;

class clase{
    public:
        int x;
        int y;
    clase(int xx, int yy){
        x=xx;
        y=yy;
    };
};

int R,C;
int cont=0;
char campo[110][110];
bool visitadas[110][110];
char pastizal[110][110];

int ady_x[]={1,0,-1,0};
int ady_y[]={0,1,0,-1};

void bfs(int f, int c){
    queue<clase>cola;
    cola.push(clase(f,c));
    visitadas[f][c]=true;
        while(!cola.empty()){
            clase e = cola.front(); cola.pop();
            int a = e.x;
            int b = e.y;
                for (int k=0; k<4; k++){
                    int xx = a + ady_x[k];
                    int yy = b + ady_y[k];
                    if (xx>=0 && xx<R && yy>=0 && yy<C){
                        if(!visitadas[xx][yy] && campo[xx][yy]=='#'){
                            visitadas[xx][yy]=true;
                            cola.push(clase(xx,yy));
                        }
                    }
                }
        }
    cont++;
}

int main(){

    freopen("bgrass.in","r",stdin);
    freopen("bgrass.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> R >> C;

    for (int i=0; i<R; i++){
        for (int j=0; j<C; j++){
            cin >> campo[i][j];
        }
    }
    for (int i=0; i<R; i++){
        for (int j=0; j<C; j++){
            if(!visitadas[i][j] && campo[i][j]=='#'){
                bfs(i,j);
            }
        }
    }
    
    cout << cont;
    return 0;
}