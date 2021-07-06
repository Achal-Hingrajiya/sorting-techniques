#include<stdio.h>

int N=5;
int main()
{
    int i,j,temp;
    int arr[N];
    printf("Name: Hingrajiya Achal\nEn no.: 19012021012\n");
    printf("Practical6_1 : Bubble sort ");
    printf("\n\nEnter %d elements of array:",N);

    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);

    printf("\nUnsorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }


    for(i=0;i<N-1;i++)
    {

        for(j=0;j<N-1;j++)
        {

            if(arr[j]>arr[j+1])
            {

                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }


    }

    printf("\nSorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\n\n\n\n");
    return 0;
}
