/*This simply works by taking three user inputs grouped into one scanf() function. These are separated into valueOne, valueTwo, and the operator (choice of *,/,+,-,^).
A switch statement is then used in order to run the right calculation for the given operator. Mess around with the code and change bits here and there.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float valueOne;
  float valueTwo;
  char operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &valueOne, &operator, & valueTwo);

  switch(operator)
    {
    case '/': answer = valueOne/valueTwo;
      break;
    case '*': answer = valueOne*valueTwo;
      break;
    case '+': answer = valueOne+valueTwo;
      break;
    case '-': answer = valueOne-valueTwo;
      break;
    case '^': answer = pow(valueOne,valueTwo);
      break;
    case ' ': answer = sqrt(valueTwo);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
