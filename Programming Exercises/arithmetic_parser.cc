#include<stdio.h>
#include<stdlib.h>
#include <stack>
#include <string>
#include <string.h>
#include <iostream>
#include <ctype.h>

#define ADD_PREC 1
#define SUB_PREC 1
#define MULT_PREC 2
#define LEFT_PAREN_PREC 3

/* Function declarations */
std::string infixToPostfix(std::string expression);
int parseAndEvaluatePostfixExpression(std::string expression);
void parenPermutations(std::string expression);

/* Given an expression with parenthesis, parse and return the computed value */
/*std::string infixToPostfix(std::string expression)
{
	std::string postfix_expression = "";
	std::stack<std::string> stack;
	
	for (unsigned int i = 0; i < expression.length(); i++)
	{
		std::string token = expression.substr(i);
		
		if (isdigit(atoi(token.c_str())))
		{
			postfix_expression += token;
		}
		else if(token.compare("(") == 0)
		{
			stack.push(token);
		}
		else if(token.compare(")") == 0)
		{
		
		}
		else
		{
			
		}
	}
	
	return postfix_expression;
}*/

/* Given an expression with parenthesis, parse and return the computed value */
int parseAndEvaluatePostfixExpression(std::string expression)
{
	std::stack<std::string> stack;
	
	for (unsigned int i = 0; i < expression.length(); i++)
	{
		std::string token = expression.substr(i);
		
		if (isdigit(atoi(token.c_str())))
		{
			stack.push(token);
		}
		else
		{
			int op1 = atoi(stack.top().c_str());
			stack.pop();
			int op2 = atoi(stack.top().c_str());
			stack.pop();
			int eval;
			
			switch(expression[i])
			{
				case "+":
					eval = op1 + op2;
					break;
				case "-":
					eval = op1 - op2;
					break;
				case "*":
					eval = op1 * op2;
					break;
				case "/":
					eval = op1 / op2;
					break;
				default:
					break;
			}
			stack.push(std::to_string(eval));
		}
	}
	
	return atoi(stack.top().c_str());
}

/* Given an expression without parenthesis, construct all permutations of the expression
with parenthesis inserted, compute them, and determine the number of unique values */
void parenPermutations(std::string expression)
{
	std::cout << parseAndEvaluatePostfixExpression(expression) << std::endl;
}

int main(void)
{
	std::string expression = "2 3 * 4 2 / + 5 3 * 6 + -"; 
	parenPermutations(expression);
	std::cout << expression << std::endl;
	return 0;
}