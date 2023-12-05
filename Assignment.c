#include<stdio.h>
void main()
{
    //Task 1: print 2 matrices

    int a[3][3], b[3][3];
    printf("Entry of elements are Row wise\n");
    printf("Enter 1st matrix\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter 2nd matrix\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //Task 2: addition of two matrices
    printf("Addition of both matrices\n");
    int sum;
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            sum = (a[i][j] + b[i][j]);
            printf("%d ",sum);
        }
        printf("\n");
    }

    //Task 3: cofactors of matrices
    for(int i=0; i<3; i++){ //To go to all the elements
      for(int j=0; j<3; j++){
        for(int k=0; k<3; k++){//To eliminate rows and columns in which the element is present
            for(l=0; l<3; l++){
                if(i==k || j==l) continue;
                for(int m=0; m<3; m++){
                 for(int n=0; n<3; n++){
                if(m==k || n==l) continue;
                else
                c[i][j]= a[k][l]*a[m][n];
                for(int p=0;p<3;p++){
                    for(int q=0;q<3;q++){
                        if(p==m || n==q) continue;
                        else 
                        c[i][j]= c[i][j]-a[p][q]*
                    }
                }

            }
            }
        }
      }  
    }

}