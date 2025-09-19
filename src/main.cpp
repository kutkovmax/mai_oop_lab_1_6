#include <iostream>
#include "remove_wovels.h"

int main(){
    std::string s;
    std::getline(std::cin, s);
    std::cout << removeWovels(s) << std::endl;
    return 0;
}