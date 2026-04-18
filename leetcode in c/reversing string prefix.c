char* reversePrefix(char* s, int k) {
    
    for (int i = 0; i < k / 2; i++)
    {
        int tmp = s[i];
        s[i] = s[k-1-i];
        s[k-1-i] = tmp;
    }

    return s;
}