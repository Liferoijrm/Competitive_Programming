#include <bits/stdc++.h>
using namespace std;
 
void printVectors(vector<int> v1, vector<int> v2){
    cout << "YES\n";
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i];
        if(i != v1.size()+1) cout << ' ';
    }
    cout << "\n";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i];
        if(i != v2.size()+1) cout << ' ';
    }
    cout << "\n";
}
 
bool validAnswer(vector<int> v1, vector<int> v2, int win, int lose){
    int countWin = 0, countLose = 0;
 
    for (int i = 0; i < v1.size(); i++){
        if(v1[i] > v2[i]) countLose++;
        else if(v1[i] < v2[i]) countWin++;
    }
 
    if (countWin == win && countLose == lose) return true;
    else return false;
}
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--){
        int n, lose, win, draw;
        cin >> n >> lose >> win;
 
        if(win+lose > n || lose >= n || win >= n){
            cout << "NO\n";
            continue;
        }

        vector<int> v1(n), v2(n);
        vector<int> shift;
 
        for(int i = 0; i < n; i++){
            v1[i] = i+1;
        }
 
        int upperLimit = n - lose;
        int lowerLimit = win;
 
        v2.erase(v2.begin() + lowerLimit, v2.begin() + upperLimit);
        v2.insert(v2.begin() + lowerLimit, v1.begin() + lowerLimit, v1.begin() + upperLimit);
        shift.insert(shift.end(), v1.begin(), v1.begin() + lowerLimit);
        shift.insert(shift.end(), v1.begin() + upperLimit, v1.end());
 
        int k = upperLimit;
 
        for(int i = 0; i < shift.size(); i++){
            if(k == n) k = 0;
            v2[k] = shift[i];
            k++;
        }
 
        if (validAnswer(v1, v2, win, lose)) printVectors(v1, v2);
        else cout << "NO\n";
    }
    
    return 0;
}