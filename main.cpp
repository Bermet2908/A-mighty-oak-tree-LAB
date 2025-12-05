#include <iostream>
#include "src/node.hpp"
#include "src/squirrel.hpp"

using namespace std;

void print_tree(Node* node) {
    if (!node) return;
    cout << node->get_squirrel()->get_name() << endl;
    print_tree(node->left());
    print_tree(node->right());
}

int main() {
    squirrel a("Cheeks");
    squirrel b("Squeaks");
    squirrel c("Mr. Fluffy Butt");

    Node root(&a);
    Node left(&b);
    Node right(&c);

    root.set_left(&left);
    root.set_right(&right);

    cout << "Left child: " << root.left()->get_squirrel()->get_name() << endl;
    cout << "Right child: " << root.right()->get_squirrel()->get_name() << endl;

    cout << "\nTree traversal:\n";
    print_tree(&root);

    return 0;
}


