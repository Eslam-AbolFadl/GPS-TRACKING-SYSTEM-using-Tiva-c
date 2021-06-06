#include "math.h"
#include "Define.h" // reallocate the path for Define. if necessary

void SystemInit(){}

 


#define RED 0x02
#define BLUE 0x04
#define GREEN 0x08
	
	void delay(void){
  unsigned long volatile time;
  time = 145448;  // 0.1sec
  while(time){
 		time--;
  }
}
 