#include <stdio.h>
#include "main.h"

char *isIntEqual(num1, num2){
  if (num1 == num2)
	return "true";
  else
	return "false";
}

void test_add_1_plus_2_expect_answer_correct(void){
  printf("%s", isIntEqual);
}

int test(void){
  test_add_1_plus_2_expect_answer_correct();

}