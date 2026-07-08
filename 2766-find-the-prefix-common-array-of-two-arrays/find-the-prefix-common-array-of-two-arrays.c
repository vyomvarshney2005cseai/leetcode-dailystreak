int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    *returnSize = ASize;
    int* c = (int*)malloc(sizeof(int) * ASize);
    if (c == NULL) return NULL;

    int hash[51] = {0};
    int common_count = 0;

    for (int i = 0; i < ASize; i++) {

        hash[A[i]]++;
        if (hash[A[i]] == 2) {
            common_count++;
        }


        hash[B[i]]++;
        if (hash[B[i]] == 2) {
            common_count++;
        }

        c[i] = common_count;
    }
    return c;
}