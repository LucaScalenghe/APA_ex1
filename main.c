#include <stdio.h>
#include <stdlib.h>
void buildAndPrint( int *V,int N,int **M,int r,int c);
int main() {
    int** M;
    int V[14]={2,1,2,17,1,3,4,10,1,6,3,7,2,5};
    int N=14;
    int r=0,c=0;
    int i=0;


    printf("Inserisci la dimensione della matrice: righe colonne");
    scanf("%d %d",&r,&c);

    //allocazione dinamica della matrice
    M=malloc(r*sizeof(int*));
    for(i=0;i<r;i++){
        M[i]=malloc(c* sizeof(int));
    }


buildAndPrint(V,N,M,r,c);


    return 0;
}

void buildAndPrint(int* V,int N,int **M,int r,int c){
    int *Q;
    int i=0,j=0,y=0,lastpos=0;

    Q=malloc((r*c)*sizeof(int));

    //scansione del vettore V e inserimento in Q
    for(i=0;i<N-1;i=i+2){
        for(j=lastpos;j<lastpos+V[i];j++){
            Q[j]=V[i+1];
        }
        lastpos=j;
    }

    //inserimento con row-major
    y=0;
    for(i=0;i<r;i++){
        for(j=y%c;j<c && y<r*c;j++){
            M[i][j]=Q[y];
            y++;
        }
    }

    //stampa
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }

    free(Q);

}