char* longestCommonPrefix(char** strs, int strsSize) {
    int length = 0;
    int lengthc = 100;
    int small = 100;

    for(int i = 0; i<strsSize; i++){
        if(strlen(strs[i])<small){
            small = strlen(strs[i]);
        }
    }

    for (int i = 0; i<strsSize-1; i++){
        for (int j = 0;  j<small; j++){
            if(strs[i][j] == strs[i+1][j]){
                length += 1;
            }

            else{
                break;
            }
        }

        if(length < lengthc){
            lengthc = length;
        }

        length = 0;
    }

    if(lengthc != 0){
        char* t = malloc(lengthc + 1);
        strncpy(t, strs[0], lengthc);
        t[lengthc] = '\0';
        return t;
    }

    else{
        return "";
    }
}