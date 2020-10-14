/*that file contains my first intuitive answers to important interview c codes*/
#include <stdio.h>
#include <stdlib.h>

#define question 18

#if question == 1

int main(void)
{
    int arr[20] = {1,2,3,3,3,3,4,3,3,3,6,5,3,3,3,3,3,9,9};
    printf("%d",longest_occurence(arr,(sizeof(arr))/(sizeof(int)),3));
    return 0 ;
}

int longest_occurence(int x[],int size,int number)
{
    int count = 0;
    int longest = 0;
    for(int i = 0 ; i < size ; i++)
    {
        if (x[i] != number)
            continue;
        else
        {
            if((i == 0) || (x[i] != x[i-1] ))
            {
                if(count > longest)
                    longest = count;
                count = 1 ;
            }
            else if (x[i] == x[i-1])
            {
                count++;
            }
        }
    }
    if(count > longest)
        longest = count;
    return longest;
}

/*lesson learned : try to compact your code as much as possible
                    benefit from each line you write
                    that "continue" statement is useless
                    what he did is just he compacted the code*/

#elif question == 2
int* elementsExclusive(int lowerValue, int upperValue, int* Arr_size);
int Array[256];//it has to be global
// if it's local it can't be dereferenced in main (as it will have been destructed
                                                   //just after you exit the function)

int main(void)
{
    int* ptr;
    int Array_size ;
    ptr = elementsExclusive(5, 10, &Array_size);

    for(int i = 0 ; i < Array_size ; i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0 ;
}

int* elementsExclusive(int lowerValue, int upperValue, int* Arr_size)
{
    if (lowerValue >= upperValue)
        return 0xff;
    else
    {
        *Arr_size = upperValue - lowerValue - 1;
        Array[*Arr_size];
        for(int i = 1 ; i <= *Arr_size ; i++)
        {
            Array[i-1] = upperValue - i ;
        }
        return Array ;
    }
}

/*lesson learned :
1 - read the question correctly before answering it
he said return array of two elements each contains
0xff, why you return (0xff) only ?!

2 - any returned array from function has to be a global array
as you just return address*/

#elif question == 6

int main(void)
{
    printf("%d",number_of_ones(10));
    return 0 ;
}

int number_of_ones(int number)
{
    int count = 0;
    int t=0x8000;
    for(int i =0;i<32;i++)
    {
        count += t&number?1:0;
        t>>=1;
    }

        return count;
}

/*lesson learned :
1- read the question correctly before answering it
    he said unsigned int, why you used signed int ?!*/

#elif question == 7

int main(void)
{
    int x = 3;
    printf("%d",Max_Zeros(257));
    return 0 ;
}

int Max_Zeros(unsigned int number)
{
    int count = 0;
    int largest = 0;
    unsigned int t = 0x80000000;

    for(unsigned int i = 0 ; i < 32 ; i++)
    {
        if(t & 1)
            return largest;
        if(t & number)
        {
           count = 0;
           t >>= 1;
           while(!(t & number))
           {
               count++;
               t>>=1;
              if (count > largest)
                  largest = count;
               if(t & 1)
                  return largest;
           }
           continue;
        }
        t >>= 1;//handles only zeros before the first one
    }
}

#elif question == 9

int main(void)
{
    int x = 3;
    printf("%d",Max_Zeros(257));
    return 0 ;
}

int counts_falling_edge(unsigned int number)
{
    static int counter = 0;
    static int previous = 0;
    if(!number && previous)
    {
        counter++;
    }
    previous = number ;
     return counter;
}

/*i learned :
1 - falling edge means low after high
so low after low isn't a falling edge
*/

#elif question == 10

int main(void)
{
    int x = 3;
    printf("%d",Max_Zeros(257));
    return 0 ;
}

int counts_rising_edge(unsigned int number)
{
    static int counter = 0;
    static int previous = 1;
    if(number && !previous)
    {
        counter++;
    }
    previous = number ;
     return counter;
}
/*i learned :
1 - take care of the sp ecial cases
*/

#elif question == 11

int main(void)
{
    int x = 3;
    printf("%d",Max_Zeros(257));
    return 0 ;
}

int R_circulat_shift(unsigned int number,unsigned int shift,unsigned int* result)
{
    if(shift > 32)
    {
        *result = number;
        return 0xff;
    }
    else
    {
        *result = (number>>shift) | (number<<(32-shift));
        return 0;
    }
}

/*i learned :
1 - make your code generic, how do you know it's 32 bit size ?!
*/

#elif question == 12

int main(void)
{
    printf("%d",max_xor(1,5));
    return 0 ;
}

int max_xor(int a, int b)
{
    int max_xor = 0;
    int temp = 0;
    for(int i=a;i<=b;i++)
    {
        for(int j=i;j<=b;j++)
        {
            temp = i^j;
            if(temp > max_xor)
            {
                max_xor = temp;
            }
        }
    }
    return max_xor;
}

/*i learned :
1 - smart
*/

#elif question == 13

int main(void)
{
    printf("%d",max_xor(1,5));
    return 0 ;
}

int clear bit(int number, int bit)
{
    if((bit > 8 * sizeof(number)) || bit < 0)
    {
        return number;
    }
    else
    {
        return number & ~(1<<bit);
    }
}

/*i learned :

*/

#elif question == 14
void reverse_array(int Array[],unsigned int size);
int main(void)
{
    int Arr[5]={1,2,3,4,5};
    for(int i = 0 ; i<5;i++)
    {
        printf("%d, ",Arr[i]);
    }

    puts("");
    reverse_array(Arr,5);
    for(int i = 0 ; i<5;i++)
    {
        printf("%d, ",Arr[i]);
    }
    return 0 ;
}

void reverse_array(int Array[],unsigned int size)
{
    int temp;
    for(int i = 0 ; i<size/2 ; i++)
    {
        temp = Array[i];
        Array[i]=Array[size-i-1];
        Array[size-i-1] = temp;
    }
}

#elif question == 15
int index(int Array[],unsigned int size,unsigned int number);
int main(void)
{
    int Arr[6]={1,2,3,4,4,4};
    int x = index(Arr,6,4);
    printf("%d",x);
    return 0 ;
}

int index(int Array[],unsigned int size,unsigned int number)
{
    int idx = -1;
    for(int i = 0 ; i<size ; i++)
    {
        if(Array[i] == number)
        {
            idx = i;
            //break; (for problem 16)
        }
    }
    return idx;
}

#elif question == 17
int index(int Array[],unsigned int size,unsigned int number);
int main(void)
{
    int Arr[6]={1,9,3,4,0,7};
    selection(Arr,6);
    for(int i = 0 ; i<6 ; i++)
    {
        printf("%d\n",Arr[i]);
    }
    return 0 ;
}

void selection(int Array[],unsigned int size)
{
    int temp = 0;
    int min = 0;

    for(int i = 0 ; i<size ; i++)
    {
        min = i;
        for(int j = i+1 ; j<size ; j++)
        {
            if(Array[min]>Array[j])
                min=j;
        }
        temp = Array[i];
        Array[i]=Array[min];
        Array[min]=temp;
    }
}

#elif question == 18
int index(int Array[],unsigned int size,unsigned int number);
int main(void)
{
    int Arr[6]={1,9,3,4,0,7};
    selection(Arr,6);
    for(int i = 0 ; i<6 ; i++)
    {
        printf("%d\n",Arr[i]);
    }
    return 0 ;
}

int heater_temperature(unsigned int temperature)
{
    int heat=0;
    if(temperature>= 0 && temperature <=30)
    {
        heat = 7;
    }
}

#endif // if
