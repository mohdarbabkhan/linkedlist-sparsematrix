#include<stdio.h>
#include<stdlib.h>

struct Node{
    int col;
    int data;
    struct Node *next;
};



void create(struct Node **p){
    for (int i = 0; i < 5; i++)
    {
        p[i] = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d %d",&p[i]->col,&p[i]->data);
        p[i]->next = NULL;
    }
};

void display(struct Node **d){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j==d[i]->col)
            {
                printf("%d ",d[i]->data);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    
}


int main(){  
    struct Node *A[5];
    struct Node *B[5];
    printf("Enter 1 mat:\n");
    create(A);
    printf("\n");
    printf("Enter 2 mat:\n");
    create(B);
    printf("\n1st mat:\n");
    display(A);
    printf("2mat: \n");
    display(B);
    
    return 0;
}