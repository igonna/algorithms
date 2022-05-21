#include "sort.h"
#include "debug.h"
#include <stdlib.h>
#include <sys/time.h>

int main(void)
{
	uint32_t arr_size = 100000;
	int32_t* array = (int32_t*)malloc(arr_size * sizeof(int32_t));
	rand_int_arr(array, arr_size, 1, 100);

	// array before
	//print_int_arr(array, arr_size);

	// time start
	struct timespec stop, start;
	clock_gettime(CLOCK_MONOTONIC_RAW, &start);
	
	// sort algorithm
	insertion_sort(array, arr_size);

	// time stop
	clock_gettime(CLOCK_MONOTONIC_RAW, &stop);
	double delta = 
		(double)(stop.tv_sec - start.tv_sec) * 1000 + 
		(double)(stop.tv_nsec - start.tv_nsec) / 1000;

	printf("exec time: %.0lf\n", delta); 
		
	// array after
	//print_int_arr(array, arr_size);
	
	// clean up
	free(array);
	return 0;
}
