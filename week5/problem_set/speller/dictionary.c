// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

int strcasecmp_custom(const char *s1, const char *s2);

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Get the hash value for the word
    unsigned int hash_value = hash(word);

    // Traverse the linked list at the hash value
    for (node *ptr = table[hash_value]; ptr != NULL; ptr = ptr->next)
    {
        // Compare the word with the current node's word using strcasecmp
        if (strcasecmp_custom(word, ptr->word) == 0)
        {
            return true; // Word found in dictionary
        }
    }

    return false; // Word not found in dictionary
}
// Hashes word to a number
unsigned int hash(const char *word)
{
    // Simple hash function that returns the index of the first letter of the word
    // Mapping 'A' to 0, 'B' to 1, ..., 'Z' to 25
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open dictionary file
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false; // Unable to open dictionary file
    }

    // Initialize hash table
    for (int i = 0; i < N; i++)
    {
        table[i] = NULL;
    }

    // Buffer to store each word read from dictionary
    char word[LENGTH + 1];

    // Read words from dictionary and add them to hash table
    while (fscanf(file, "%s", word) != EOF)
    {
        // Create a new node for the word
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            fclose(file);
            return false; // Unable to allocate memory
        }

        // Copy the word into the node
        strcpy(new_node->word, word);
        new_node->next = NULL;

        // Get the hash value for the word
        unsigned int hash_value = hash(word);

        // Insert the node at the beginning of the linked list
        new_node->next = table[hash_value];
        table[hash_value] = new_node;
    }

    fclose(file);
    return true; // Dictionary loaded successfully
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    unsigned int word_count = 0;

    // Traverse each bucket in the hash table
    for (int i = 0; i < N; i++)
    {
        // Traverse the linked list at the bucket
        for (node *ptr = table[i]; ptr != NULL; ptr = ptr->next)
        {
            word_count++;
        }
    }

    return word_count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // Traverse each bucket in the hash table
    for (int i = 0; i < N; i++)
    {
        // Traverse the linked list at the bucket
        while (table[i] != NULL)
        {
            // Keep track of the next node
            node *next_node = table[i]->next;

            // Free the current node
            free(table[i]);

            // Move to the next node
            table[i] = next_node;
        }
    }

    return true; // Dictionary unloaded successfully
}

int strcasecmp_custom(const char *s1, const char *s2)
{
    while (*s1 && *s2)
    {
        // 将字符转为小写后比较
        int diff = tolower(*s1) - tolower(*s2);

        if (diff != 0)
        {
            return diff;
        }

        s1++;
        s2++;
    }

    return tolower(*s1) - tolower(*s2);
}