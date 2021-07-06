#include<stdio.h>

int N=5;
int main()
{
    int i,j,temp;
    int arr[N];

    printf("Name: Hingrajiya Achal\nEn no.: 19012021012\n");
    printf("Practical6_2 : Selection sort\n");

    printf("\nEnter %d elements of array:",N);

    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);

    printf("\nUnsorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }


    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {

            if(arr[i]>arr[j])
            {

                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }


    }

    printf("\nSorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }

    return 0;
}
