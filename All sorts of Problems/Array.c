#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int i,j,k,a[100],n,temp,inde,data,w;

void print(){

    printf("\nPlease enter the array limit again. thanks.\nEnter -> ");
    scanf("%d", &n);

    printf("\nHere are the data in the array with index--\n\n");
    for(i=0;i<n;i++){
        printf("a[%d] = %d\n",i,a[i]);
    }
    return;

}

void AS(int n){
    printf("\n\nAscending order sort:-\n\n");

      temp = 0;
     for(i=0;i<n;i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
     }

     print();
   return;
}

void DS(int n){
    printf("Descending order sort\n\n");

      temp = 0;
     for(i=0;i<n;i++){
        for(j=i+1; j<n; j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
     }

     print();
   return;
}


void BAS(int n){
 printf("Ascending Bubble Sort\n\n");

    temp = 0;
     for(i=0;i<n-1;i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
     }


     print();
   return;
}

void BDS(int n){
 printf("Descending Bubble Sort\n\n");

    temp = 0;
     for(i=0;i<n-1;i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]<a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
     }


     print();
   return;
}


void linear(int n){
      printf("Linear Search: \n\n");
      int n1;
      printf("\nEnter the number to search: ");
      scanf("%d", &n1);

      for(i=0;i<n;i++){
        if(a[i]==n1){
            printf("\nNumber is found within %d searches.\n",i+1);
            break;
        }
      }

     printf("Complexity for this linear search is O(%d).\n\n",n);
}

void binary(int n){
     int n3;
     printf("Binary Search: \n\n");

     printf("Lets sort them in the ascending order first.\n");
     printf("\nPlease enter the array limit again. thanks.\nEnter -> ");
     scanf("%d", &n3);
     AS(n3);
     print();

     int n1,first,last,middle;
     printf("Enter the number to search: ");
     scanf("%d", &n1);


     first = 0;
     last = n - 1;
     middle = (first+last)/2;

     i =1;
     while (first <= last) {
           if (a[middle] < n1) first = middle + 1;

           else if (a[middle] == n1) {
                printf("%d found at location %d by %d binary searches.\n", n1, middle+1,i);
                break;
              }

           else  last = middle - 1;

     middle = (first + last)/2;
     i++;
   }

    if (first > last)
          printf("Not found! %d isn't present in the list.\n", n1);


    printf("Complexity for this binary search ber kora dekhbo\n\n");
    return;

}


void insert1(int n){

    printf("Insertion for one data\n\n");

    printf("\nEnter the Index: ");
    scanf("%d", &inde);

    printf("\nEnter New Data: ");
    scanf("%d", &data);

    for(i = n-1; i>=inde; i--)
    {
        a[i+1] = a[i];
    }
    a[inde] = data;

    for(i=0; i< n+1; i++)
   {
       printf("a[%d] = %d\n",i ,a[i]);
   }
   printf("\n");

    return;
}

void insert2(int n){

    int data1,data2;
    printf("Insertion of two or more data serially\n\n");

    printf("\nEnter the Index: ");
    scanf("%d", &inde);

    printf("\nEnter New Data(1): ");
    scanf("%d", &data1);

    printf("\nEnter New Data(2): ");
    scanf("%d", &data2);

    for(i = n-1; i>=inde; i--)
    {
        a[i+2] = a[i];
    }
    a[inde] = data1;
    a[inde+1] = data2;

   printf("\n");

   for(i=0; i< n+2; i++)
   {
       printf("a[%d] = %d\n",i, a[i]);
   }
   printf("\n");
   return;
}

void insert3(int n){

    printf("\nInserting two or more elements in a array in a continuous index\n\n");
    int data[10],m;

    printf("\nEnter the Index: ");
    scanf("%d", &inde);

    printf("Enter how many data you want to add here: ");
    scanf("%d", &m);

    for(i=0;i<m;i++)
    {
    printf("\nEnter New Data(%d): ",i+1);
    scanf("%d", &data[i]);
    }

    for(i = n-1; i>=inde; i--)
    {
        a[i+m] = a[i];
    }

    for(i=0; i<m; i++){
    a[inde] = data[i];
    inde++;
    }

    printf("\n");
     for(i=0; i< n+m; i++)
   {
       printf("a[%d] = %d\n",i ,a[i]);
   }
   printf("\n");

    return;
}

