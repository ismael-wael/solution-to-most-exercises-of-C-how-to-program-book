#include <stdio.h>
#include <stdlib.h>
#define SIZE 99

void mean(  const unsigned int answer[]);
void median(unsigned int answer[]);//not constant because he apply change to the original array (he sorts them )
void mode (unsigned int freq[], const unsigned int answer[]);
void printArray (const unsigned int a[]);
void bubbleSort(unsigned int a[]);

int main()
{

    unsigned int frequency[10]={0};
    unsigned int response[SIZE]=
    {6,7,8,9,8,7,8,9,8,9,
     7,8,9,5,9,8,7,8,7,8,
     6,7,8,9,3,9,8,7,8,7,
     7,8,9,8,9,8,9,7,8,9,
     6,7,8,7,8,7,9,8,9,2,
     7,8,9,8,9,8,9,7,5,3,
     5,6,7,2,5,3,9,4,6,4,
     7,8,9,6,8,7,8,9,7,8,
     7,4,4,2,5,3,8,7,5,6,
     4,5,6,1,6,5,7,8,7};

    mean(response);
    median(response);
    mode(frequency,response);
    return 0;
}

void mean(const unsigned int answer[])
{
    printf("%s\n%s\n%s\n","********","Mean","********");
    unsigned int total = 0;
    size_t j ;
    for(j=0;j<SIZE;j++){
        total += answer[j];
    }
    printf("the mean is the average value of the data\n"
           "items. the mean is equal to the total of\n"
           "all the data items divided by the number of\n"
           "data items(%u). the mean value for\n"
           "this run is: %u / %u = %0.4f\n\n"
           ,SIZE,total,SIZE,(double)total/SIZE);
}
void printArray (const unsigned int a[])
{
    size_t j ;
    for(j=0;j<SIZE;j++){
            if(j%20==0){
                puts("");
            }
        printf("%2u",a[j]);
    }
}
void bubbleSort(unsigned int a[])
{
    size_t i ;
    unsigned int pass;
    for(pass=1;pass<SIZE;++pass){
       for(i=0;i<=SIZE-1;++i){
            if(a[i]> a[i+1]){
               int hold =a[i];
               a[i]=a[i+1];
               a[i+1]=hold;
            }
       }
    }
}

void median(unsigned int answer[])
{
    printf("\n%s\n%s\n%s\n%s",
           "********","Median","********",
           "The unsorted array of responses is");
    printArray(answer);
    bubbleSort(answer);
    printf("%s","\n\nThe sorted array is ");
    printArray(answer);
    printf("\n\nThe median is element %u of\n"
           "the sorted %u element array.\n"
           "For this run the median is %u\n\n"
           ,SIZE/2,SIZE,answer[SIZE/2]);
}
void mode (unsigned int freq[], const unsigned int answer[])
{
    printf("\n%s\n%s\n%s\n","********","Mode","********");
    size_t rating , j ;
    for( rating=1;rating<=9;rating++){
        freq[rating] = 0;
    }

    for( j=0;j<SIZE;j++){
            ++freq[answer[j]];
    }
    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
           "Response","Frequency","Histogram",
           "1   1   2   2   ","5    0   5   0   5");

    unsigned int largest = 0;
    unsigned int modeValue = 0;
    unsigned int h;

    for(rating = 1;rating <=9;++rating){
        printf("%8u%11u         ",rating,freq[rating]);
        if(freq[rating]>largest){
            largest = freq[rating];
            modeValue = rating;
        }
        for(h=1;h<=freq[rating];++h){
            printf("%s","*");
        }
        puts("");
    }

    printf("\nThe mode is the most frequent value.\n"
           "For this run the mode is %u which occurred"
           " %u times.\n",modeValue,largest);
}


