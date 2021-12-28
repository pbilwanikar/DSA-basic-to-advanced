#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row =1;
    while (row<=n)
    {
        char ch = 'A' + row - 1;
        int col=1;
        while (col<=row)
        {
            /* code */
            cout<< ch << " ";
            col++;
        }
        cout << endl;
        row++;
        
        /* code */
    }
    
}

/*
OUTPUT
n=4

A 
B B 
C C C 
D D D D

*/