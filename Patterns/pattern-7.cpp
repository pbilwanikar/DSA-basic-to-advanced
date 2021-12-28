#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row=1, count =1;
    while(row<=n){
        int j =1;
        while(j <=row){
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/*
OUTPUT :
n = 6

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 

*/