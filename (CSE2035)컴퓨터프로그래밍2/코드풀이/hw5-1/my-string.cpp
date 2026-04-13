#include <cstdio>
#include "my-string.hpp"

// TODO: Fill in these functions. Check the comments in my-string.hpp file.

MyString::~MyString() {
    free(arr);
}

size_t MyString::GetLength() {
    return length;
}

void MyString::Clear() {
    length = 0;
}

void MyString::Insert(MyString *s, int idx) {
    size_t s_len = s->GetLength();
    if (idx < 0 || idx > length || s_len == 0) {
        return;
    }

    char * tmp = (char*) malloc(length + s_len);
    for (int i = 0; i < idx; i++)
        tmp[i] = arr[i];
    for (int i = idx; i < length; i++)
        tmp[i + s_len] = arr[i];
    for (int i = 0; i < s_len; i++)
        tmp[idx + i] = s->arr[i];
    length += s_len;
    free(arr);
    arr = tmp;
}

void MyString::Remove(int idx, int n) {
    if (idx < 0 || idx > length || n < 0 || idx + n > length) {
        return;
    }

    for(int i = idx; i + n < length; i++)
        arr[i] = arr[i + n];

    length -= n;
}
