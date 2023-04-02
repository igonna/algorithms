#include <vector>
#include <iostream>

int binary_search(const std::vector<int>& arr, int item) {
    unsigned int low = 0;
    unsigned int high = arr.size() - 1;

    unsigned int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == item) {
            return static_cast<int>(mid);
        }
        if (arr[mid] > item) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int binary_search_recursive(const std::vector<int>& arr, unsigned int first_index, unsigned int last_index, int search_item) {
    
    if (!(first_index <= last_index))
        return -1;
    unsigned int mid_index = (first_index + last_index) / 2;
    if (arr[mid_index] == search_item)
        return static_cast<int>(mid_index);

    if (arr[mid_index] > search_item)
        return binary_search_recursive(arr, first_index, mid_index - 1, search_item);
    else
        return binary_search_recursive(arr, mid_index + 1, last_index, search_item);
    return -1;
}