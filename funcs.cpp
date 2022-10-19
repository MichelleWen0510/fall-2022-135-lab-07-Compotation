#include "funcs.h"

std::string removeLeadingSpaces(std::string line) {
    std::string result;
    int firstNonSpace = 0;
    int i = 0;
    while (std::isspace(line[i]) || line[i] == '\t') {
        i++;
    }

    for (long unsigned int j = i; j < line.length(); j++) {
        result += line[j];
    }
    return result;
}