#include<bits/stdc++.h>

using namespace std;

vector <pair <int,int> > cows;

int main(){

    freopen("lonesome.in","r",stdin);
    freopen("lonesome.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    double result=0;
    pair <int, int> XD;     
    cin >> N;

    cows.resize(N+1);

    for (int i=1; i<=N; i++){
        int a,b;
        cin >> a >> b;
        cows[i].first=a;
        cows[i].second=b;
    }
    for (int i=1; i<N; i++){
        for (int j=i+1; j<N; j++){
            double a=cows[i].first-cows[j].first;
            double b=cows[i].second-cows[j].second;
            double c=(a*a)+(b*b);
            double sol=sqrt(c);
            if (sol>result){
                result=sol;
                XD.first=i;
                XD.second=j;
            }
        }
    }
    cout << XD.first << " " << XD.second;

    return 0;
}