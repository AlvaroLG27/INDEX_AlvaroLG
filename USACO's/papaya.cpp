#include<bits/stdc++.h>

using namespace std;

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

int campo[50][50];
bool visitadas[50][50];
int F,C;
int XX=0,YY=0;
int papayas=0;
int mayor=0;

void bfs(int f, int c){
    papayas+=campo[0][0];
    queue<clase>cola;
    cola.push(clase(f, c));
    visitadas[f][c]=true;
        while(!cola.empty()){
            clase e = cola.front();   cola.pop();
            int a = e.x;
            int b = e.y;
                for(int k=0; k<4; k++){
                    int xx = a + ady_x[k];
                    int yy = b + ady_y[k];
                    if(xx>=0 && xx<F && yy>=0 && yy<C){
                        if (campo[xx][yy]>mayor && !visitadas[xx][yy]){
                            mayor=campo[xx][yy];
                            XX=xx;
                            YY=yy;
                        }
                    }
                }
                visitadas[XX][YY] = true;
                cola.push(clase(XX, YY));
                papayas+=campo[XX][YY];
                if (XX==F-1 && YY==C-1){
                    return;
                }
                mayor=0;
                XX=0;YY=0;
        }
}

int main(){
    freopen("papaya.in","r",stdin);
    freopen("papaya.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    

    cin >> F >> C;
    
    for (int i=0; i<F; i++){
        for (int j=0; j<C; j++){
            cin >> campo[i][j];
        }
    }
    bfs(0,0);
    cout << papayas;

    return 0;
}