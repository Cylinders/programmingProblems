int mostWordsFound(char** sentences, int sentencesSize) {
    int most = 0;
    int current = 0;
    int j = 0;
    char x = 'a';
    for (int i = 0; i < sentencesSize; i++) {
        j = 0;
        current = 0;
        x = 'a';
        while (x != '\0') {
            x = sentences[i][j];
            if (x == ' ') {
                current++;
            }
            j++;
        }
        printf("%d \n", current);
        if (current > most) {
            most = current;
        }

    }
    return most + 1;
}
