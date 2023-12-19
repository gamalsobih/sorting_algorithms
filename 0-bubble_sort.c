#include "sort.h"
/**
 *bubble_sort - Function that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
	int t;
	size_t i, k;

	i=0;
	while(i<size)
		{
			for(k=0;k<size-1;k++)
				{
					if(array[k]>array[k+1])
					{
						t=array[k];
						array[k]=array[k+1];
						array[k+1]=t;
					}
				}
			i++;
			
		}
	
}
