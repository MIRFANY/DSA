#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidParenthesis(string expression)
{
    stack<char> s;
    int n = expression.length();

    for (int i = 0; i < n; i++)
    {
        char ch = expression[i];
        // if opening bracket stack push , and for closing brakcet stack pop
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }

        else
        {
            if (!s.empty())
            {
                char top = s.top();
                if (
                    (ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    return s.empty();
}

// bool isValidParenthesis(string expression){
//     stack<char>s;
//     for(int i=0;i<expression.length(); i++){
//         char ch=expression[i];

//         //if opening bracket, stack push
//         //if close bracket . stack top & pop

//         if(ch=='(' || ch=='{' || ch=='['){
//             s.push(ch);
//         }
//         else{
//             //for closing bracket
//             if(!s.empty()){

//                 char top = s.top();
//                 if(
//                     (ch==')' && top=='(') ||
//                     (ch='}' && top=='{')||
//                     (ch==']' && top=='[')
//                 ){
//                     s.pop();
//                 }
//                 else{
//                     return false;
//                 }

//             }
//             else{
//             return false;
//             }
//         }
//     }

//     if(s.empty()){
//         return true;
//     }
//     else{
//         return false;
//     }

// }