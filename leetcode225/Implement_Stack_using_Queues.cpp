class MyStack {
public:
    queue<int> q;// queue that will be used as stack ...
    //we know that deletion in queue happens at front and at front there is always first element inserted so our task is to take the last element to front so that we could dequeue (pop) it so that lifo order could be preserved...
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int count = q.size()-1 ;// counter for analogically reversing the queue.... 
        // size-1 means the last element will automatically 
        while(count>0){ // condition for rotating the queue
           int value=q.front();//accessing the front element
           q.pop();//popping the element
            q.push(value); // dequeuing from the front and enqueuing at back and after that we will get the last element at first and lifo order controlled!!!
            count=count-1; //derementing the count 
        }
    }
    
    int pop() {
        int value=q.front(); //now as we already set the queue to control the lifo order and now we can use just dequeue and get the result in lifo operations...
        q.pop();//popping the  element..

        return value;
    }
    
    int top() {
        // int counter=q.size()-1; //because after n-1 operatons n elements will be rotated in queue
        // while(counter>0){
        //     int value=q.front();
        //     q.pop();
        //     q.push(value); //dequeue()+enqueue(front_element)..
        // }
        int front_value=q.front(); //accessing the last element as front value now...
        return  front_value;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */