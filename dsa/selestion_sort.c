#include<stdio.h>

void printArray(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void seletionSort(int *A, int n){
    int IndexOfMin, temp;
    printf("Running selection sort..\n");
    for (int i = 0; i < n-1; i++)
    {
        IndexOfMin=i;
        for (int  j = i+1;  j < n;  j++)
        {
            if (A[j]<A[IndexOfMin])
            {
                IndexOfMin=j;
            }
            
        }
        temp=A[i];
        A[i]=A[IndexOfMin];
        A[IndexOfMin]=temp;
    }
    
}


int main(){
    int A[]={3, 45, 43, 34, 23, 12,};
    int n=6;
    printArray(A, n);
    seletionSort(A, n);
    printArray(A, n);
}