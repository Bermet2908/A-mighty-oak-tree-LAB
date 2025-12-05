#include "node.hpp"

Node::Node(squirrel* squirrel)
    : data(squirrel), left_child(nullptr), right_child(nullptr) {}

void Node::set_left(Node* child) {
    left_child = child;
}

void Node::set_right(Node* child) {
    right_child = child;
}

Node* Node::left() {
    return left_child;
}

Node* Node::right() {
    return right_child;
}

squirrel* Node::get_squirrel() {
    return data;
}
