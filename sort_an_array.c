
#include <stdio.h>
void main()
{
    int arr[5];
    int i, j, tmp;
    printf("Input %d elements in the array :\n",5);
   for(i=0; i<5; i++)
        {
      printf("element - %d : ",i);
      scanf("%d",&arr[i]);
    }

    printf("\nElements of array (Unsorted) :\n");
    for(i=0; i<5; i++)
    {
        printf("%d  \n", arr[i]);
    }
	        printf("\n\n");

  
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<5; i++)
    {
        printf("%d  \n", arr[i]);
    }
	        printf("\n\n");
}
