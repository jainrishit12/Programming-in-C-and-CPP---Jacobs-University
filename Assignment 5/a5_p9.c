#include<stdio.h>
#include<stdlib.h>
void read(int row,int col,int dep,int ***arr);
void print(int row,int col,int dep,int ***arr);

//function to read the elements of the matrix
void read(int row,int col,int dep,int ***arr){  
    int c;
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            for(int k=0; k<dep; k++){
                scanf("%d", &c);
                arr[k][i][j]=c;
            }
        }
    }
    return;
}

//function to print as 2D matrix
void print(int row,int col,int dep,int ***arr){
    for(int k=0;k<dep;k++){
        printf("Section %d:\n",k+1);
        for(int i=0; i<row; ++i){
            for(int j=0; j<col; ++j){
                printf("%d ", arr[k][i][j]);
            }
            printf("\n");
        }
    }
}

int main(){
    int row,col,dep;
    scanf("%d\n", &row);
    scanf("%d\n", &col);
    scanf("%d\n", &dep);
    int i,j;
    //allocating memory
    int **arr=(int*)malloc(sizeof(int*)*dep); 
    for(i=0;i<dep;i++){
        arr[i]=(int*)malloc(sizeof(int)*col);
        for(j=0;j<col;j++){
            arr[i][j]=(int*)malloc(sizeof(int)*row);
        }
    }
    read(row,col,dep,arr);
    print(row,col,dep,arr);
    //releasing the allocated memory
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            free(arr[i][j]);
        }
        free(arr[i]);
    }
    free(arr);
    return 0;
}