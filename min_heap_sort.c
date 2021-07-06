
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define  N 5

int arr[N];

void swap(int *, int *);
void min_heapify(int, int);

void heap_sort(int);

int main()
{
    int i,j;
    printf("Name: Hingrajiya Achal\nEn no.: 19012021012\n");
    printf("Practical6_7 : Heap sort (Decreasing order)\n");
    printf("\nEnter %d elements of array:",N);

    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);

    printf("\nUnsorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }

    heap_sort(N);

    printf("\nSorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}

void swap(int *p,int *q)
{
    int temp;
    temp = *p;
    *p=*q;
    *q=temp;
}


void heap_sort(int n)
{
    int i;
    for(i=(n/2)-1; i>=0; i--)
        min_heapify(n,i);

    for(i=n-1; i>=0; i--)
    {
        swap(&arr[0], &arr[i]);
        min_heapify(i,0);
    }
}


void min_heapify(int n,int i)
{
    int smallest=i;
    int left_child=(2*i)+1;
    int right_child=(2*i)+2;

    if(left_child<n && arr[left_child]<arr[smallest])
        smallest=left_child;

    if(right_child<n && arr[right_child]<arr[smallest])
        smallest=right_child;


    if(smallest!=i)
    {
        swap(&arr[smallest], &arr[i]);
        min_heapify(n,smallest);
    }
}
