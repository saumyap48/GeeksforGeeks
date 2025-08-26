
class Solution {
public:
    stack<pair<int,int>> st;

    Solution() {}

    void push(int value) {
        if(st.empty()){
            st.push({value, value});
            return;
        }
        int mini = min(getMin(), value);
        st.push({value, mini});
    }

    void pop() {
        if(!st.empty()) {
            st.pop();
        }
    }

    int top() {
        if(st.empty()) return -1;  // safe fallback
        return st.top().first;
    }

    int peek() {
        return top();  // alias for top()
    }

    int getMin() {
        if(st.empty()) return -1;  // safe fallback
        return st.top().second;
    }
};