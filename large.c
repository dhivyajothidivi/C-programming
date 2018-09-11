#include <stdio.h>
int main()
{
  int array[50], size, i, smallest,location=0;

   printf("\n Enter the size of the array: ");
   
   scanf("%d", &size);

   printf("\n Enter %d elements of  the array: ", size);

        for (i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
		 smallest = array[i];
	}

        for (i = 1; i < size; i++) 

        {
		if (smallest > array[i])
		location = i+1;
	}

  printf("\n smallest present in the given array is : %d", smallest);

   return 0;
}

 
 
