/*
# we wil get input from user how many value we need to insert from user..
# then according to that we will create two array for index and value...
# for example: we have an array 1 2 3 4 5 6 7 8 9 10
  and we want to insert 4 value in 4 new index such as input 100 in index 0, 200 in index 2, 300 in index 4 ,400 in index 6...
# then the output will show 100 1 200 2 300 3 400 4 5 6 7 8 9 10
*/

#include <stdio.h>

int main(){
    int arr[50],n;

    printf("Enter the amount of element you want to insert : \n");
    scanf("%d",&n);

    for (int i=0; i<n ;i++){
        scanf("%d",&arr[i]);
    }

     for (int i=0; i<n ;i++){
        printf("%d\t",arr[i]);
    }

    int k;
    printf("\nEnter the amount of value you want to insert : \n");
    scanf("%d",&k);

    int index[k],value[k];

    for (int i=0; i<k ;i++){
        printf("Enter value %d :\n",i+1);
        scanf("%d",&value[i]);

        printf("Enter index :\n");
        scanf("%d",&index[i]);

    }

    int d=0,i;

    for (int j=0; j<k ; j++){

        for (i=n-1 ; i>=index[d] ; i--){
            arr[i+1] = arr[i];
        }
        int x = index[d];
        arr[x] = value[d];
        n++;
        d++;

    if(i >= index[d] ){
    for ( i=n-1 ; i>=index[d] ; i--){
            arr[i+1] = arr[i];
        }
        int y = index[d];
        arr[y] = value[d];

        d++;
        n++;

    }
    }
    printf("After Enter all the Value & index : \n");

    for (int i=0; i<n ; i++){
        printf("%d\t",arr[i]);
    }



    return 0;
}
