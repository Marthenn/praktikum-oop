#ifndef __BINARY_TREE
#define __BINARY_TREE

#include <iostream>
#include <vector>
using namespace std;

template<class T>
class BinaryTree {
    private:
        T value;
        std::vector<BinaryTree<T>> children;
        int numChildren;

    public:
        // Default constructor, set numChildren = 0
        BinaryTree(){
            this->value = T();
            this->numChildren = 0;
            this->children = std::vector<BinaryTree<T>>();
        }
        // Copy constructor
        BinaryTree(const BinaryTree<T>& tree){
            this->value = tree.value;
            this->numChildren = tree.numChildren;
            this->children = tree.children;
        }
        // Destruktor
        ~BinaryTree(){
            this->value = T();
            this->numChildren = 0;
            this->children.clear();
        }

        // Setter untuk value
        void setValue(const T & val){
            this->value = val;
        }

        /*
        Menambahkan anak binary tree dengan value tertentu.
        Fungsi ini membuat sebuah BinaryTree baru dan menambahkannya ke list of children.
        BinaryTree yang baru dibuat kemudian dikembalikan sebagai return value dari fungsi ini.
        Jika jumlah children sudah lebih dari dua, lemparkan exception "Tidak bisa memiliki lebih dari dua children\n".
        */
        BinaryTree<T>& addChild(T val){
            if (this->numChildren >= 2){
                throw "Tidak bisa memiliki lebih dari dua children\n";
            }
            BinaryTree<T> child = BinaryTree<T>();
            child.setValue(val);
            this->children.push_back(child);
            this->numChildren++;
            return this->children[this->numChildren-1];
        }

        /*
        Operator overloading untuk mencetak isi tree ke ostream.
        Format : <value>(<binary_tree_1>)(<binary_tree_2>)
        Tidak perlu ada newline di akhir.
        Berbagai contoh pencetakan binary tree :
        - Binary tree of integer tanpa children : 5()()
        - Binary tree of integer dengan satu children : 5(7()())()
        - Binary tree of integer dengan dua children : 5(7()())(6()())
        */
        friend ostream& operator<<(ostream& os, BinaryTree<T> tree){
            os << tree.value << "(";
            if(tree.numChildren > 0){
                os << tree.children[0];
            }
            os << ")(";
            if(tree.numChildren > 1){
                os << tree.children[1];
            }
            os << ")";
            return os;
        }
};

#endif