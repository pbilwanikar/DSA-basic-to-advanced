#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a =0;
    int b =1;
    int nextNumber;
    cout << a << " "<< b << " "; 
    for(int i =1; i<=n; i++){
        nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
}

/*Output 
Input = 10
Output = 0 1 1 2 3 5 8 13 21 34 55 89
*/