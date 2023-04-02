#include <vector>

unsigned int find_smallest(const std::vector<int>& arr) {
    unsigned int smallest_index = 0;

    unsigned int len = arr.size();
    for (unsigned int i = 0; i < len; ++i) {
        if (arr[i] < arr[smallest_index]) {
            smallest_index = i;
        }
    }
    return smallest_index;
}

std::vector<int> selection_sort(std::vector<int> arr) {
    std::vector<int> sorted_arr;

    auto len = arr.size();
    for (unsigned int i = 0; i < len; ++i) {
        auto smallest_index = find_smallest(arr);
        sorted_arr.push_back(arr[smallest_index]);
        arr.erase(arr.begin() + static_cast<int>(smallest_index));
    }
    return sorted_arr;
}