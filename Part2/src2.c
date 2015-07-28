#include <stdio.h>

int main(void)
{
  printf("First off, this part is about how the Raspberry Pi boots.\n");
  stage1_of_boot();
  endSoFar();
}

int stage1_of_boot(void)
{
  printf("The Pi cannot boot from the SD card yet, because the CPU\n");
  printf("hasn't been started yet.\n");
  printf("The Pi uses the GPU to start up the CPU using the firmware's\n");
  printf("routines described in it's code to boot.\n");
}

int endSoFar(void)
{
  printf("Until I know a bit better about the RPi firmware\n");
  printf("The documentation will have to end here.\n");
}
