#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while (row<=n)
    {
        int col = 1;
        /* code */
        while (col<=n)
        {
            char ch = 'A' + row + col -2;
            cout << ch<<" ";
            col++;
        }
        cout << endl;
        row++;
        
    }
    
}

/*
OUTPUT
n = 4

A B C D 
B C D E 
C D E F 
D E F G 
*/