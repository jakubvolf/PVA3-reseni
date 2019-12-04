#include <cstdio>
#include <string.h>
char result[64];


const char* toUpper(const char* input) {
	  int counter = 0;
	  while (*input != '\0') {
	   if(*input > 96 && *input < 123){ // Find if letter is uppercase or not
		    result[counter] = *input - 32; // transfer to uppercase
		}
		else{
      result[counter] = *input; // letter is already uppercase
    }
		counter++;
		input++;
	}
	return result;
}

int main() {
	const char* input = "Hello, World!";
	puts(toUpper(input)); // should print HELLO, WORLD!

}
