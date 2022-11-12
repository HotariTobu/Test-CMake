#ifndef __HELLO_H__
#define __HELLO_H__

#include <string>

#include "Lib_export.h"

class LIB_EXPORT Hello {
private:
    std::string name;

public:
    Hello(std::string name);
    
    std::string Say(std::string message);
};

LIB_EXPORT std::string SayStandalone(std::string name, std::string message);

#endif // __HELLO_H__