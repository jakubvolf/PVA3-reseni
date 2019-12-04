/*
  Write a "task03" program for basic adding. It should handle -f, -i and -v parameters
  task03 -f data.txt // outputs sum of numbers in data.txt
  task03 -i // interactive mode: sums numbers from standard input until empty input provided
  task03 4 7 12 // outputs sum of any number of arguments (23 in this case)
  implement verbose mode -v, which outputs additional info about arguments, i.e.
    task03 -f data.txt -v // should print "sum of numbers in data.txt is 13"
    task03 -v -f data.txt // same result
    task03 -v -i // should print like "sum of 7 numbers from standard input is 38"
    task03 2 2 13 6 -v // should print "sum of 4 arguments is 23"
    task03 -v 13 4 // should print "sum of 2 arguments is 17"
*/

#include<string.h>
#include<stdio.h>

int suma;
bool vHere = false;
bool fHere = false;
bool iHere = false;



int cisla(int argc, char* argv[]){
  int cislo;
  for(int i=1; i<argc; i++) {
    if(strcmp(argv[i],"-v") !=0){
      sscanf(argv[i], "%d", &cislo);
      suma+=cislo;
    }
  
  }
  return suma;
  
}

int main(int argc, char* argv[]) {
  for(int i=1; i<argc;i++){
    if(strcmp(argv[i],"-v") == 0){
      vHere = true;
      break;
    }
  }
  for(int i=1; i<argc;i++){
    if(strcmp(argv[i],"-i") == 0){
      iHere = true;
      break;
    }
  }
  for(int i=1; i<argc;i++){
    if(strcmp(argv[i],"-f") == 0){
      fHere = true;
      break;
    }
  }
  if(fHere){
  
  }
  else if(iHere){
  
  }
  else{
    if(vHere){
      printf("sum of %d arguments is %d",argc - 2, cisla(argc,argv));
    }
    else{
      printf("%d",cisla(argc,argv));
    }
  }
  
  
}
