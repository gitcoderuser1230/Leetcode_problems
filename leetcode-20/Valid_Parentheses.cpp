class Solution {
public:
    bool isValid(string s) {
        //here the simple naive approach is to first create a map with keys as values as closing and opening brackets as they will remain constant throughout the whole logic and one other thing which is stack which will help us to compare the current bracket with last inserted bracket(LIFO)..
        unordered_map<char,char> brackets={
            // here we take keys as closing brackets and values as opening brackeets because that will be more optimal as when we encounter opening bracket then our algo is to push it into the stack and at the end we only have closing bracket in our hand so that's why it would be optmal than vice versa..
            {'}','{'},
            {']','['},
            {')','('}
        };
        stack<char> st; //for inserting opening brackets..
        for(char c:s){ //range based iteration on given string..
            if(c=='{'||c=='['||c=='('){
                //if the character is openning bracket then simply push it...
                st.push(c);
            }
            else if(c=='}'||c==']'||c==')'){ //if closing bracket enocunters then couple of things to consider....
                if(st.empty()) return false; //first of all if the stack is empty  then no matching bracket and hence we can directly return false here...
                char top=st.top(); //else get top of stack for comparing it with current bracket
                if(top==brackets[c]) st.pop(); //if they found to be equal then simply pop that as we dont need it anymore and we can check others too..
                else return false; //if not then we can again return false here as above if will not satisfy if we reach here...
            }
            else continue; //this is optional condition if any other character other than parenthesis encountered ..
        }
        return st.empty(); //at the end if we reach here it means all the parenthesis have found their match and we popped out all and hence stack will be empty  then and if it is so then we can return true here or false based on whether it is empty or not...
    }
};