#include <iostream>
#include <cstring>

void New();
void NewArrays();
void Strings();
void TwoD();

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
    TwoD();
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

void TwoD() {
    int *p1 = new int[3];
    int *p2 = new int[3];

    int **pData = new int *[2];
    pData[0] = p1;
    pData[1] = p2;

    pData[0][1] = 9;

    std::cout << pData[0][1] << "\n";

    delete []p1;
    delete []p2;

    delete []pData;
}

void NewArrays() {
    int *p = new int[5] { 1, 2, 3, 4, 5 };

    delete []p;
}
