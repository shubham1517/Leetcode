//
//  Rotate List.cpp
//  
//
//  Created by Shubham Makwana on 11/3/23.
//

#include "Rotate List.hpp"
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        // Check if k is zero, head is not NULL, and head has at least two nodes
        if (k == 0 || !head || !head->next) {
            return head;  // No rotation needed or not enough nodes to rotate
        }

        // Calculate the size of the linked list
        int size = 1;
        ListNode* temp = head;
        while (temp->next) {
            size++;
            temp = temp->next;
        }

        // Calculate the effective rotation value
        k = k % size;

        // If k is zero, no rotation is needed
        if (k == 0) {
            return head;
        }

        // Find the new head after rotation
        ListNode* tail = temp;
        int steps = size - k - 1;
        temp = head;
        ListNode* newhead = head;

        for (int i = 0; i < steps; i++) {
            temp = temp->next;
        }

        newhead = temp->next;
        tail->next = head;
        temp->next = nullptr;

        return newhead;
    }
};

