#include <iostream>

int main() {
    int *p = (int*)malloc(sizeof(int));
    *p = 5;
    std::cout << *p << "\n";
    free(p);
    p = NULL;
    free(p);
    return 0;
}
