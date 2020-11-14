//Bubblesort algorithm
#include<stdio.h>
void PrintArray(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void BubbleSort(int *A,int n)
{
    printf("The initial Array is : ");
    for(int pass=0;pass<n-1;pass++)
    {
        int IsSorted=1;
        PrintArray(A,n);
        printf("\nAfter pass number : %d, The Array is below\n",pass+1);
        for(int i=0;i<n-1-pass;i++)
        {
            if(A[i]>A[i+1])
            {
                int temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
                IsSorted=0;
            }

        }
        if(IsSorted)
            {
                PrintArray(A,n);
                printf("average case");
                return;
            }
    }
    PrintArray(A,n);
    printf("Damn!!!It was the worst case.");
}

int main()
{
    int A[]={3,3,4,5,4,2,23,8,6,9,077};
    int n=sizeof(A)/sizeof(int);
    printf("%d\n",n);
    BubbleSort(A,n);
    return 0;
}

