#include <stdio.h>

int main()
{

    int n1, n2;

    printf("Dwse plithos stoixion tu A\n");
    scanf("%d", &n1);

    printf("Dwse plithos stoixion tu B\n");
    scanf("%d", &n2);

    int A[n1], B[n2], C[n1 + n2];

    printf("Gemise ton A\n");

    for (int i = 0; i < n1; i++)
        scanf("%d", &A[i]);

    printf("Gemise ton B\n");

    for (int i = 0; i < n1; i++)
        scanf("%d", &B[i]);

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (A[i] <= B[i]){
            C[k] = A[i];
        i++;
        }
        else
        {
            C[k] = B[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        C[k] = A[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        C[k] = B[j];
        j++;
        k++;
    }

    printf("O neos pinakas\n");

    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", C[i]);
}