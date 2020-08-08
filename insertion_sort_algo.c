#include<stdio.h>
#include<conio.h> //conio.h doesnt work on linux

void print_array(int A[], int n);
void print_array_algorithm_execution(int A[], int n, int i, int j, int key);
void main()
{
    int A[100],key,n,i,j;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the %d elements : \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("printing the given values(%d values)\n",n);
    print_array(A,n);
    
    //printf("-----------------------------\n");
    //printf("Each iteration inside the algorithm\n");
    //algorithm :
    for(i=1; i<n; i++)
    {
        j=i-1;
        key=A[i];
        
        //print_array_algorithm_execution(A,n,i,j,key);
        while(j>-1 && key<A[j])//key>A[j] for decreasing order(only one change)
        {
            
            A[j+1]=A[j];
            j--;
            //print_array_algorithm_execution(A,n,i,j,key);

        }
        A[j+1]=key;
        //print_array_algorithm_execution(A,n,i,j,key);
    }
    //algorithm ends
    //printf("-----------------------------\n");
    printf("printing the sorted values\n");
    print_array(A,n);
    getch(); //doesnt work on linux
}

void print_array(int A[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i<n-1)
            printf("%d, ",A[i]);
        else
            printf("%d\n\n",A[i]);
    }
}

void print_array_algorithm_execution(int A[], int n, int i, int j, int key)
{
    int x;
    for(x=0;x<n;x++)
    {
        if(x<n-1)
            printf("%d, ",A[x]);
        else
            printf("%d where i=%d j=%d key=%d\n\n",A[x],i,j,key);
    }
}