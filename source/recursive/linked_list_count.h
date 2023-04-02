struct linked_list {
    linked_list* next = nullptr;
};

unsigned int linked_list_count(const linked_list* list) {
    if (!list->next)
        return 1;
    return 1 + linked_list_count(list->next);
}