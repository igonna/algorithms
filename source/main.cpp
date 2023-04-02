#include <iostream>
#include <vector>
#include "search/binary_search.h"
#include "sort/selection_sort.h"
#include "recursive/sum.h"
#include "recursive/linked_list_count.h"
#include "sort/quick_sort.h"
//***C++11 Style:***
#include <chrono>

#include <algorithm>
#include <ctime>

int main() {
    unsigned int arr_size = 100;
    std::vector<int> arr;
    
    int elem = 0;
    for (unsigned int i = 0; i < arr_size; ++i) {
        arr.push_back((++elem));
    }
    
    int elem_to_find = 7;
    std::cout << "binary search result: " << binary_search(arr, elem_to_find) << std::endl;
    std::cout << "recursive binary search result: " << binary_search_recursive(arr, 0, arr_size - 1, elem_to_find) << std::endl;


    auto sorted_arr = selection_sort(arr);

    for (auto i : sorted_arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "sum: " << sum(arr.begin(), arr.end() - 1) << std::endl;

    linked_list* list = new linked_list;
    linked_list* list_pos = list;
    for (unsigned int i = 0; i < arr_size; ++i) {
        list_pos->next = new linked_list;
        list_pos = list_pos->next;
    }
    std::cout << "linked list count: " << linked_list_count(list) << std::endl;

    std::vector<int> not_sorted(1000000);

    srand((unsigned)time(NULL));

    std::srand(unsigned(std::time(nullptr)));
    std::generate(not_sorted.begin(), not_sorted.end(), std::rand);

    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    quickSort(not_sorted, 0, not_sorted.size() - 1);
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << "[µs]" << std::endl;
    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::nanoseconds> (end - begin).count() << "[ns]" << std::endl;

    // for (auto& i : not_sorted) {
    //     std::cout << i << " ";
    // }
    std::cout << std::endl;
    return 0;
}