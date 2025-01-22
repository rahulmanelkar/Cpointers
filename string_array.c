#include <stdio.h>
int main(int argc, char **argv){
    char str1[]="Hello"; //This is an array
    char *str2="Goodbye"; //This is a pointer
    //printf("%s %c %p %p %p\n", str1, str1[0], &str1, &str1[0],str1);
    printf("%p %p %s\n",&str1,str1,str1);
    printf("%p %p %s\n",&str2,str2,str2);
    /*
    Output is
    0x7ffcb48b91b2 0x7ffcb48b91b2 Hello
    0x7ffcb48b91a8 0x55ccb3bad004 Goodbye
    The first one, the array is itself a pointer
    The 2nd one, it's a pointer to the array, that's why different values. 
    */
    return 0;
}