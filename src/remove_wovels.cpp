#include "remove_wovels.h"

bool isWowel(char c) {
    for (const char b : std::string("aeioyuAEIOUY")) {
        if (c == b) return true;
    }
    return false;
}

std::string removeWovels(const std::string& str) {
    std::string result;
    for (char ch : str) {
        if (!isWowel(ch)) result += ch;
    }
    return result;
}
