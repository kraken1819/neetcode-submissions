#define rep(i,a,b) for(int i=a;i<=b;i++)

class Solution {
public:
    int evalRPN(vector<string>& tokens) { 
        
        int n = tokens.size(); 

        set<string> ops = {"+", "-", "/", "*"};

        stack<int> numbers;

        rep(i,0,n-1){
            if(ops.contains(tokens[i])){
                char op = tokens[i][0];

                int second = numbers.top();
                numbers.pop();
                int first = numbers.top();
                numbers.pop();

                int calculated_value; 

                if(op == '+') calculated_value = first + second; 
                else if(op == '-') calculated_value = first - second; 
                else if(op == '/') calculated_value = first / second; 
                else calculated_value = first * second;

                numbers.push(calculated_value);

            }else{
                numbers.push(stoi(tokens[i]));
            }

        }

        return numbers.top();
    }
};
