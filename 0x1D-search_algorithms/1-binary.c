#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of ints
 * @array: ptr to the first element of the array to search
 * @size: number of elements in @array
 * @value: value to find in @array
 * Return: first index where value is located,
 *         or -1 if value not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
        size_t m, l = 0, u = size ? size - 1 : 0;

        while (array && l <= u)
        {
                size_t i = 0;
                {
                        printf("Searching in array: ");
                        while (i < u - l)
                                printf("%d, ", array[i++]);
                        printf("%d\n", array[i]);
                }
                m = l + (u - l) / 2;
                if (array[m] == value)
                        return (m);
                else if (array[m] < value)
                        l = m + 1;
                else if (array[m] > value)
                        u = m - 1;
        }
        return (-1);
}
