#include<bits/stdc++.h>

using namespace std;

long long distancia (pair <int, int> p1, pair <int, int> p2);

int main(){
    freopen("claust.in","r",stdin);
    freopen("claust.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    int x=0,y=0;
    long long menor=1e18;
    int bestX=0;
    int bestY=0;
    cin >> N;

    pair <int, int> arreglo[2003];

    for (int i=0; i<N; i++){
        cin >> x >> y;
        arreglo[i].first=x;
        arreglo[i].second=y;
    }
    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            long long d = distancia(arreglo[i], arreglo[j]);
            if (d<menor){
                bestX = i;
                bestY = j;
                menor = d;
            }
        }
    }
    cout << (bestX+1) << " " << (bestY+1);

    return 0;
}

long long distancia (pair <int, int> p1, pair <int, int> p2){
    long long a = p2.second - p1.second;
    long long b = p2.first - p1.first;
    long long d = (a*a)+(b*b);
    return d;
}