void insert4(int n){

    printf("Inserting two data into two different index.\n");
    printf("For three I can justly follow this procedure keeping in my mind about i=n part.\n\n");


    int index1,index2,data1,data2;

    printf("\nEnter the Index(1): ");
    scanf("%d", &index1);

    printf("\nEnter New Data(1): ");
    scanf("%d", &data1);

    printf("\nEnter the Index(2): ");
    scanf("%d", &index2);

    printf("\nEnter New Data(2): ");
    scanf("%d", &data2);


    for(i = n-1; i>=index1; i--)
    {

            a[i+1] = a[i];

    }
    a[index1] = data1;

     for(i = n; i>=index2; i--)
    {
        a[i+1] = a[i];
    }
    a[index2] = data2;

   printf("\n");
   printf("So the new array is--\n");

   for(i=0; i< n+2; i++)
   {
       printf("a[%d] = %d\n", i,a[i]);
   }
   printf("\n");

 return;

}

void insert5(int n){

    printf("\nInserting three or more data into different index numbers.\n\n");

    int w,index[10],data[10],m,temp,position;

    printf("\nWork Time: ");
    scanf("%d", &w);

    for(i=0;i<w;i++)
    {
    printf("\nEnter the Index(%d): ",i+1);
    scanf("%d", &index[i]);

    printf("\nEnter New Data(%d): ",i+1);
    scanf("%d", &data[i]);
    }

    temp =0;
    for ( i= 0; i < (w - 1); i++)
   {
     position = i;

            for (j = i + 1; j < w; j++){
                  if (index[position] > index[j])
                        position = j;
             }
     if (position != i)
     {
      temp = index[i];
      index[i] = index[position];
      index[position] = temp;
       temp = data[i];
      data[i] = data[position];
      data[position] = temp;
    }
  }

   for(j=0;j<w;j++)
    {

    for(i = n-1; i>=index[j]; i--)
    {

        a[i+1] = a[i];

    }
     a[index[j]] = data[j];
     n++;
    }

   printf("\n");
   printf("So the new array is--\n");

   for(i=0; i< n; i++)
   {
       printf("a[%d] = %d\n",i,a[i]);
   }
   printf("\n");

 return;
}


void DEL1(int n){

    printf("\nDeletion of one data-->\n\n");

    printf("\nEnter the Index: ");
    scanf("%d", &inde);

    for(i = inde; i<=n-1; i++)
    {
        a[i] = a[i+1];
    }

    printf("The data in array after deletion-\n ");
    for(i=0; i< n-1; i++)
    {
       printf("a[%d] = %d\n", i,a[i]);
    }

    return;
}

void DEL2(int n){

    printf("Deletions of 'k' data serially.\n\n");

    printf("\nEnter the Index: ");
    scanf("%d", &inde);

    int k;
    printf("How many data you want  from given index: ");
    scanf("%d",&k);

    for(i = inde; i<=n-1; i++)
    {
        a[i] = a[i+k];
    }

    printf("The data in array after deletion-\n ");
    for(i=0; i< n-k; i++)
    {
       printf("%d ", a[i]);
    }

 return;

}

void DEL3(int n){
    int temp,index[10];
    printf("Deletion of data from various index numbers.\n\n");

      printf("\nWork Time: ");
    scanf("%d", &w);

    for(i=0; i<w; i++)
    {
    printf("\nEnter the Index(%d): " , i+1);
    scanf("%d", &index[i]);
    }

    for(i=0;i<w;i++){
        for(j=i+1;j<w;j++){
            if(index[i]>index[j]){
                temp = index[i];
                index[i] = index[j];
                index[j] = temp;
            }
        }
    }

 /* //2 style e krsi.
    int k;  j = 0;
    while(j<w){

     for(i = index[j]; i<=n; i++){


            a[i] = a[i+1];
       if(j+1!= w)  break;
    }
    j++;
  }

  k=0;
  for(i=index[0];i<n;i++){
        if(a[i]==a[i+1])  k=k+1;
        a[i] = a[i+k];
     }
*/

j = 0;
for(i=0;i<n;i++){
    if(index[j]==i){
      a[i] = 0;
      j++;
    }
}

for(i=0;i<n;i++){
    if(a[i]==0){
      for(j=i;j<n;j++){
           a[j] = a[j+1];
      }
    }
}

   printf("The data in array after deletion-\n ");
   for(i=0; i< n-w; i++)
   {
       printf("%d ", a[i]);
   }

 return;

}

