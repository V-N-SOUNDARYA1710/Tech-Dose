bool not_ordered(char *a, char *b) {
    int res = strcmp(a, b);
    return res > 0 ? true : false;
}

bool isAlienSorted(char **words, int wordsSize, char *order) {
    int mapping[26];
    for (int i = 0; i < 26; i++) {
        mapping[*(order + i) - 'a'] = i;
    }

    for (int i = 0; i < wordsSize; i++) {
        char *p = *(words + i);
        while (*p != '\0') {
            *p = mapping[*p - 'a'] + 'a';
            p++;
        }
        if (i >= 1 && not_ordered(*(words + i - 1), *(words + i))) return false;
    }

    return true;
}
