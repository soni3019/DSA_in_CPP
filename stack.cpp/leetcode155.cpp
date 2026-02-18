class MinStack {
    stack<long long> st;
    long long min = 1e9;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            min = val;
        } else if (val > min) {
            st.push(val);
        } else {
            st.push(2LL * val - min); // encode
            min = val;
        }
    }

    void pop() {
        if (st.empty()) return;

        long long x = st.top();
        st.pop();

        if (x < min) {
            min = 2 * min - x; // decode
        }
    }

    int top() {
        if (st.empty()) return -1;

        long long x = st.top();
        if (x > min) return x;
        return min;
    }

    int getMin() {
        return min;
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