#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
    // TODO: Return the correct size of the list.
    return current_size;
}

void List::push(int entry) {
    // TODO: Implement a function that pushes an Element with `entry` as data to
    // the front of the list.
    Element* new_ele = new Element(entry);
    new_ele  -> next = head;
    head = new_ele;
    ++current_size;
}
int List::pop() {
    // TODO: Implement a function that returns the data value of the first
    // element in the list then discard that element.
    if (head != nullptr) {
        int dat = head -> data;
        Element* discard = head;
        head = head -> next;
        delete discard;
        --current_size;
        return dat;
    }
    return 0;
}
void List::reverse() {
    // TODO: Implement a function to reverse the order of the elements in the
    // list.
    Element* prev{nullptr};
    Element* current = head;
    while (current != nullptr) {
        head = head->next;
        current -> next = prev;
        prev = current;
        current = head;
    }
    head = prev;
}
List::~List() {
    // TODO: Ensure that all resources are freed on destruction
    while (head != nullptr) {
        Element* discard = head;
        head = head -> next;
        delete discard;
    }
}

}  // namespace simple_linked_list
