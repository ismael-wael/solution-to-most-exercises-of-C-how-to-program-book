// polish-notation (for one digit)
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include <math.h>

int Precedent (char op1, char op2);
void InfixToPostfix (char infix[], char postfix[]);
int IsDigit (char c);
float EvaluatePostfix(char expr[]);
float Operation(char c , float op1 , float op2);

int main(void)
{
    char infix[] ="2+4*6*2/3+5-9";
     //char infix[] = "123+45*67*80/9-98*2";
    printf("%s\n",infix);
    char postfix[80];
    InfixToPostfix(infix,postfix);
    printf("%s\n",postfix);
    StackEntry val;
    val.info.float_type = EvaluatePostfix(postfix);
    puts("");
    printf("%f\n",val.info.float_type);

    return 0 ;
}

void InfixToPostfix (char infix[], char postfix[])
{
    int i,j;
    StackEntry op,c;
    Stack s;
    InitializeStack(&s);

    for(i = 0 , j = 0 ; (c.info.char_type=infix[i]) != '\0' ; i++)
    {
        if(IsDigit(c.info.char_type))
        {
            postfix[j++] = c.info.char_type;
        }
        else{
            if(!StackEmpty(&s)){
                StackTop(&op,&s);
                while(!StackEmpty(&s) && Precedent(op.info.char_type,c.info.char_type)){
                    pop(&op,&s);
                    postfix[j++] = op.info.char_type;
                    if(!StackEmpty(&s))
                        StackTop(&op,&s);
                }
            }
            push(c,&s);
        }
    }
        while(!StackEmpty(&s)){
            pop(&op,&s);
            postfix[j++]=op.info.char_type;
        }
        postfix[j]='\0';
}

int IsDigit (char c)
{
    return (c >= '0' && c <= '9');
}

int Precedent (char op1, char op2)
{
    if(op1 == '^') return 1;
    if((op1 == '*') || (op1 == '/'))
        return (op2 != '^');
    if((op1 == '+') || (op1 == '-'))
        return ((op2 != '^') && (op2 != '*') && (op2 != '/'));

    return 0;
}

float EvaluatePostfix(char expr[])
{
    int i;
    char c;
    StackEntry op1, op2 , val;
    Stack s;

    InitializeStack(&s);

    for(i = 0 ; (c = expr[i]) != '\0' ; i++)
    {
        if(IsDigit(c))
        {
            StackEntry x;
            x.info.float_type = c - '0';
            push(x,&s);
        }
        else
        {
            pop(&op2,&s);
            pop(&op1,&s);
            val.info.float_type = Operation(c,op1.info.float_type,op2.info.float_type);
            //printf("%f\n",val);
            push(val,&s);
        }
    }
    pop(&val,&s);
    return val.info.float_type;
}

float Operation(char c , float op1 , float op2)
{
    switch(c){
        case '+' : return (op1+op2);
        case '-' : return (op1-op2);
        case '*' : return (op1*op2);
        case '/' : return (op1/op2);
        case '^' : return (pow(op1,op2));
    }
}










