class Solution {
public:
    int calculate(string a) {
        stack<int> s;
        int num = 0;
        char sign = '+'; 
        
        for (int i = 0; i < a.size(); i++) {
            char ch = a[i];
            
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            
            if (!isdigit(ch) && ch != ' ' || i == a.size() - 1) {
                if (sign == '+') {
                    s.push(num);
                } else if (sign == '-') {
                    s.push(-num);
                } else if (sign == '*') {
                    int x = s.top();
                    s.pop();
                    s.push(x * num);
                } else if (sign == '/') {
                    int x = s.top();
                    s.pop();
                    s.push(x / num);
                }
                sign = ch;
                num = 0;
            }
        }
        
        int result = 0;
        while (!s.empty()) {
            result += s.top();
            s.pop();
        }
        
        return result;
    }
};