/*
CH08-320201
Problem a3.p1.a
Jonathan Rittmayer
jo.rittmayer@jacobs-university.de

a) Implement all four methods to compute Fibonacci numbers that were discussed
in the lecture:

(1) naive recursive
(2) bottom up
(3) closed form
(4) using the matrix

representation.

*/

//function for Naive Recursive Fib computation
long int naivRecursive(long int val);

//function for bottomUp Fib computation
long int bottomUp(long int val);

//function for closedForm Fib computation
long int closedForm(long int val);

//function for multiplying Fib nums
void multiply(long int Fib[2][2], long int Mult[2][2]);

//function for returning nth Fibonacci term
public long int matFibbo(long int val);

//function for matrix method
void matPower(long int Fib[2][2], long int val);

public class Main{
    long int val;
    double timemax = 1200; //ms, limit
    for(val = 0; val <= 150; val++)
    // Record start time
    auto start = chrono::high_resolution_clock::now();
    // Portion of code to be timed

    //ALGORITHMS TO TEST
    //matFibbo(val);
    //closedForm(val);
    //naivRecursive(val);
    bottomUp(val);

    //RECORD END TIME
    auto finish = chrono::high_resolution_clock::now();
    //DURATION Objective
    auto diff = finish - start;
    //print in nanoseconds
    cout << chrono::duration <double, nano> (diff).count()<< endl;
    if((chrono::duration <double, nano> (diff).count()) >= timemax )
      {
       cout << "TOTAL:" << val;
       break;
      }
    return 1;

}

//function for matrix method
void matPower(long int Fib[2][2], long int val){
  if(val == 0 || val == 1)
      return;
  long int Mult[2][2] = {{1,1},{1,0}};
  power(Fib, val / 2);
  multiply(Fib, Fib);
  if(val % 2 != 0)
      multiply(Fib, Mult);
}

//function for returning nth Fibonacci term
public long int matFibbo(long int val){
  long int Fib[2][2] = {{1,1},{1,0}};
  if(val == 0)
    return 0;
  power(Fib, val-1);
  return Fib[0][0];
}

//function for Naive Recursive Fib computation
long int naivRecursive(long int val){
  if(val==0 || val ==1){
    return val;
  }
  return (naiverec (val - 1) + naiverec(val - 2));
}

//function for bottomUp Fib computation
long int bottomUp(long int val){
  if(val == 1 || val == 0){
    return val;
  }
  long int twoBehind = 0;
  long int oneBehind = 1;
  long int fib = 0;

  for(int k = 1; k < val; k++){
      fib = twoBehind + oneBehind;
      twoBehind = oneBehind;
      oneBehind = fib;
  }
  return fib;
}

//function for closedForm Fib computation
long int closedForm(long int val){
  double sqrt5 = sqrt((double)5);
  return (pow((1+sqrt5)/2,val)-pow((1-sqrt5)/2,val))/sqrt5;
}

//function for multiplying Fib nums
void multiply(long int Fib[2][2], long int Mult[2][2]){
  long int a =  Fib[0][0] * Mult[0][0] + Fib[0][1] * Mult[1][0];
  long int b =  Fib[0][0] * Mult[0][1] + Fib[0][1] * Mult[1][1];
  long int c =  Fib[1][0] * Mult[0][0] + Fib[1][1] * Mult[1][0];
  long int d =  Fib[1][0] * Mult[0][1] + Fib[1][1] * Mult[1][1];
  Fib[0][0] = a;
  Fib[0][1] = b;
  Fib[1][0] = c;
  Fib[1][1] = d;
}