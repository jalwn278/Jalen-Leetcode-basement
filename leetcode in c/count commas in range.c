int countCommas(int n) {
    
    if (n < 1000)
    {
        return 0;
    }

    int rest = n - 999;

    int count = 0;
    for (int i = 0; i < rest; i++)
    {
        count++;
    }
    return count;
}