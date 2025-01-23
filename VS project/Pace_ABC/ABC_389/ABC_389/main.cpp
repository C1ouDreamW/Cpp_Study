#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
long long a[300001], b[300001], q, jian = 0;
int main()
{
    int i = 0, j = 1, k;
    a[0] = 0;
    scanf("%lld", &q);
    while (q--)
    {
        int n, m;
        scanf("%d", &n);

        if (n == 1)
        {
            scanf("%d", &m);
            i++;
            b[i] = m;
            a[i] = a[i - 1] + m;
        }
        else if (n == 2)
        {
            jian = jian + b[j];
            j++;
        }
        else if (n == 3)
        {
            scanf("%d", &k);
            printf("%d\n", a[k + j - 2] - jian);
        }
    }
    return 0;
}