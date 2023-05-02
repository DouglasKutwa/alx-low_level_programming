#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: A pointer to the address of the head of the listint_t list
 * @n: the integer for the new node to contain
 *
 * Return: If the function fails - NULL.
 * 	   Otherwise - the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
