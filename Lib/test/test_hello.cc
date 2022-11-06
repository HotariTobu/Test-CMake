#include <cassert>

#include "../include/hello.h"

int main() {
    Hello hello("Tom");
    assert(hello.Say("See you") == "See you, Tom.");
}