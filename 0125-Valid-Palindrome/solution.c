#include <string.h>
bool isPalindrome(char* s) {
    char S[strlen(s)+1];
    int i=0;
    int j=0;
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z'){
            S[j]=s[i]+32;
            j++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            S[j]=s[i];
            j++;
        }
        else if(s[i]>='0' && s[i]<='9'){
            S[j]=s[i];
            j++;
        }
        i++;
    }    
    S[j]='\0';
    char rev_S[j + 1];
    for (int k = 0; k < j; k++) {
        rev_S[k] = S[j - 1 - k]; 
    }
    rev_S[j] = '\0';
    return strcmp(S, rev_S) == 0;
}