char* deleteBackspace(char* s)
{
    int index = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != '#')
        {
            s[index++] = s[i];
        }
        else
        {
            if (index > 0)
            {
                index--;
            }
        }
    }
    s[index] = '\0';
    return s;
}

bool backspaceCompare(char* s, char* t) {
    s = deleteBackspace(s);
    t = deleteBackspace(t);
    return strcmp(s,t) == 0;
}