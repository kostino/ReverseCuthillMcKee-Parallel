#include "queue.h"
#include <stdlib.h>

int* generateDegrees(int** matrix, int n){
    int* degrees = malloc(n*sizeof(int));
    int count=0;
    int i,j;
    if(degrees==NULL){
        printf("Could not allocate degrees matrix");
        return NULL;
    }
    for(i=0;i<n;i++){
        count = 0;
        for(j=0;j<n;j++){
            count+=matrix[i][j];
        }
        degrees[i]=count;
    }
    return degrees;
}




void rcm(int **matrix, int n){
    
    q = QueueInit(n);
    int* degrees = generateDegrees(matrix,n);
    int* R = malloc(n*sizeof(int));
    int* notVisited = malloc(n*sizeof(int));


    QueueDelete(q);
    free(degrees);
    return;
}
