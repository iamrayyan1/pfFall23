#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) 
{
    char temp;
    while (start < end) 
	{
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *sentence) 
{
    char *wordStart = sentence;
    char *wordEnd = sentence;

    while (*wordEnd) 
	{
        while (*wordEnd && *wordEnd != ' ') 
		{
            wordEnd++;
        }

        reverseWord(wordStart, wordEnd - 1);

        if (*wordEnd) 
		{
            wordStart = ++wordEnd;
        }
    }
}

int main() 
{
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    size_t len = strlen(sentence);
    if (sentence[len - 1] == '\n') 
	{
        sentence[len - 1] = '\0';
    }

    reverseWords(sentence);
    printf("Modified sentence: %s\n", sentence);

    return 0;
}
