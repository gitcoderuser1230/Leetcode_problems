class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> sin; //stack for inserting the elements 
    stack<int> sout;// stack for preserving the fifo order and deletion operation
    void push(int x) {
        sin.push(x);//normally pushing the elements in stack...
    }
    
    int pop() {
        if(sout.empty()){
            while(!sin.empty()){
                sout.push(sin.top());//pushing popped element from sin to sout...
                sin.pop();
            }
        }
        int val=sout.top();
        sout.pop();
        return val;
    }
    
    int peek() {
        if(sout.empty()){
        while(!sin.empty()){
            sout.push(sin.top());//pushing popped element from sin to sout...
            sin.pop();
            }
        }
        return sout.top();
    }
    
    bool empty() {
        return (sin.empty()) and (sout.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */