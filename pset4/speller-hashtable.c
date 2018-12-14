// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "dictionary.h"

// Represents number of buckets in a hash table
#define N 12001
int i ;
// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Represents a hash table
node *hashtable[N];

// Hashes word 
int hash(const char *word)   
{                                          
int j= 0;
int sum = 0;
while(word[j] != '\0')
{
   if(isupper(word[j]))
 sum += (3 * (j + 1) * (j + 1) * (tolower(word[j])));
   else
      sum += (3 * (j + 1) * (j + 1) * (word[j]));
    j++;
}
if(sum > N)           //TABLESIZE = 12001;
    sum = sum % N;
return sum;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Initialize hash table
    for (int k= 0;k< N; k++)
    {
        hashtable[k]= NULL;
    }

    // Open dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        unload();
        return false;
    }

    // Buffer for a word
    char word[LENGTH + 1];

    // Insert words into hash table
    while (fscanf(file, "%s", word) != EOF)
    {
        // TODO
        int index = hash(word);
        node *word1 = malloc(sizeof(node));
        strcpy(word1->word,word);
        word1->next = hashtable[index];
        hashtable[index] = word1;
        i++;

    }

    // Close dictionary
    fclose(file);

    // Indicate success
    if (i > 0 )
    return true;
    else
    return false;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    if (i > 0)
    return i;
    else
    return 0;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    int l = strlen(word);
    int index = hash(word);
    node *word1 = hashtable[index];
    while(word1 != NULL)
    {
        if(l == strlen(word1->word))


    {

        char wordk[l+1],words[l+1];
        int j = 0;
        while(j < l )
        {
            wordk[j] = tolower(word[j]);
            words[j] = tolower((word1->word)[j]);
            j++;
        }
        wordk[j] = '\0';
        words[j] = '\0';
       if(strcmp(wordk,words)== 0)
       return true;

}

    word1 = word1->next;
    }
    return false;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    int j =0, k = 0;
    while(k < N)
    {
    node *ptr = hashtable[k];
    while(ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
        j++;

    }
    k++;
    }
    if(j == i)
    return true;
    else
    return false;
}

