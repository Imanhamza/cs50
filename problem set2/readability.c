#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    // Promot to input the text
    string text = get_string("Input your text here: ");
    //function to calculate the number of the words
    float total_letters = count_letters(text);
    float total_words = count_words(text);
    float total_sentences = count_sentences(text);
    float L = (100 * total_letters) / total_words;
    float S = (100 * total_sentences) / total_words;
    int index =  round(0.0588 * L - 0.296 * S - 15.8);
    
    // conditions to print the grades
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 16 && index >= 1)
    {
        printf("Grade %i\n", index);
    }
}
// function to calculate letters
int count_letters(string text)
{
    int total_letters = 0;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            total_letters++;
        }
    }
    return total_letters;
}
// function to calculate words
int count_words(string text)
{
    int total_words = 1;
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isspace(text[i]))
        {
            total_words++;
        }
    }
    return total_words ;
}
// function to calculate sentences
int count_sentences(string text)
{
    int total_sentences = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            total_sentences++;
        }
    }
    return total_sentences ;
}
