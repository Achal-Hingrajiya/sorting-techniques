
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define  N 5

int arr[N];

void swap(int *, int *);
void shell_sort();



int main()
{
    int i,j;
    printf("Name: Hingrajiya Achal\nEn no.: 19012021012\n");
    printf("Practical6_4 : Shell sort \n");
    printf("\nEnter %d elements of array:",N);

    for(i=0;i<N;i++)
        scanf("%d",&arr[i]);

    printf("\nUnsorted array:");

    for(i=0;i<N;i++)
    {
        printf("\t%d",arr[i]);
    }

    shell_sort();

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


void shell_sort()
{
    int i,j,gap;

    for(gap=N/2; gap>=1; gap/=2)
    {
        for(j=gap; j<N; j++)
        {
            for(i=j-gap; i>=0; i-=gap)
            {
                if(arr[i]<arr[i+gap])
                    break;

                else
                    swap(&arr[i],&arr[i+gap]);
            }
        }
    }
}
