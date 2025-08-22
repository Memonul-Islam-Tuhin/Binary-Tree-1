#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_binary_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int left_val, right_val;
        cin >> left_val >> right_val;
        Node *myLeft, *myRight;
        if (left_val == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(left_val);
        }
        if (right_val == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(right_val);
        }

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
        {
            q.push(p->left);
        }

        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
};

int maximum_height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    int my_left = maximum_height(root->left);
    int my_right = maximum_height(root->right);

    return max(my_left, my_right) + 1;
}

int main()
{

    Node *root = input_binary_tree();
    cout << maximum_height(root) << " ";

    return 0;
}

// input format: 6 3 5 -1 2 0 -1 -1 1 -1 -1 -1 -1

// output format : 3