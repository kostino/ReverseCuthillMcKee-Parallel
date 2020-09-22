#ifndef QUEUEH
#define QUEUEH

typedef struct {
	int* buf;
	int max_size;
	long head, tail;
	int full, empty;
} queue;

queue *queueInit(int n);
void queueDelete (queue *q);
void queueAdd (queue *q, int in);
void queueDel (queue *q, int *out);

#endif //QUEUEH
