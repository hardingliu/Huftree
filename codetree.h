#ifndef _HUFTREE_CODETREE_H_
#define _HUFTREE_CODETREE_H_

#include <algorithm>
#include <assert.h>
#include <fstream>
#include <iostream>
#include <vector>

// The class for CodeTree, which has a pointer to a TreeNode, which
// is the root.
class CodeTree {
  private:
    // The struct of TreeNode in the priority queue and codetree, which
    // has two pointers to TreeNode, left and right; as well as two ints,
    // the frequency of that char, represented by freq and ch.
    struct TreeNode {
        TreeNode *left;
        TreeNode *right;
        int freq;
        int ch;

        void printChar(int ch);
        void printTreeHelper(TreeNode *r, std::string pre);
        void printCodeHelper(TreeNode *r, std::string pre);
    } * root;

  public:
    CodeTree(int freq[]);
    void printTree();
    void printCode();
    void destory(std::vector<TreeNode *> &heap);
    void swapDown(std::vector<TreeNode *> &heap, int i);
    void swapUp(std::vector<TreeNode *> &heap, int i);
    void heapify(std::vector<TreeNode *> &heap);
    std::vector<TreeNode *> pqueue(int freq[]);
    TreeNode *deleteMin(std::vector<TreeNode *> &heap);
    void insert(std::vector<TreeNode *> &heap, TreeNode *x);
};

#endif
