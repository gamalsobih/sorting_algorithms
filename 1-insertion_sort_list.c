#include "sort.h"
/**
 *bubble_sort - Function that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */
void insertion_sort_list(listint_t **list)
{
	int t,s;
	size_t i, k;
	k=0;
	i=size;
	s=1;
	while(s==1)
		{
			s=0;
			while(k<i-1)
				{	
					if(array[k]>array[k+1])
					{
						t=array[k];
						array[k]=array[k+1];
						array[k+1]=t;
						s=1;
						print_array(array, size);
					}
					
					k++;
				}
			i=k;
			k=0;
			
		}
	
}
