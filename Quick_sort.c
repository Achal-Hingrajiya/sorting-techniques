#include<stdio.h>
#define  N 5

int arr[N];

void swap(int *, int *);
void quick_sort(int, int);
int partition(int, int);


int main()
{
    int i,j;
    printf("Name: Hingrajiya Achal\nEn no.: 19012021012\n");
    printf("Practical6_6 : Quick sort\n");
    printf("\nEnter %d elements of array:",N);

    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);

    printf("\nUnsorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\n\n");

    quick_sort(0,N-1);

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


void quick_sort(int lower_bound, int upper_bound)
{

    int loc;
    if(lower_bound<upper_bound)
    {
        loc=partition(lower_bound,upper_bound);
        quick_sort(lower_bound,loc-1);
        quick_sort(loc+1,upper_bound);
    }
}

int partition(int lower_bound, int upper_bound)
{
    int pivot,start,end;
    pivot=arr[lower_bound];
    start=lower_bound;
    end=upper_bound;


    while(start<end)
    {
        while(arr[start]<=pivot)
            start++;

        while(arr[end]>pivot)
            end--;

        if(start<end)
            swap(&arr[start], &arr[end]);



    }
    swap(&arr[lower_bound], &arr[end]);

    printf("Pivot= %d\tStart= %d\tEnd= %d\nArray: ",pivot,start,end);
    for(int i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }


    return end;
}



