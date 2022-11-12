#include <cassert>

#include "hello.h"

int main() {
    Hello hello("Tom");
    assert(hello.Say("See you") == "See you, Tom.");
    assert(SayStandalone("Tom", "See you") == "See you, Tom.");
}