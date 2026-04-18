int heightChecker(int* heights, int heightsSize) {
    
    int* alt = malloc(heightsSize * sizeof(int));
    for (int i = 0; i < heightsSize; i++)
    {
        alt[i] = heights[i];
    }

    for (int i = 0; i < heightsSize; i++)
    {
        for (int j = 0; j < heightsSize - 1 - i; j++)
        {
            if (alt[j] > alt[j+1])
            {
                int tmp = alt[j];
                alt[j] = alt[j+1];
                alt[j+1] = tmp;
            } 
        }
    }

    int count = 0;
    for (int i = 0; i < heightsSize; i++)
    {
        if (alt[i] != heights[i])
        {
            count++;
        }
    }
    return count;
}