//
// Created by b00877391 on 6/27/2024.
//

#ifndef STRINGUTIL_H
#define STRINGUTIL_H
#include <stdbool.h>
int Find(char* text, char search);
char* strChr(char* text, char search);
void strCopy(const char* source, char* dest);
int strLength(const char* text);
void reverseString(char* dest);
void gswap(void* vp1, void* vp2, int size);
bool isPalindrome(char* text);
bool isPangramEN(char* text);
#endif //STRINGUTIL_H
