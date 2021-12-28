#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; // no. of rows

    int i = 1;
    while(i<=n){
        for(int j=n; j>=1;)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}