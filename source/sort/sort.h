#include <stdint.h>
#include <stddef.h>
#include <stdio.h>

void insertion_sort(int32_t* arr, uint32_t len)
{
	if (arr == NULL)
		return;
	if (len < 2)
		return;

	int32_t key;
	int32_t i;

	for (int32_t j = 1; j < len; ++j)
	{
		key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > key)
		{
			arr[i + 1] = arr[i];
			--i;
		}
		arr[i + 1] = key;
	}
}
