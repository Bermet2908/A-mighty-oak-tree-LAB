#pragma once
#include "squirrel.hpp"

class Node {
private:
    squirrel* data;
    Node* left_child;
    Node* right_child;

public:
    Node(squirrel* squirrel);

    void set_left(Node* child);
    void set_right(Node* child);

    Node* left();
    Node* right();

    squirrel* get_squirrel();
};

