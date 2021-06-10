#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;

    int arr[n][m];

    for(int i= 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // for(int i= 0; i < n; i++)
    // {
    //     for(int j = 0; j < m; j++)
    //     {
    //        if (arr[i][j] == k)
    //        {
    //            cout << "Element Found" << endl;
    //        }
    //        else
    //        {
    //            cout << "Element not found" <<endl;
    //        }
    //     }

    // }

    int r = 0, c = m-1;
    bool found;
    while (r < n && c >= 0)
    {
        if (arr[r][c] == k)
        {
            found = true;
        }
        if (arr[r][c] > k)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found == true)
    {
        cout << "Elelment Found" << endl;
    }
    else
    {
        cout << "Element not found" <<endl;
    }
    return 0;
}
    