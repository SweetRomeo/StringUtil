#include <stdio.h>
//
// Created by b00877391 on 6/27/2024.
//
#include "StringUtil.h"
#include <ctype.h>

int Find(char* text, char search) {
    for (int i = 0; i < sizeof(text); ++i) {
        if (text[i] == search) {
            return i;
        }
    }
    return -1;
}

char* strChr(char* text, char search) {
    while (*text != '\0') {
        if (tolower(*text++) == tolower(search)) {
           return text;
        }
    }
    return NULL;
}

void strCopy(const char* source, char* dest) {
    while(*dest++ = *source++) {

    }
}

int strLength(const char* text) {
    int len = 0;
    while(*text++ != '\0') {
        len++;
    }
    return len;
}

void gswap(void* vp1, void* vp2, int size) {
    char* cp1 = vp1;
    char* cp2 = vp2;
    while (size--) {
        char temp = *cp1;
        *cp1 = *cp2;
        *cp2 = temp;
    }
}

void reverseString(char* dest) {
    int len = strLength(dest);
    for(int i = 0; i < len / 2; ++i) {
        gswap(dest + i, dest + len - i - 1, sizeof(char));
    }
}

bool isPalindrome(char* text) {
    int len = strLength(text);
    for(int i = 0; i < len / 2; ++i) {
        if(text[i] != text[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

bool isPangramEN(char* text) {
    char* alphabet = "abcdefghijklmnqprstuvwxyz";

    for (int i = 0; i < strLength(alphabet); ++i) {
        if(!strChr(text, alphabet[i])) {
            return false;
        }
    }
    return true;
}


