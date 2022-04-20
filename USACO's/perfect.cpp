#include<bits/stdc++.h>

using namespace std;

int mother[105][105];
int media[105];
int result[105];

int main(){

    freopen("perfect.in","r",stdin);
    freopen("perfect.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    long long sol=0;
    cin >> N;
    int x=N/2;
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            cin >> mother[i][j];
        }
    }
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            media[j]=mother[i][j];
        }
        sort(media, media+N);
        result[i]=media[x];
        memset(media, 0, sizeof(media));
    }
    sort(result, result+N);
    cout << result[x];
    return 0;
}