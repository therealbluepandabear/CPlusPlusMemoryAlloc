#include <iostream>
void New();

int main() {
//    int *p = (int*)malloc(5 * sizeof(int));
//    if (p == nullptr) {
//        std::cout << "Failed to allocate memory" << "\n";
//        return -1;
//    }
//
//    *p = 5;
//    std::cout << *p << "\n";
//    free(p);
//    p = nullptr;
//    free(p);
    New();
    return 0;
}

// TODO: Look into why it's giving error
#pragma clang diagnostic push
#pragma ide diagnostic ignored "UnusedValue"
void New() {
    int *p = new int(5);
    *p = 6;
    std::cout << *p << std::endl;
    delete p;
    p = nullptr;
}
#pragma clang diagnostic pop
