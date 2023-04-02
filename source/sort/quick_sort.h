#include <vector>

void swap(std::vector<int>& arr, unsigned int a, unsigned int b) {
    int t = arr[a];
    arr[a] = arr[b];
    arr[b] = t;
}

// function to rearrange arr (find the partition point)
unsigned int partition(std::vector<int>& arr, unsigned int low, unsigned int high) {

    int pivot = arr[high];

    unsigned int i = (low - 1);

    for (unsigned int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            ++i;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, high);

    return (i + 1);
}

void quick_sort(std::vector<int>& arr, unsigned int begin, unsigned int end) {
    if (begin >= end)
        return;
    unsigned int pivot = partition(arr, begin, end);
    quick_sort(arr, begin, pivot - 1);
    quick_sort(arr, pivot + 1, end);
}

void quickSort(std::vector<int>& arr, unsigned int low, unsigned int high)
{
    unsigned int i = low;
    unsigned int j = high;
    int pivot = arr[(i + j) / 2];
    //int temp;

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            swap(arr, i, j);
            //temp = arr[i];
            //arr[i] = arr[j];
            //arr[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(arr, low, j);
    if (i < high)
        quickSort(arr, i, high);
}
