#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int arr[m][n];

    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x;
    cin >> x;
    
    bool flag = false;

    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << endl;
                flag = true;
            }
        }
    }

    if (flag == true)
    {
        cout << "Element Found" <<endl;
    }
    else
    {
        cout << "Element Not Found" <<endl;
    }
    

    return 0;
}