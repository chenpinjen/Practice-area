/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


void swap(char *x, char *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
    
}

void reversed(char *first, char *last){
    --last;
    while(first<last){
        swap(first,last);
        ++first;
        --last;
    }
    
}
int main()
{
    char aaa[] = "Helloisme~";
    printf("Hello World");
    
    reversed(&aaa[0],&aaa[10]);
    
    printf("%s",aaa);
    
    return 0;
}
