
#include<stdio.h>
#define  N 5

int arr[N], temp[N];

void merge_sort(int, int);
void merge(int, int, int);


int main()
{
    int i,j;

    printf("Name: Hingrajiya Achal\nEn no.: 19012021012\n");
    printf("Practical6_5 : Merge sort\n");
    printf("\nEnter %d elements of array:",N);

    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);

    printf("\nUnsorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }

    merge_sort(0,N-1);

    printf("\nSorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}



void merge_sort(int lower_bound, int upper_bound)
{

    int mid;

    if(lower_bound<upper_bound)
    {
        mid=(lower_bound+upper_bound)/2;

        merge_sort(lower_bound,mid);
        merge_sort(mid+1,upper_bound);

        merge(lower_bound, mid, upper_bound);
    }
    else
        return;
}


void merge(int lower_bound, int mid, int upper_bound)
{
    int i,j,k;

/*

    i=lower_bound;
    j=mid+1;
    k=lower_bound;



    while((i<=mid)&&(j<=upper_bound) )
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
        }



    }
    */

    for(i=lower_bound,j=mid+1,k=lower_bound; i<=mid && j<=upper_bound;k++)
    {
        if(arr[i]<=arr[j])
            temp[k]=arr[i++];

        else
            temp[k]=arr[j++];

    }

/*
        while(j<=upper_bound)
        {
            temp[k]=arr[j];
            j++;
            k++;
        }



        while(i<=mid)
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
*/
        for(;j<=upper_bound,i<=mid;j++,i++,k++)
        {
            temp[k]=arr[j];
            temp[k]=arr[i];
        }


        for(i=lower_bound;i<=upper_bound;i++)
            arr[i]=temp[i];




}




