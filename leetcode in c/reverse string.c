#include <string.h>
void reverse(char* s, int start, int end)
{
    while (start < end)
    {
        char tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        start++;
        end--;
    }
}

char* reverseStr(char* s, int k) {
    int len = strlen(s);
    
    for (int i = 0; i < len; i += 2 * k) {
        int end = (i+k-1 < len) ? (i+k-1) : (len-1);

        reverse(s, i, end);
    }
    
    return s;
}