void DEL4(int n){

    int index[10];

    printf("\nWork Time: ");
    scanf("%d", &w);

    for(i=0; i<w; i++)
    {
    printf("\nEnter the Index(%d): " , i+1);
    scanf("%d", &index[i]);
    }
int temp;
    for(i=0;i<w;i++){
        for(j=i+1;j<w;j++){
            if(index[i]<index[j]){
                temp = index[i];
                index[i] = index[j];
                index[j] = temp;
            }
        }
    }
 j = 0;
    while(j<w){

     for(i = index[j]; i<=n; i++){
              a[i] = a[i+1];
        }
    j++;
  }
   printf("The data in array after deletion-\n ");
   for(i=0; i< n-w; i++)
   {
       printf("%d ", a[i]);
   }

 return;





}

int main(){

      int choice,n2;

    printf("\nEnter the array limit: ");
    scanf("%d", &n2);

    printf("Enter numbers one by one %d times:\n",n2);
      for(i=0;i<n2;i++){
        scanf("%d", &a[i]);
     }

    while(1){

    printf("\n1.  Print All elements of array.\n");
    printf("2.     Ascending Order Sort\n");
    printf("3.     Descending order sort\n");
    printf("4.     Bubble Sort - Ascending\n");
    printf("5      Bubble Sort - Descending\n");
    printf("6.     Linear Search of an array.\n");
    printf("7.     Binary Search of an array.\n");
    printf("8.I-1: Insertion for one data.\n");
    printf("9.I-2: Insertion of two or more data serially\n");
    printf("10.I-3:Inserting two or more elements in a array in a continuous index\n");
    printf("11.I-4:Inserting two data into two different index.\n");
    printf("12.I-5:Inserting three or more data into different index numbers.\n");
    printf("13.D-1:Deletion of one data\n");
    printf("14.D-2:Deletions of 'k' data serially.\n");
    printf("15.D-3:Deletion of data from various index numbers.\n");
    printf("0. Exit from the program.\n\n\n");

    scanf("%d", &choice);

    switch(choice){

    case 1:
        system("CLS");
        print();
        AS(n2);
        break;
    case 2:
        system("CLS");
        print();
        AS(n2);
        break;
    case 3:
        system("CLS");
        print();
        DS(n2);
        break;
    case 4:
        system("CLS");
        print();
        BAS(n2);
        break;
    case 5:
        system("CLS");
        print();
        BDS(n2);
        break;
    case 6:
        system("CLS");
        print();
        linear(n2);
        break;
    case 7:
        system("CLS");
        print();
        binary(n2);
        break;
    case 8:
        system("CLS");
        print();
        insert1(n2);
        break;
    case 9:
        system("CLS");
        print();
        insert2(n2);
        break;
    case 10:
        system("CLS");
        print();
        insert3(n2);
        break;
    case 11:
        system("CLS");
        print();
        insert4(n2);
        break;
    case 12:
        system("CLS");
        print();
        insert5(n2);
        break;
    case 13:
        system("CLS");
        print();
        DEL1(n2);
        break;
    case 14:
        system("CLS");
        print();
        DEL2(n2);
        break;
    case 15:
        system("CLS");
        print();
        //DEL3() FUNCTION TAO SAME KAAAJ KORE.
        DEL4(n2);
        break;
    case 0:
        printf("\nexit.........\n");
        Sleep(2000);
        return 0;
        break;
    default:
        printf("\nArreh buka, chose from 0 to 15 please.\n\n");
        break;
     }
  }
      printf("\n\n\tALL ABOUT ARRAY\n\n");
      return 0;
}



