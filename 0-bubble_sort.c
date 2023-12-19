#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers
 * using the bubble sort algorithm
 *
 * @array: array of integers
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
    {
        return;
    }

    size_t i, j;
    int temp;
    bool swapped;

    for (i = 0; i < size - 1; i++)
    {
        swapped = false;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;

                print_array(array, size);
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}
