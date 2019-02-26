/*
JTSK-320112
Problem a1.p4.c
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

Write a program which computes the scalar product
of two n-dimensional integer vectors and uses conditional compilation
for showing/not showing intermediate results (products of the corresponding components)

Your program should read from the standard input
the dimension of the vector along with the components of two integer vectors

If the directive INTERMEDIATE is defined
The output consists of
the intermediate results
and
the value of the scalar product of the two vector

If INTERMEDIATE is not defined then the output consists of
only the scalar product of the two vectors
*/

#include <stdio.h>

//Definition of INTERMEDIATE which can be turned off and on
#define INTERMEDIATE (1)
//#undef INTERMEDIATE

int main() {
  //instantiate all of my variables
  //nDimension being the dimension of the vectors
  //numInput will be the inputs given by the user

    //and then later holds the scalar product
  int nDimension, numInput, nholder = 0, holder = 0;


  //Your program should read from the standard input the dimension of the vector
  scanf("%d", &nDimension);
  //instantiates to vectors of size nDimension
  int vec1[nDimension];
  int vec2[nDimension];
  //nholder holds the value of the nDimension*2
  nholder = nDimension*2;

  //Your program should read from the standard input the components of the vector1
  while(nholder != nDimension){
    scanf("%d", &numInput);
    //holder holds the value of the location in the vectors
    vec1[holder] = numInput;
    holder++;
    nholder--;
  }

  //reset the value of holder to restart in the next vectors at location 0
  holder = 0;

  //Your program should read from the standard input the components of the vector2
  while(nholder != 0){
    scanf("%d", &numInput);
    //holder holds the value of the location in the vectors
    vec2[holder] = numInput;
    holder++;
    nholder--;
  }

  //If INTERMEDIATE is defined then print the intermediate results
  #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    //for loop that loops through the size of both vectors
    for(int k = 0; k < sizeof(vec1)/sizeof(int); k++){
      //prints the intermediate results of each component of the vectors
      printf("%d\n", vec1[k]*vec2[k]);
    }
  #endif

  //reset the value of holder to allow us to use it to hold the scalar product
  holder = 0;
  //loop through the vectors and add the scalar products together
  for(int k = 0; k < sizeof(vec1)/sizeof(int); k++){
    holder += vec1[k]*vec2[k];
  }

  //If INTERMEDIATE is not defined then only the scalar product of the two
  //vectors should be printed on the standard output.
  printf("The scalar product is: %d\n", holder);

}
