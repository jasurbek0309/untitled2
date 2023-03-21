#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    long long n; cin >> n;
    vector <int> a;

    for(int i = 1; i <= n; i ++){
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    cout << a[n - 2];

    return 0;
}2


