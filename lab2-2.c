#include <stdio.h>
int main()
{   
    printf ("[----- [Kim Hyeong Jin] [2021041079] -----]\n");
    int i; // int형 변수
    int *ptr; // 포인터 변수
    int **dptr; // 이중 포인터 변수
    i = 1234; // i에 1234 저장
    printf("[checking values before ptr = &i] \n");  // ptr에 i의 주소 저장 전 값 확인
    printf("value of i == %d\n", i); // i의 값 : 1234
    printf("address of i == %p\n", &i); // i의 주소
    printf("value of ptr == %p\n", ptr); // ptr의 값
    printf("address of ptr == %p\n", &ptr); // ptr의 주소
    ptr = &i; /* ptr is now holding the address of i */ // ptr에 i의 주소 저장
    printf("\n[checking values after ptr = &i] \n"); // ptr에 i의 주소 저장 후 값 확인
    printf("value of i == %d\n", i); // i의 값 : 1234
    printf("address of i == %p\n", &i); // i의 주소
    printf("value of ptr == %p\n", ptr); // ptr의 값 : (i의 주소)
    printf("address of ptr == %p\n", &ptr); // ptr의 주소
    printf("value of *ptr == %d\n", *ptr); // ptr을 역참조한 값 (ptr(i의 주소)이 가리키는 값) : 1234
    dptr = &ptr; /* dptr is now holding the address of ptr */ // dptr에 ptr의 주소 저장
    printf("\n[checking values after dptr = &ptr] \n"); // dptr에 ptr의 주소 저장 후 값 확인
    printf("value of i == %d\n", i); // i의 값 : 1234
    printf("address of i == %p\n", &i); // i의 주소
    printf("value of ptr == %p\n", ptr); // ptr의 값 : (i의 주소)
    printf("address of ptr == %p\n", &ptr); // ptr의 주소
    printf("value of *ptr == %d\n", *ptr); // ptr을 역참조한 값 : 1234
    printf("value of dptr == %p\n", dptr); // dptr의 값 : (ptr의 주소)
    printf("address of dptr == %p\n", &dptr); // dptr의 주소
    printf("value of *dptr == %p\n", *dptr); // dptr을 역참조한 값 (ptr의 값) : (i의 주소)
    printf("value of **dptr == %d\n", **dptr); // * 두 번 사용하여 dptr <- ptr <- i와 같은 모양으로 i의 값을 가져옴 : 1234
    *ptr = 7777; /* changing the value of *ptr */ // 역참조 연산자로 메모리 주소에 접근하여 7777 저장
    printf("\n[after *ptr = 7777] \n"); 
    printf("value of i == %d\n", i); // i에 7777이 저장됨
    printf("value of *ptr == %d\n", *ptr); // ptr의 역참조 : 7777
    printf("value of **dptr == %d\n", **dptr); // dptr을 두번 역참조 : 7777
    **dptr = 8888; /* changing the value of **dptr */ // 이중 포인터에 역참조 연산자 두 번 사용으로 메모리 주소에 접근하여 8888 저장
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i); // i에 8888이 저장됨
    printf("value of *ptr == %d\n", *ptr); // ptr의 역참조 : 8888
    printf("value of **dptr == %d\n", **dptr); // dptr을 두번 역참조 : 8888
    return 0;
}