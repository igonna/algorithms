#include <stdint.h>
#include <curses.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void rand_int_arr(int32_t* array, uint32_t len, int32_t min, int32_t max)
{
	srand(time(NULL));
	for (uint32_t i = 0; i < len; ++i)
	{
		array[i] = rand() % max + min;
	}
}

void print_int_arr(int32_t* arr, uint32_t len)
{
	for (int i = 0; i < len; ++i)
		printf("%i ", arr[i]);
	printf("\n");
}
