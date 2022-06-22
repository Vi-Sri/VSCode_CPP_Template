#include <iostream>

int main() {
    int var = 10;
    int* const& ptr_ref = &var;
    std::cout<<*ptr_ref<<std::endl;
    return 0;
}