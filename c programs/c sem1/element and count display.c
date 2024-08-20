#include <stdio.h>
void main()
{
    int n, a[10], k = 0, i, j, c = 0, b[20], f, s,c1;
    printf("enter limit:");
    scanf("%d", &n);
    printf("enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("element\t\tNo. of times\n");
    for (i = 0; i < n; i++)
    {
        c = 0;
        c1=0;
        for (s = 0;s<k;s++)
        {
            if (a[i] == b[s])
            {
                c1 = 1;
                break;
            }
        }
        if (c1 == 0)
        {
            for (j = 0; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    b[k] = a[i];
                    k++;
                }
            }
            if (c > 1)
            {
                    printf("%d\t\t%d\n", a[i], c);
            }
        }
        else
        {
            continue;
        }
    }
}