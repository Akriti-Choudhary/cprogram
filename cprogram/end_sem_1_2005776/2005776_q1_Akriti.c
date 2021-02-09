#include <stdio.h>
int fibonacci(int n)
{
    int arr[n], i = 0, k = 1, a = 0, b = 1, mx = 0;
    while (i < n)
    {
        for (int j = 0; j < k; j++)
        {
            if (i < n)
            {
                arr[i] = b;
                if (b > mx)
                    mx = b;
                b = a + b;
                a = b - a;
                i++;
            }
            else
                break;
        }
        k++;
        a = 0;
        b = 1;
    }
    printf("Array : \n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\nMax Element : %d\n", mx);
    return 0;
}

int main()	//starting of main
{
    int n;
    printf("Enter the number of fibonaaci terms: ");
    scanf("%d", &n);

    fibonaci(n);
    return 0;
}	//end of main
