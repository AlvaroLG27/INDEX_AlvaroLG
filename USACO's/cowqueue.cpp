#include<bits/stdc++.h>

using namespace std;

vector < pair <int, int> > cows;

int main(){
    freopen("cowqueue.in","r",stdin);
    freopen("cowqueue.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    int time=0;
    cin >> N;
    cows.resize(N);
    for (int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        cows[i].first = a;
        cows[i].second = b;
    }
    sort (cows.begin(), cows.end());
    for (int i=0; i<N; i++){
        if (i==0){
            time += cows[i].first + cows[i].second;
        }
        else if (cows[i].first > time){
            time = cows[i].first + cows[i].second;
        }
        else if (cows[i].first < time){
            time+=cows[i].second;
        }
    }
    cout << time;


    return 0;
}