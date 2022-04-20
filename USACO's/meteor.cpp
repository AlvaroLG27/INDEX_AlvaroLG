#include <bits/stdc++.h>

using namespace std;

int const TAM = 50010;

int ady_X[]={1,0,-1,0};
int ady_Y[]={0,1,0,-1};

const int mat=1010;
int meteor [mat][mat];
bool visitado [mat][mat];

class clase{
    public:
        int x;
        int y;
        int contador;
    clase (int xx, int yy, int aux){
        contador=aux;
        x=xx;
        y=yy;
    }
};

int BFS(int f, int c){
    int cont=0;
    queue<clase>cola;
    cola.push(clase(f,c,0));
    visitado[f][c]=true;
        while (!cola.empty()){
            clase e = cola.front(); cola.pop();
            int a = e.x;
            int b = e.y;
            int z = e.contador;
            if (meteor[a][b]==0){
                return z;
            }
                for (int k=0; k<4; k++){
                    int xx = a + ady_X[k];
                    int yy = b + ady_Y[k];
                    int rr=z+1;
                    if (xx>=0 && xx<mat && yy>=0 && yy<mat){
                        if ((visitado[xx][yy]==false && meteor[xx][yy]==0)||(rr<meteor[xx][yy] && visitado[xx][yy]==false)){
                            visitado[xx][yy]=true;
                            cola.push(clase(xx,yy,rr));
                        }
                    }
                }
        }
    return -1;
}

int main(){

    freopen("meteor.in","r",stdin);
    freopen("meteor.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m;
    int X;
    int Y;
    int T;
    
    cin >> m;

    for (int i=0; i<m; i++){
        cin >> X >> Y >> T;
        if(T==0)T=-1;
        if(meteor[X][Y]==0)
            meteor[X][Y]=T;
        else meteor[X][Y]=min(meteor[X][Y],T);
       for (int k=0; k<4; k++){
            int xx,yy;
            xx = X + ady_X[k];
            yy = Y + ady_Y[k];
            if (xx>=0 && xx<mat && yy>=0 && yy<mat){
                if (meteor[xx][yy]==0){
                    meteor[xx][yy]=T;
                } 
                else {
                    meteor[xx][yy] = min(meteor[xx][yy],T) ;
                }
            }
        }
    }

    int result;
    result=BFS(0,0);
    cout << result;
    return 0;
}