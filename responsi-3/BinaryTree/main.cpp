#include "BinaryTree.hpp"

int main(){
    BinaryTree<int> tree;
    cout << tree << endl;
    tree.setValue(5);
    cout << tree << endl;
    tree.addChild(6);
    cout << tree << endl;
    tree.addChild(7);
    cout << tree << endl;
    return 0;
}