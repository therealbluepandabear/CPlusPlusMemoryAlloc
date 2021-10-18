#include <iostream>

int main() {
    int *p = (int*)calloc(1, sizeof(int));
    *p = 5;
    std::cout << *p << "\n";
    free(p);
    p = nullptr;
    free(p);
    return 0;
}
