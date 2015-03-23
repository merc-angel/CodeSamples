package com.example.tree;

public class TreeNodeCounterVisitor extends TreeNodeVisitor {

    private int count = 0;

    @Override
    public <T> void visit(TreeNode<T> node) {
        count++;
    }

    
    public int getResult() {
        return count;
    }
}
