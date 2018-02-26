#include <iostream>
#include <stack>

using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack <char> stack_char;
        int i;
        //bool res = true;
        for(i = 0;i < s.length();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stack_char.push(s[i]);
            }
            else
            {
                if(s[i] == ')'){
                    if(stack_char.size() == 0) return false;
                    else if(stack_char.top() != '(')
                    {
                        return false;
                    }
                    else
                    {
                        stack_char.pop();
                    }
                }
                else if(s[i] == ']'){
                    if(stack_char.size() == 0) return false;
                    else if(stack_char.top() != '[')
                    {
                        //res = false;
                        return false;
                    }
                     else
                    {
                        stack_char.pop();
                    }
                }
                else
                {
                    if(stack_char.size() == 0) return false;
                    else if(stack_char.top() != '{')
                    {
                        //res = false;
                        return false;
                    }
                     else
                    {
                        stack_char.pop();
                    }
                }
            }
        }
        if(stack_char.size() == 0) return true;
        else return false;

    }
};

int main()
{
    cout << "Hello world!" << endl;
    Solution solve;
    bool res = solve.isValid("([)]");
    cout << "res:" << res << endl;
    return 0;
}
