#include "sort.h"

/**
 * swap_items - Swaps two items in an array.
 * @array: The array to modify.
 * @left: The index of the left item.
 * @right: The index of the right item.
 */
void swap_items(int *array, size_t left, size_t right)
{
    int tmp;

    if (array != NULL)
    {
        tmp = array[left];
        array[left] = array[right];
        array[right] = tmp;
    }
}

/**
 * quick_sort_range_lomuto - Sorts a sub array using the
 * quick sort algorithm and Lomuto's partition scheme.
 * @array: The array containing the sub-array.
 * @start: The starting position of the sub-array.
 * @end: The ending position of the sub-array.
 * @size: The length of the array.
 */
void quick_sort_range_lomuto(int *array, size_t start, size_t end, size_t size)
{
    size_t pivot_index, i;
    int pivot_value;

    if ((start >= end) || (array == NULL))
        return;

    pivot_value = array[end];
    pivot_index = start;

    for (i = start; i < end; i++)
    {
        if (array[i] <= pivot_value)
        {
            if (pivot_index != i)
            {
                swap_items(array, pivot_index, i);
                print_array(array, size);
            }
            pivot_index++;
        }
    }

    if (pivot_index != end)
    {
        swap_items(array, pivot_index, end);
        print_array(array, size);
    }

    if (pivot_index - start > 1)
        quick_sort_range_lomuto(array, start, pivot_index - 1, size);

    if (end - pivot_index > 1)
        quick_sort_range_lomuto(array, pivot_index + 1, end, size);
}

/**
 * quick_sort - Sorts an array using the quick sort algorithm
 * and Lomuto's partition scheme.
 * @array: The array to sort.
 * @size: The length of the array.
 */
void quick_sort(int *array, size_t size)
{
    if (array != NULL)
    {
        quick_sort_range_lomuto(array, 0, size - 1, size);
    }
}
