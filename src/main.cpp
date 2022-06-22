#include <iostream>
#include <sqlite3.h>

int main() {
    int var = 10;
    int* const& ptr_ref = &var;
    std::cout<<*ptr_ref<<std::endl;
    std::cout<<"Sqlite Version : "<<sqlite3_libversion()<<std::endl;
    return 0;
}