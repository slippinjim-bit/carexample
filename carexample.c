#include <stdio.h>
#include <assert.h>

typedef struct Car_t Car;
struct Car_t{
  char * name;
  int mpg;
  int numberSeats;
  Car * nextcar;
};

Car * availableCar;
static int indexAvailableCar;
static Car cars[10];



int main(void) {
  indexAvailableCar = 0;
  availableCar = &cars[indexAvailableCar];

  printf("address of availablecar: %p \n",availableCar);
  printf("address of availablecar: %p \n",&cars[indexAvailableCar]);
  printf("address of availablecar: %p \n",cars[indexAvailableCar].nextcar);
  assert(cars[0].nextcar == NULL);

  //try assigning nextcar to itself
  cars[0].nextcar = &cars[0];
  printf("address of availablecar: %p \n",cars[indexAvailableCar].nextcar);
  
  assert(cars[0].nextcar == NULL); //fails

  return 0;
}