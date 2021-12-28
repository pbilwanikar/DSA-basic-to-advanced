#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int row = 1;
    while (row<=n)
    {
        /* code */
        int col=1;
        while (col<=n)
        {
            /* code */
            char ch = 'A' + col - 1;
            cout << ch << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/*
OUTPUT 
n = 3

A B C 
A B C 
A B C 

*/