#include <vector>
#include <iostream>

int sum(const std::vector<int>::iterator& first_elem, const std::vector<int>::iterator& last_elem) {
    int size = last_elem - first_elem + 1;

    if (!size)
        return 0;

    if (size == 1) {
        return *first_elem;
    }
    
    return *first_elem + *last_elem + sum(first_elem + 1, last_elem - 1);
}