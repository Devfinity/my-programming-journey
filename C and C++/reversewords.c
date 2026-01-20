#include <stdio.h>
#include <string.h>

void reverseWords(char *s)
{
    char *words[1000];
    int count = 0;

    char *token = strtok(s, " \n"); //strtok seprates sentence into words
    while (token != NULL)
    {
        words[count++] = token; //count stores the words index and put thems in token
        token = strtok(NULL, " \n"); // \n is there to because without it it gives weird output otherwise
    }
    for (int i = count - 1; i >= 0; i--) // this reverses the sentence
    {
        printf("%s", words[i]);
        if (i > 0)
            printf(" ");
    }
    printf("\n");
}

int main()
{
    char sentence[2000];

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin); //reads the whole input including spaces

    reverseWords(sentence);

    return 0;
}
