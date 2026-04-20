bool checkDistances(char* s, int* distance, int distanceSize) {
    int i = 0;
    while (s[i] != NULL)
    {
        int index = 0;
        int gap = 0;
        for (int j = 0; j < i; j++)
        {
            if (s[j] == s[i])
            {
                gap = i - j - 1;
                index = s[i]-'a';
                if (distance[index] != gap)
                {
                    return false;
                }
            }
        }
        i++;
    }
    return true;
}