//
//  Min Stack.cpp
//  
//
//  Created by Shubham Makwana on 11/7/23.
//

#include "Min Stack.hpp"
class MinStack {
public:
    stack<int> st;
    stack<int> formin;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(!formin.empty())
        {
            val = min(formin.top(),val);
        }
        formin.push(val);
    }
    
    void pop() {
        st.pop();
        formin.pop();
        
    }
    
    int top() {
        int c = st.top();
        return c;
        
    }
    
    int getMin() {
        return formin.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
