//
//  Delete Node from the end of the list.cpp
//  
//
//  Created by Shubham Makwana on 11/2/23.
//

#include "Delete Node from the end of the list.hpp"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNodse() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        int i=0;
        ListNode *mid=head;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        cout<<"count = "<<count<<endl;
        cout<<"value of n "<<n<<endl;
        if(count<n || head==NULL)
        {
            return head;
        }
        if(count == 1)
        {
            return NULL;
        }
        else if(count==n)
        {
            temp=head;
            head=head->next;
            delete temp;
        }
        else
        {
            cout<<"checing"<<endl;
            temp=head;
            mid=temp;

            while(i<count-n){
            
                mid=temp;
                temp=temp->next;
                i++;
            }
            mid->next=temp->next;

            delete temp;
        }

    return head;
        
    }
};
