int minDeletionSize(char** strs, int strsSize) {
    int unsort = 0;
    for (int i = 0; strs[0][i] != '\0'; i++)
    {
        for (int j = 0; j < strsSize-1; j++)
        {
            int pre = strs[j][i] - 'A';
            int aft = strs[j+1][i] - 'A';

            if (pre > aft)
            {
                unsort++;
                break;
            }
        }
    }
    return unsort;
}