#pragma once

#include <string>

class squirrel {
private:
    std::string name;

public:
    squirrel(std::string name);
    std::string get_name();
};
