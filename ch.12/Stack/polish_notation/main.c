// polish-notation for any number of digits
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void InfixToPostfix (const char infix[]);
void Add_Operands(int st, int en,const char *in);
int Precedent (char op1, char op2);
int IsDigit (char c);
int EvaluatePostfix(void);
int Operation(char c , int op1 , int op2);

Stack postfix;

int main(void)
{
    InitializeStack(&postfix);
    //const char infix[] = "123+45*67*80/9-98*2";
    const char infix[] = "5-13";
    printf("%s\n",infix);
    InfixToPostfix(infix);
    printf("\\**** %d ****/",EvaluatePostfix());
    return 0 ;
}

void InfixToPostfix (const char infix[])
{
    int start = 0 , end = 0 ;
    Stack operators;
    InitializeStack(&operators);

    int size;
    char y;

    for(int i = 0 ; infix[i] != '\0' ; i++)
    {
        while(IsDigit(infix[i]) && start == 0)
        {
            start = i+1;// that one is in case first index is a number
            end = start-1;
        }
        if(IsDigit(infix[i]))
        {
            end++;
        }
        else
        {
            Add_Operands(start-1,end-1,infix);
            start = 0 ;
            char x = infix[i];
            if(!StackEmpty(&operators))
            {
                StackTop((void*)&y, &operators, &size);
                while(!StackEmpty(&operators) && Precedent(y,x))
                {
                    pop((void*)&y, &operators, &size);
                    push((void*)&y, &postfix,sizeof(y));
                    if(!StackEmpty(&operators))
                        StackTop((void*)&y, &operators, &size);
                }
            }
            push((void*)&x, &operators,sizeof(x));
        }
    }
    Add_Operands(start-1,end-1,infix);
    while(!StackEmpty(&operators))
    {
        pop((void*)&y, &operators, &size);
        push((void*)&y, &postfix,sizeof(y));
    }
}

void Add_Operands(int st, int en,const char *in)
{
    int value = 0;
	int ten_multiplers = 1;
	for(int  i = en ; i >= st ; i--)
	{
		value +=(in[i]-'0')*ten_multiplers;
		ten_multiplers *= 10;
	}
	push((void*)&value, &postfix,sizeof(value));
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

int EvaluatePostfix(void)
{
    int size1 = StackSize(&postfix);
    int operands[10]={0};
    int operands_index = 0;

    int size=0;
    int y=0;
    int value=0;

    Stack prefix;
    InitializeStack(&prefix);
    for(int i = 0 ;i<size1; i++)
    {
        pop((void*)&y, &postfix, &size);
        push((void*)&y, &prefix,size);
    }

    for(int i = 0 ;i<size1; i++)
    {
        pop((void*)&y, &prefix, &size);
        switch(size)
        {
            case 1:
                value = Operation((char)y,operands[operands_index-2],operands[operands_index-1]);
                operands_index -=2;
                operands[operands_index++] = (int)value;
                break;
            case 4:
                operands[operands_index++] = (int)y;
                break;
        }
    }
    return value;
}

int Operation(char c , int op1 , int op2)
{
    switch(c){
        case '+' : return (op1+op2);
        case '-' : return (op1-op2);
        case '*' : return (op1*op2);
        case '/' : return (op1/op2);
    }
}










