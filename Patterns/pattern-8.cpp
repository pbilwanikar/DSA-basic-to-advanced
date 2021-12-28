#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        int count = row;
        /* code */
        int col =1;
        while(col <=row){
            cout << count << " ";
            count++, col++;
        }
        cout << endl;
        row++;
    }
    return 0;   
}
// other formula ----> i-j+1
/*
OUTPUT 
n = 4

1 
2 3 
3 4 5 
4 5 6 7 

 */