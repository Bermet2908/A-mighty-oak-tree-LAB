#include "squirrel.hpp"

squirrel::squirrel(std::string name) : name(name) {}

std::string squirrel::get_name() {
    return name;
}
