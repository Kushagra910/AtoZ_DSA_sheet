// 155. Min Stack Leetcode

// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
// You must implement a solution with O(1) time complexity for each function.

// TC = O(1)

class MinStack {
public:

    vector<pair<int,int>>st;

    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            pair<int,int>p = make_pair(val,val);
            st.push_back(p);
        }
        else{
            pair<int,int>p = make_pair(val,min(val,st.back().second));
            st.push_back(p);
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back().first;
    }
    
    int getMin() {
        return st.back().second;
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