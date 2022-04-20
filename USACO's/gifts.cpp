#include<bits/stdc++.h>

using namespace std;

int N, B;
vector < pair <int, int> >cows;

int funcion(int p){
    vector < int >ord(N);
    fill(ord.begin(), ord.end(), 0);
    ord[p]=cows[p].first/2;
    ord[p]+=cows[p].second;
    for (int i=0; i<N; i++){
        if (i!=p){
            ord[i]=cows[i].first+cows[i].second;
        }
    }
    sort(ord.begin(), ord.end());
    int result=0;
    int add=0;
    for (int i=0; i<N; i++){
        if(result+ord[i]<=B){
            result+=ord[i];
            add++;
        }
        else{
            return add;
        }
    }
}

int main(){

    freopen("gifts.in","r",stdin);
    freopen("gifts.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int mayor=0;
    cin >> N >> B;

    cows.resize(N);
    for (int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        cows[i].first=a;
        cows[i].second=b;
    }

    for (int i=0; i<N; i++){
        int result;
        result = funcion(i);
        if (result > mayor)mayor=result;
    }
    cout << mayor;

    return 0;
}