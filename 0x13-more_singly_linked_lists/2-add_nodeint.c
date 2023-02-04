#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node at the beginning of a list
 * @head: pointer to head
 * @n: element to be added to new node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

