#include <iostream>
#include <cstring>

void New();
void NewArrays();
void Strings();

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
    Strings();
    return 0;
}

// TODO: Look into why it's giving error, probably because in this circumstance it's not needed.
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

void Strings() {
    char *p = new char[4]; // allocating one extra byte
    strcpy(p, "C++");
    std::cout << p << std::endl;
    delete []p;
}

void NewArrays() {
    int *p = new int[5] { 1, 2, 3, 4, 5 };

    delete []p;
}
