bool checkTwoChessboards(char* coordinate1, char* coordinate2) {
    
    int c1 = coordinate1[0] - 'A' + (int)coordinate1[1];
    int c2 = coordinate2[0] - 'A' + (int)coordinate2[1];

    return (c1 % 2) == (c2 % 2);
}