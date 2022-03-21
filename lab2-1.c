#include <stdio.h>
int main()
{   
    printf ("[----- [Kim Hyeong Jin] [2021041079] -----]\n");
    char charType; // char형 변수
    int integerType; // int형 변수
    float floatType; // float형 변수
    double doubleType; // double형 변수
    printf("Size of char: %ld byte\n",sizeof(charType)); // char형 변수의 크기 : 1byte
    printf("Size of int: %ld bytes\n",sizeof(integerType)); // int형 변수의 크기 : 4bytes
    printf("Size of float: %ld bytes\n",sizeof(floatType)); // float형 변수의 크기 : 4bytes
    printf("Size of double: %ld bytes\n",sizeof(doubleType)); // double형 변수의 크기 : 8bytes
    printf("-----------------------------------------\n");
    printf("Size of char: %ld byte\n",sizeof(char)); // char 자료형의 크기 : 1byte
    printf("Size of int: %ld bytes\n",sizeof(int)); // int 자료형의 크기 : 4bytes
    printf("Size of float: %ld bytes\n",sizeof(float)); // float 자료형의 크기 : 4bytes
    printf("Size of double: %ld bytes\n",sizeof(double)); // double 자료형의 크기 : 8bytes
    printf("-----------------------------------------\n");
    printf("Size of char*: %ld byte\n",sizeof(char*)); // char 포인터 자료형의 크기 : 4bytes
    printf("Size of int*: %ld bytes\n",sizeof(int*)); // int 포인터 자료형의 크기 : 4bytes
    printf("Size of float*: %ld bytes\n",sizeof(float*)); // float 포인터 자료형의 크기 : 4bytes
    printf("Size of double*: %ld bytes\n",sizeof(double*)); // double 포인터 자료형의 크기 : 4bytes
    return 0;
}