#include <stdio.h>
#include <string.h>

int main() {
char sign[50], user1[50], user11[50], recover[50];
char pass1[50], pass11[50];
int wrong1, wrong11;

printf("Type:\n\"Sign up\"\n");


printf("");
fgets(sign, sizeof(sign), stdin);
sign[strcspn(sign, "\n")] = 0;

if (strcmp(sign, "sign up") == 0 || strcmp(sign, "Sign up") == 0) {
printf("\nSet Your Username: ");
fgets(user1, sizeof(user1), stdin);
user1[strcspn(user1, "\n")] = 0;

printf("Set Your Password: ");
fgets(pass1, sizeof(pass1), stdin);
pass1[strcspn(pass1, "\n")] = 0;

printf("\n Sign Up Succesful! Try to Sign in\n");
}
else { 
  printf("BOBO KA BA?");
  return 1;
}

  printf("Enter Your Username: ");
  fgets(user11, sizeof(user11), stdin);
  user11[strcspn(user11, "\n")] = 0;

printf("Enter Your Password: ");
  fgets(pass11, sizeof(pass11), stdin);
  pass11[strcspn(pass11, "\n")] = 0;

 wrong1 = strcmp(user1, user11);
 wrong11 = strcmp(pass1, pass11);

  if (wrong1 == 0 && wrong11 == 0) {
printf("\nLogin Successful");
}
else if (wrong1 != 0 && wrong11 == 0) {
  printf("\nPlease Correct The \"Username\" Or The \"Password\" Will Not Work");
}
else if (wrong1 == 0 && wrong11 != 0) {
  printf("\nPlease Correct The \"PASSWORD\", By \"USERNAME: %s\"", user11);
}
else if (wrong1 != 0 && wrong11 != 0) {
printf("\nPlease Input The Correct: \"USERNAME\" and \"PASSWORD\"");
} 
else {
  printf("\nEwan ko sayo");
}
return 0;
}