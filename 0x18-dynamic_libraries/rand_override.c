int rand() {
    static int i = 0;
    int winning_numbers[6] = {9, 8, 10, 24, 75, 9};

    if (i < 6)
        return winning_numbers[i++];
    else
        return 1;  // Any number for the rest of calls
}

