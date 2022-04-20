#include<bits/stdc++.h>

using namespace std;

int ady_x[] = { 0, -1, 1, 0};
int ady_y[] = { 1, 0, 0, -1};

char espacio[1010][1010];
bool visitadas [1010][1010];
int N;
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

void space(int f, int c){
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
                    if(xx>=0 && xx<N && yy>=0 && yy<N){
                        if(!visitadas[xx][yy] && espacio[xx][yy]=='*'){
                            visitadas[xx][yy] = true;
                            cola.push(clase(xx, yy));
                        }
                    }
                }
        }
        contador++;
}


int main(){
    freopen("space.in","r",stdin);
    freopen("space.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int f,c;
    cin >> N;

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            cin >> espacio[i][j];
        }
    }
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            if (espacio[i][j]=='*' && visitadas[i][j]==false){
                c=j;
                f=i;
                space(f,c);
            }
        }
    }

    cout << contador;


    return 0;
}
