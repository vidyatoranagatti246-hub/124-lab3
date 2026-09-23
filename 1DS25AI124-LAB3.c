#include <stdio.h>

int main() {
    int a[][3]={
        1,2,3,
        4,5,6,
        7,8,9
    };
    int m=3;
    int n=3;
    int key=5;
    LinearSearch(a,m,n,key);
    sum(a,m,n);
    MinMax(a,m,n);
    prim(a,m,n);
    sec(a,m,n);
    upper(a,m,n);
    lower(a,m,n);
    sum_row(a,m,n);
    sum_col(a,m,n);
	

}

void LinearSearch(int a[][3],int m,int n,int key){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(key==a[i][j]){
                printf("key found at index %d %d\n",i,j);
            }
        }
    }
    return ;
    
}

void sum(int a[][3],int m,int n){
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
    }
    printf("sum of all elements is %d \n",sum);
    
    
}

void MinMax(int a[][3],int m,int n){
    int min=a[0][0];
    int max=a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (min>a[i][j]){
                min=a[i][j];
            }
            if (max<a[i][j]){
                max=a[i][j];
                
            }
        }
    }
    printf(" min and max is %d ,%d\n",min,max);
}

void prim(int a[][3],int m,int n){
    int sum_prim=0;
    for(int i=0; i<m; i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum_prim+=a[i][j];
            }
            
            
        }
    }
    printf("all prim diagonal elements sum is %d\n", sum_prim);
    
    
    
}

void sec(int a[][3],int m,int n){
    int sum_sec=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if((i+j)==n-1){
                sum_sec+=a[i][j];
            }
            
            
        }
    }
    printf("all sec diagonal elements sum is %d\n", sum_sec);
    
    
    
}

void upper(int a[][3],int m,int n){
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                printf("upper triangular elements is %d\n ",a[i][j]);
            }
            
        }
    }
    

    
}

void lower(int a[][3],int m,int n){
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
                printf(" lower triangular elements is %d\n ",a[i][j]);
            
            }
            
        }
    }
    

    
}

void sum_row(int a[][3],int m,int n){
   
    for(int i=0;i<m;i++){
        int sum_row=0;
        for(int j=0;j<n;j++){
            sum_row+=a[i][j];
           
            
        }
        printf("sum of row %d elements is %d\n", i,sum_row);
    }
    
}

void sum_col(int a[][3],int m,int n){
    
    for(int j=0;j<n;j++){
        int sum_col=0;
        for(int i=0;i<m;i++){
            sum_col+=a[i][j];

            
        }
        printf("sum of col %d elements is %d\n", j,sum_col);
    }
    
}
//part a=>plusminus -hackerrank problem
void plusMinus(int arr_count, int* arr) {
    int pos=0;
    int neg=0;
    int zero=0;
    for(int i=0;i<arr_count;i++){
        if(arr[i]>0){
            pos++;
            
        }
        else if(arr[i]<0){
            neg++;
        }
        else{
            zero++;
        }
    }
    printf("%f\n",pos*1.0/arr_count);
    printf("%f\n",neg*1.0/arr_count);
    printf("%f\n",zero*1.0/arr_count);
}

//part-b=>minimax problem-hacker rank
void miniMaxSum(int arr_count, int* arr) {
    long sum=0;
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<arr_count;i++){
        sum+=arr[i];
        if(min>=arr[i]){
            min=arr[i];
        }
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    printf("%ld %ld",sum-max,sum-min); 

}

//diagonal difference-hacker rank problem
int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum_left=0;
    int sum_right=0;
    for(int i=0;i<arr_rows;i++){
        
        for(int j=0;j<arr_columns;j++){
            if(i==j){
                sum_left+=arr[i][j];
            }
            if((i+j)==arr_rows-1){
                sum_right+=arr[i][j];
            }
        }
    }
    if(sum_left>=sum_right){
        return sum_left-sum_right;
    }
    else{
        return sum_right-sum_left;
    }

}