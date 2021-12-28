#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';
    while (row<=n)
    {
        int col =1;
        while (col<=row)
        {
            /* code */
            cout<< ch << " ";
            ch = ch + 1;
            col++;
        }
        cout << endl;
        row++;
    }
    
}


/*
OUTPUT
n= 4

A 
B C 
D E F 
G H I J 
*/