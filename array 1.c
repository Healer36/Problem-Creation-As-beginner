/*
insert two integer value in 2 new index in array
*/

#include <stdio.h>

int main(){
    int arr[15];
    int n;
    printf("Eenter total number of element you want to insert : \n");



    scanf("%d",&n);

    int value1,value2,newindex,newindex2;


    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){

        printf("%d\t",arr[i]);
    }


    printf("\nEnter the 1st value that you want to insert : \n");
    scanf("%d",&value1);

    printf("Enter the index that you want to insert for value 1 : \n");
    scanf("%d",&newindex);

    printf("Enter the 2nd value that you want to insert : \n");
    scanf("%d",&value2);



    printf("Enter the index that you want to insert for value 2 : \n");
    scanf("%d",&newindex2);


if (newindex2>newindex){
    for (int i=n-1; i>=newindex ; i--){
        //arr[i+2] = arr[i+1] = arr[i];


        arr[i+1] = arr[i];

    }
    arr[newindex] = value1;

    for (int i=n; i>=newindex2 ; i--){
        //arr[i+2] = arr[i+1] = arr[i];
        arr[i+1] = arr[i];

    }

    arr[newindex2] = value2;
}

else {
            for (int i=n-1; i>=newindex2 ; i--){
        //arr[i+2] = arr[i+1] = arr[i];


        arr[i+1] = arr[i];

    }
    arr[newindex2] = value2;

    for (int i=n; i>=newindex ; i--){
        //arr[i+2] = arr[i+1] = arr[i];
        arr[i+1] = arr[i];

    }

    arr[newindex] = value1;

}


    printf("After Entering new value : \n");

     for(int i=0;i<n+2;i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}
