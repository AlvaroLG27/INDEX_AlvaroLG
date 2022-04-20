#include<bits/stdc++.h>

using namespace std;

vector <pair <int,int> > cows;
vector <pair <int,int> > copi;

int main(){
    freopen("elect.in","r",stdin);
    freopen("elect.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long N,K;
    long long biger=0;
    long long indicator=0;
    cin >> N >> K;

    cows.resize(N);
    copi.resize(N);

    for (int i=0; i<N; i++){
        long long a,b;
        cin >> a >> b;
        cows[i].first=a; cows[i].second=b;
        copi[i].first=a; copi[i].second=b;
    }   

    sort(cows.begin(), cows.end());
    reverse(cows.begin(), cows.end());

    for (int i=0; i<K; i++){
        if (cows[i].second>biger){
            biger=cows[i].second;
        }
    }
    for (int i=0; i<N; i++){
        if (copi[i].second==biger){
            indicator=i+1;
        }
    }

    cout << indicator;

    return 0;
}