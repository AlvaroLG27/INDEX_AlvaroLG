#include<bits/stdc++.h>

using namespace std;

int main(){

    freopen("timecards.in","r",stdin);
    freopen("timecards.out","w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, Nlines;
    cin >> N >> Nlines;

    vector <pair <int, int> > cows(N+1);
    vector <long long> vacas(N+1);

    for (int i=0; i<Nlines; i++){
        int v, HH, MM;
        string process;
        cin >> v >> process >> HH >> MM;
        if (process=="START"){
            cows[v].first=HH;
            cows[v].second=MM;
        }
        else if (process=="STOP"){
            if (cows[v].second<=MM && cows[v].first<HH){
                if (HH-cows[v].first==1){
                    vacas[v]+=60-cows[v].second;
                    vacas[v]+=MM;
                }
                else{
                    vacas[v]+=60-cows[v].second;
                    vacas[v]+=(HH-(cows[v].first+1))*60;
                    vacas[v]+=MM;
                }
            }
            else if (cows[v].second<=MM && cows[v].first==HH){
                vacas[v]+=MM-cows[v].second;
            }
            else if (cows[v].second>=MM && cows[v].first<HH){
                if (HH-cows[v].first==1){
                    vacas[v]+=60-cows[v].second;
                    vacas[v]+=MM;
                }
                else{
                    vacas[v]+=60-cows[v].second;
                    vacas[v]+=(HH-(cows[v].first+1))*60;
                    vacas[v]+=MM;
                }
            }
        }
    }
    for (int i=1; i<=N; i++){
        if (vacas[i]%60==0){
            cout << vacas[i]/60 << " " << "0" << endl;
        }
        else {
            cout << vacas[i]/60 << " " << vacas[i]%60 << endl;
        }
    }

    return 0;
}
