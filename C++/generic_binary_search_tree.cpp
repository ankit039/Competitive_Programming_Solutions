/*
Generic Binary Search Tree i.e A BST that can work on any primitive data type
Operation performed by Gerneric BST:
    • Insertion
    • Inorder Traversal
    • Preorder Traversal
    • Postorder Traversal
    • Print BST as it is
*/

#include <bits/stdc++.h>
using namespace std;

template < typename T > class BST;
template < typename T > class node {
    friend class BST < T > ;
    private:
        T data;
        node < T > * link[2];
    public:
        node(T data, node < T > * value) : data(data), link{value, value} {}
};

template < typename T > class BST {
    public:
        BST();
        void insert(T data);
        void print();
        void inorder();
        void preorder();
        void postorder();
    private:
        node < T > * root;
};

// CONSTRUCTOR
template < typename T > BST < T > :: BST() : root(NULL) {}

// INSERTING ELEMENT TO BINARY SEARCH TREE
template < typename T > void BST < T > :: insert(T data)
{
    if(root == NULL) {
        root = new node < T > (data, NULL);
    }
    else {
        int dir = 0;
        node < T > * it = root;
        for(;;) {
            dir = it -> data < data;
            if(it -> link[dir] == NULL) {
                break;
            }
            it = it -> link[dir];
        }
        it -> link[dir] = new node < T > (data, NULL);
    }
}

// INORDER TRAVERSAL
template < typename T > void BST < T > :: inorder()
{
    stack < node < T > * > s;
    node < T > * n = root;

    bool done = 0;
    while(!done) {
        if(n != NULL) {
            while(n != NULL) {
                s.push(n);
                n = n -> link[0];
            }
        }
        else {
            if(!s.empty()) {
                n = s.top();
                s.pop();
                cout << n -> data << " ";
                n = n -> link[1];
            }
            else {
                done = 1;
            }
        }
    }
}

// PREORDER TRAVERSAL
template < typename T > void BST < T > :: preorder()
{
    stack < node < T > * > s;
    s.push(root);
    while(!s.empty()) {
        node < T > * p = s.top();
        cout << p -> data << " ";
        s.pop();

        if(p -> link[1]) {
            s.push(p -> link[1]);
        }
        if(p -> link[0]) {
            s.push(p -> link[0]);
        }
    }
}

// POSTORDER TRAVERSAL
template < typename T > void BST < T > :: postorder()
{
    stack < node < T > * > s;
  map < node < T > * , int > m;
    if(root -> link[1] != NULL) {
        s.push(root -> link[1]);
    }
    s.push(root);
    root = root -> link[0];
    while(!s.empty()) {
        while(root != NULL) {
            if(root -> link[1] != NULL) {
                s.push(root -> link[1]);
            }
            s.push(root);
            root = root -> link[0];
        }

        root = s.top();
        s.pop();

        if(m[root] == 0 and (root -> link[1] != NULL) and (s.top() == root -> link[1])) {
            s.pop();
            s.push(root);
            m[root] = 1;
            root = root -> link[1];
        }
        else {
            cout << root -> data << " ";
            root = NULL;
        }
    }
}

template < typename T > void BST < T > :: print()
{
    queue < node < T > * > q;
    q.push(root);
    while(!q.empty()) {
        node < T > * p = q.front();
        cout << p -> data << " ";
        q.pop();
        if(p -> link[0] != NULL) {
            q.push(p -> link[0]);
        }
        if(p -> link[1] != NULL) {
            q.push(p -> link[1]);
        }
    }
}

int main()
{
    // Demonstration of binary search tree
    BST < int > bst;
    bst.insert(1);
    bst.insert(2);
    bst.insert(0);
    bst.insert(3);
    bst.insert(4);
  
    cout << "Tree is" << " ";
    bst.print();

    cout << "\nInorder" << " ";
    bst.inorder();

    cout << "\nPreorder" << " ";
    bst.preorder();

    cout << "\nPostorder" << " ";
    bst.postorder();
    return 0;
}