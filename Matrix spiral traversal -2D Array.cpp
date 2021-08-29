
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int rs = 0; //row start
    int cs = 0; //column start
    int re = n - 1; //row end
    int ce = m - 1; //column end
    int dir = 0;
    //dir=0-- moving rightwards in a row
    //dir=1-- moving downwards in a column
    //dir=2-- moving leftwards in a row
    //dir=3-- moving upwards in a column

    while (rs <= re && cs <= ce)
    {
        if (dir == 0)
        {
            for (int i = cs; i <= ce; i++)
            {
                cout << a[rs][i] << " ";
            }
            rs++;
        }
        else if (dir == 1)
        {
            for (int i = rs; i <= re; i++)
            {
                cout << a[i][ce] << " ";
            }
            ce--;
        }
        else if (dir == 2)
        {
            for (int i = ce; i >= cs; i--)
            {
                cout << a[re][i] << " ";
            }
            re--;
        }
        else if (dir == 3)
        {
            for (int i = re; i >= rs; i--)
            {
                cout << a[i][cs] << " ";
            }
            cs++;
        }
        dir = (dir + 1) % 4;
    }
}