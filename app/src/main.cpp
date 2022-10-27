/* Imported libaries */
#include <iostream> 

/* User libaries */
#include "../inc/main.h"
#include "../inc/api.h"

int main() {
    std::string str = API::hello_world();
    std::cout << str << std::endl;
    return 0;
}