#include <iostream>

using namespace std;

int main()
{
    int n, q, r, u, j = 0;
    cin >> n >> q;
    int a[1000], re[1000], b[1000];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> r >> u;
        if (r > 0)
        {
            for (int y = 0; y < r; y++)
            {
                for (int i = 1; i < n; i++)
                {
                    if (a[i] > a[i + 1])
                    {
                        int g;
                        g = a[i];
                        a[i] = a[i + 1];
                        a[i + 1] = g;
                    }
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (u == a[i])
            {
                re[j] = i;
                break;
            }
        }
        j++;
        for (int i = 1; i <= n; i++)
        {
            a[i] = b[i];
        }
    }
    for (j = 0; j < q; j++)
    {
        cout << re[j] << endl;
    }

    return 0;
}
