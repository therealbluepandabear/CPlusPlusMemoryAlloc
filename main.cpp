#include <iostream>

int main() {
    int *p = (int*)malloc(5 * sizeof(int));
    if (p == nullptr) {
        std::cout << "Failed to allocate memory" << "\n";
        return -1;
    }

    *p = 5;
    std::cout << *p << "\n";
    free(p);
    p = nullptr;
    free(p);
    return 0;
}
