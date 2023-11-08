//
//  Binary Trees.cpp
//  
//
//  Created by Shubham Makwana on 10/30/23.
//

#include "Binary Trees.hpp"
#include <queue>
#include <iostream>

int main() {
    Node* root = nullptr; // Initialize the root node as nullptr
    Node node;

    // Build the binary tree
    root = node.buildtree(root);

    // Perform level-order traversal and print the tree elements
    std::cout << "Level-order traversal: ";
    node.levelordertraversal(root);
    std::cout << std::endl;

    return 0;
}


class Node{
public:
    int data;
    Node* left;
    Node* right;
        Node(int data)
    {
            this->data= data;
            this->left= NULL;
            this->right = NULL;
    }
    
    Node* buildtree( Node * root)
    {
        int data;
        cout<<"Enter the value that you want to write "<<endl;
        cin>>data;
        root =new Node(data);
        
        if(data==-1)
        {
            return NULL;
        }
        
        cout<<"Enter Left data for data node "<<data<<endl;
        root->left=buildtree(root->left);
        
        cout<<"Enter Right data for data node "<<data<<endl;
        root->right=buildtree(root->right);
        
        return root;
        
    }
    Node* levelordertraversal(Node* root)
    {
        queue<node*> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            Node * temp = q.front(); // here we are takind one data at a time and printing it and then we are trying to store them in the queue and just print them in order .
            cout << temp->data <<" ";
            q.pop();
            if(temp==NULL)
               {
                   if(!q.empty())
                   {
                       q.push(NULL);
                   }
                
               }
            // ALways you will try to see if there is left node or not in the trees and then if it ius there then you will store that treee node and then move to check if there is right node or not and if it is there then you will store that right node in the tree.
            // Also make sure that you poop the last element to avoid the repetation.
            else{
                cout << temp->data <<" ";
                if( temp->left!=NULL)
                {
                    q.push(temp->left);
                }
                if( temp->right!=NULL)
                {
                    q.push(temp->right);
                }
            }
        }
    }
    void inordertraversal( Node* root)
    {
        if (root==NULL)
        {
            return ;
        }
        
        inordertraversal(root->left);
        cout<<root->data<<endl;
        inordertraversal(root->right);
    }
    void preordertraversal( Node* root)
    {
        if (root==NULL)
        {
            return ;
        }
        cout<<root->data<<endl;
        preordertraversal(root->left);
        preordertraversal(root->right);
        
        
    }
    void postordertraversal( Node* root)
    {
        if (root==NULL)
        {
            return ;
        }
        
        postordertraversal(root->left);
        postordertraversal(root->right);
        cout<<root->data<<endl;
    }
void buildfromlevelorder(node* &root)
    {
        queue<node*> q;
        cout<<"Enter the data for the root"<<endl;
        int rootdata;
        cin>>rootdata;
        q.push(rootdata);
        while(!q.empty())
        {
            Node * temp = q.front();
            q.pop();
            cout<<"Enter the data from the left node "<<temp->data<<endl;
            int dataleft;
            cin>>dataleft;
            if(dataleft!=-1)
            {
                q.push(dataleft);
            }

            
            cout<<"Enter the data from the right node "<<temp->data<<endl;
            int dataright;
            cin>>dataright;
            if(dataright=-1)
            {
                q.push(dataright);
            }
        }
    }
};
