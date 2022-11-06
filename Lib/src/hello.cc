#include "../include/hello.h"

Hello::Hello(std::string name) {
    this->name = name;
}

std::string Hello::Say(std::string message) {
    return message + ", " + name + '.';
}