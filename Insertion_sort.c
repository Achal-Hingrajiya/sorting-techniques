#include<stdio.h>

int N=5;
int main()
{
    int i,j,temp;
    int arr[N];
    printf("Name: Hingrajiya Achal\nEn no.: 19012021012\n");
    printf("Practical6_4 : Insertion sort\n");
    printf("\nEnter %d elements of array:",N);

    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);

    printf("\nUnsorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }


    for(i=1;i<N;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0 && arr[j]>temp;j--)
        {

            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;


    }

    printf("\nSorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}
