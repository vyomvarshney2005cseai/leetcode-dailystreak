int strStr(char* haystack, char* needle) {
    int hl = strlen(haystack);
    int nl = strlen(needle);
    if (nl == 0) return 0;
    for (int i = 0; i <= hl - nl; i++) {
        int j = 0;
        while (j < nl && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == nl) {
            return i; 
        }
    }
    return -1;
}