#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100


int StringLength(char sentence[]) {
    int length = 0;
    while (sentence[length] != '\0') {
        length++;
    }
    return length;
}


int NumOfWords(char sentence[], int StrLength) {
    int count = 0;
    int inWord = 0; 
    for (int i = 0; i < StrLength; i++) {
        if (!isspace(sentence[i]) && !inWord) {
            inWord = 1; 
            count++;
        } else if (isspace(sentence[i])) {
            inWord = 0; 
        }
    }
    return count;
}

int NumOfVowels(char sentence[], int StrLength) {
    int count = 0;
    for (int i = 0; i < StrLength; i++) {
        char ch = tolower(sentence[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}


int VowelFreq(char sentence[], char vowel) {
    int count = 0;
    vowel = tolower(vowel); 
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (tolower(sentence[i]) == vowel) {
            count++;
        }
    }
    return count;
}

int main() {
    char sentence[MAX_LENGTH];
    printf("Enter a sentence: ");
    fgets(sentence, MAX_LENGTH, stdin); 

    int length = StringLength(sentence);

    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
        length--;
    }

    int numWords = NumOfWords(sentence, length);
    int numVowels = NumOfVowels(sentence, length);

    printf("\nSentence: \"%s\"\n", sentence);
    printf("Length of the sentence: %d\n", length);
    printf("Number of words: %d\n", numWords);
    printf("Number of vowels: %d\n", numVowels);

    
    printf("Frequency of vowels:\n");
    char vowels[] = "aeiou";
    for (int i = 0; vowels[i] != '\0'; i++) {
        printf("'%c': %d\n", vowels[i], VowelFreq(sentence, vowels[i]));
    }

    return 0;
}

