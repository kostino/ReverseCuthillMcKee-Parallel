#include "queue.h"
#include <stdlib.h>

queue *queueInit (int n)
{
	queue *q;

	q = malloc (sizeof (queue));
	if (q == NULL) return (NULL);

	q->empty = 1;
	q->full = 0;
	q->head = 0;
	q->tail = 0;
	q->max_size = n;
	q->buf = malloc(n*sizeof(int));
	if (q->buf == NULL) return (NULL);

	return (q);
}

void queueDelete (queue *q)
{
	free(q->buf);
	free(q);
}

void queueAdd (queue *q, int in)
{
	q->buf[q->tail] = in;
	q->tail++;
	if (q->tail == q->max_size)
		q->tail = 0;
	if (q->tail == q->head)
		q->full = 1;
	q->empty = 0;
	return;
}

void queueDel (queue *q,int *out)
{
	*out = q->buf[q->head];

	q->head++;
	if (q->head == q->max_size)
		q->head = 0;
	if (q->head == q->tail)
		q->empty = 1;
	q->full = 0;
	return;
}
