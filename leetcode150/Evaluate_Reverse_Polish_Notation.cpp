class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        //normal algorithm for evaluating post fix expression is just here implemented as logic and code...
        stack<int> s; 
        for(string token:tokens){
            if(token=="+" or token=="-" or token=="*" or token=="/"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.pop();
                int result;
                if(token=="+") result=b+a;
                else if(token=="-") result=b-a;
                else if(token=="*") result=b*a;
                else result=b/a;
                s.push(result);
            }
            else s.push(stoi(token)); //here stoi function is the inline function that converts the string to integer and it handles negative numbers also...
        }
        return s.top();//at last one integer will be left which will be top of the stack and we will return it and we have evaluated our reverse polished given expression...
    }
};
