#ifndef COOL_H
#define COOL_H

#include <iostream>

namespace hello {
    inline std::string greeting()
    {
        std::string response = "Hello CMake!";
        return response;
    }
} // namespace hello

#endif /* COOL_H */
