#include "sort.h"

/**
 * swap - swaps two integers in an array
 * @a: first integer to swap
 * @b: second integer to swap
 */
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/**
 * partition - partitions the array and swaps values
 * @array: array of integers
 * @low: low index of the partition to sort
 * @high: high index of the partition to sort
 * @size: size of the array
 *
 * Return: index for the pivot
 */
int partition(int *array, int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            swap(&array[i], &array[j]);
            if (i != j)
                print_array(array, size);
        }
    }
    swap(&array[i + 1], &array[high]);
    if (i + 1 != high)
        print_array(array, size);

    return (i + 1);
}

/**
 * lomuto_sort - implements the Lomuto partition scheme for quicksort
 * @array: array of integers
 * @low: low index of the partition to sort
 * @high: high index of the partition to sort
 * @size: size of the array
 */
void lomuto_sort(int *array, int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high, size);

        lomuto_sort(array, low, pi - 1, size);
        lomuto_sort(array, pi + 1, high, size);
    }
}

/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 *
 * @array: array of integers
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
    {
        return;
    }

    lomuto_sort(array, 0, size - 1, size);
}
