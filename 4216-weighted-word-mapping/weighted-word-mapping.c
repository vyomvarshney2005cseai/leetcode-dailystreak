char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    char* ans = (char*)malloc(sizeof(char) * (wordsSize + 1));
    if (ans == NULL) return NULL; 
    for (int i = 0; i < wordsSize; i++) {
        int wordSum = 0;
        for (int j = 0; words[i][j] != '\0'; j++) {
            char currentChar = words[i][j];
            int weightIndex = currentChar - 'a'; 
            wordSum += weights[weightIndex];
        }
        ans[i] = 'z' - (wordSum % 26);
    }
    ans[wordsSize] = '\0';
    return ans;
}