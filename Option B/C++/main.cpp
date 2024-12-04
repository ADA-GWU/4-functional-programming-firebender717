#include <iostream>
#include <vector>

using namespace std;

int whatIsLeft(int &n){
    vector<int> vec(n+1);
    int nRemaining = n;
    for (int i = 1; i < n+1; i++){
        vec[i] = i;
    }
    int idx = 0;
    while (nRemaining != 1){
        // Strike evens 
        idx = 0;
        for (int i = 1; i < n+1; i++){
            if (vec[i]){
                idx++;
                if (!(idx % 2)) {
                    vec[i] = 0;
                    nRemaining--;
                }
            }
        }
        if (nRemaining == 1) {break;}
        // Strike odds
        idx = 0;
        for (int i = 1; i < n+1; i++){
            if (vec[i]){
                idx++;
                if (idx % 2) {
                    vec[i] = 0;
                    nRemaining--;
                }
            }
        }
        if (nRemaining == 1) {break;}
        // Strike the ones divisible by 3
        idx = 0;
        for (int i = 1; i < n+1; i++){
            if (vec[i]){
                idx++;
                if (!(idx % 3)) {
                    vec[i] = 0;
                    nRemaining--;
                }
            }
        }
        if (nRemaining == 1) {break;}
    }
    // Return the final remaining one
    for (int i = 1; i < n+1; i++){
        if (vec[i]){
            return vec[i];
        }
    }
}

int main() {
    int n;
    cin >> n;

    cout << whatIsLeft(n);

    return 0;
}
