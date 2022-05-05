#include <iostream>

#include "a.h"
#include "b.h"
int main() {
    show_debug_in_a();
    show_debug_in_b();
    show_debug_in_a();
    std::cout << debug << std::endl;
    return 0;
}