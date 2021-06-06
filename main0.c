#include "math.h"
#include "Define.h" // reallocate the path for Define. if necessary

void SystemInit(){}

 


#define RED 0x02
#define BLUE 0x04
#define GREEN 0x08
	
void init_F(void){
      uint32_t delay ;
      SYSCTL_RCGCGPIO_R |= 0x00000020 ;
      delay = 1;
		  GPIO_PORTF_LOCK_R =0x4c4f434B;
	    GPIO_PORTF_CR_R =0x1F;
      GPIO_PORTF_AFSEL_R = 0 ;
      GPIO_PORTF_AMSEL_R = 0 ;
      GPIO_PORTF_DEN_R = 0x1F ;
      GPIO_PORTF_DIR_R = 0x0E ;
      GPIO_PORTF_PCTL_R = 0 ;   
      GPIO_PORTF_PUR_R =0x11;
}
	void delay(void){
  unsigned long volatile time;
  time = 145448;  // 0.1sec
  while(time){
 		time--;
  }
void LCD_init(void){
      uint32_t delay ;
      SYSCTL_RCGCGPIO_R |= 0x00000003 ; //for Port A and Port B
      delay = 1;
          GPIO_PORTB_LOCK_R =0x4c4f434B;
        GPIO_PORTB_CR_R =0xFF;
      GPIO_PORTB_AFSEL_R = 0 ;
      GPIO_PORTB_AMSEL_R = 0 ;
      GPIO_PORTB_DEN_R = 0xFF ;// we need all bits for lcd output
      GPIO_PORTB_DIR_R = 0xFF ;
      GPIO_PORTB_PCTL_R = 0 ;   
      GPIO_PORTB_PUR_R =0x11;
    
      delay = 1;
          GPIO_PORTA_LOCK_R =0x4c4f434B;
        GPIO_PORTA_CR_R =0xFF;
      GPIO_PORTA_AFSEL_R = 0 ;
      GPIO_PORTA_AMSEL_R = 0 ;
      GPIO_PORTA_DEN_R = 0xE0 ; // we only need the last 3 bits for control
      GPIO_PORTA_DIR_R = 0xE0 ;
      GPIO_PORTA_PCTL_R = 0 ;   
      GPIO_PORTA_PUR_R =0xE0; 
            
            LCD_Command(0x30); //wakeup
            LCD_Command(0x38); //to make the lcd work on 8 bits
            LCD_Command(0x06); //increment crussor to the right
            LCD_Command(0x01); //to clear the screen
            LCD_Command(0x0F); //to turn the screen on
            
}
}
 
