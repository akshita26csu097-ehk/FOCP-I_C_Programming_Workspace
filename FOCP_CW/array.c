// A fixed size collection of elements of the same data type.
// data_type array_name/indentifier[No of elements]
//Eg : int marks[5]
// First element - [0] 
//Last element - [size - 1]

int a[5];  //Declaration - int a[5] reserves space for 5 ints
int b[5]; //Full initialisation - Every listed value fills the corrosponding index
int c[] = {2,4,6} // Sive inference - c[] gets its size from the initializer 

// for printing 
int a[4] = {5,8,2,9};
 printf("%d", a[2]); //a[2] reads 2
 a[1] = 100;  //changes element 

 //The standard array loop 
 for (int i = 0; i<5; i++){
    printf("%d", a[i]);
}
//initialise index > test boundary > process a[i] > increment 