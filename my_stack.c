/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */

#include "include/my_stack.h"
#define N 10

int stack[N], top;

void stack_push(int x) {
    stack[top++] = x;
}

int stack_pop() {
   return stack[--top]; 
}

int stack_capacity() {
    return N;
}

int stack_size() {
    return top;
}

int stack_is_empty() {
    return top == 0;
}

int stack_is_full() {
    return top == N;
}
