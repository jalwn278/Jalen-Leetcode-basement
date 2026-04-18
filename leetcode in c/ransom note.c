bool canConstruct(char* ransomNote, char* magazine) {
    
    int tmp[26] = {0};

    while (*ransomNote)
    {
        tmp[*ransomNote - 'a']++;
        ransomNote++;
    }

    while (*magazine)
    {
        tmp[*magazine - 'a']--;
        magazine++;
    }

    for (int i = 0 ; i < 26; i++)
    {
        if (tmp[i] > 0)
        {
            return false;
        }
    }
    return true;
}