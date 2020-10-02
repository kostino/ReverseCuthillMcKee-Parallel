CC = gcc
CFLAGS = -Xpreprocessor -fopenmp
LDFLAGS = -lomp

sequential: rcm_seq.c queue.o
	$(CC) $(CFLAGS) rcm_seq.c queue.o -o test_sequential $(LDFLAGS)

openmp: rcm_openmp.c queue.o
	$(CC) $(CFLAGS) rcm_openmp.c queue.o -o test_openmp $(LDFLAGS)

queue: queue.c
	$(CC) $(CFLAGS) -c queue.c $(LDFLAGS)

clean:
	rm test_* *.o
