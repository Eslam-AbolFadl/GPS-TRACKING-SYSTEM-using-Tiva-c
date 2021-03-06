//------------ Port F

#define GPIO_PORTF_DATA_BITS_R  ((volatile uint32_t *)0x40025000)
#define GPIO_PORTF_DATA_R       (*((volatile uint32_t *)0x400253FC))
#define GPIO_PORTF_DIR_R        (*((volatile uint32_t *)0x40025400))
#define GPIO_PORTF_IS_R         (*((volatile uint32_t *)0x40025404))
#define GPIO_PORTF_IBE_R        (*((volatile uint32_t *)0x40025408))
#define GPIO_PORTF_IEV_R        (*((volatile uint32_t *)0x4002540C))
#define GPIO_PORTF_IM_R         (*((volatile uint32_t *)0x40025410))
#define GPIO_PORTF_RIS_R        (*((volatile uint32_t *)0x40025414))
#define GPIO_PORTF_MIS_R        (*((volatile uint32_t *)0x40025418))
#define GPIO_PORTF_ICR_R        (*((volatile uint32_t *)0x4002541C))
#define GPIO_PORTF_AFSEL_R      (*((volatile uint32_t *)0x40025420))
#define GPIO_PORTF_DR2R_R       (*((volatile uint32_t *)0x40025500))
#define GPIO_PORTF_DR4R_R       (*((volatile uint32_t *)0x40025504))
#define GPIO_PORTF_DR8R_R       (*((volatile uint32_t *)0x40025508))
#define GPIO_PORTF_ODR_R        (*((volatile uint32_t *)0x4002550C))
#define GPIO_PORTF_PUR_R        (*((volatile uint32_t *)0x40025510))
#define GPIO_PORTF_PDR_R        (*((volatile uint32_t *)0x40025514))
#define GPIO_PORTF_SLR_R        (*((volatile uint32_t *)0x40025518))
#define GPIO_PORTF_DEN_R        (*((volatile uint32_t *)0x4002551C))
#define GPIO_PORTF_LOCK_R       (*((volatile uint32_t *)0x40025520))
#define GPIO_PORTF_CR_R         (*((volatile uint32_t *)0x40025524))
#define GPIO_PORTF_AMSEL_R      (*((volatile uint32_t *)0x40025528))
#define GPIO_PORTF_PCTL_R       (*((volatile uint32_t *)0x4002552C))
#define GPIO_PORTF_ADCCTL_R     (*((volatile uint32_t *)0x40025530))
#define GPIO_PORTF_DMACTL_R     (*((volatile uint32_t *)0x40025534))
#define SYSCTL_RCGCGPIO_R       (*((volatile uint32_t *)0x400FE608))


//------------ Port B

#define GPIO_PORTB_DEN_R        (*((volatile uint32_t *)0x4000551C))
#define GPIO_PORTB_LOCK_R       (*((volatile uint32_t *)0x40005520))
#define GPIO_PORTB_CR_R         (*((volatile uint32_t *)0x40005524))
#define GPIO_PORTB_AMSEL_R      (*((volatile uint32_t *)0x40005528))
#define GPIO_PORTB_DIR_R        (*((volatile uint32_t *)0x40005400))
#define GPIO_PORTB_PUR_R        (*((volatile uint32_t *)0x40005510))
#define GPIO_PORTB_PCTL_R       (*((volatile uint32_t *)0x4000552C))
#define GPIO_PORTB_AFSEL_R      (*((volatile uint32_t *)0x40005420))
#define GPIO_PORTB_DATA_R       (*((volatile uint32_t *)0x400053FC))

//------------ Port A

#define GPIO_PORTA_DEN_R        (*((volatile uint32_t *)0x4000451C))
#define GPIO_PORTA_LOCK_R       (*((volatile uint32_t *)0x40004520))
#define GPIO_PORTA_CR_R         (*((volatile uint32_t *)0x40004524))
#define GPIO_PORTA_AMSEL_R      (*((volatile uint32_t *)0x40004528))
#define GPIO_PORTA_PCTL_R       (*((volatile uint32_t *)0x4000452C))
#define GPIO_PORTA_PUR_R        (*((volatile uint32_t *)0x40004510))
#define GPIO_PORTA_DIR_R        (*((volatile uint32_t *)0x40004400))
#define GPIO_PORTA_DATA_R       (*((volatile uint32_t *)0x400043FC))
#define GPIO_PORTA_AFSEL_R      (*((volatile uint32_t *)0x40004420))

// GPIO registers (PORTC)
//
//*****************************************************************************
#define GPIO_PORTC_DATA_BITS_R  ((volatile uint32_t *)0x40006000)
#define GPIO_PORTC_DATA_R       (*((volatile uint32_t *)0x400063FC))
#define GPIO_PORTC_DIR_R        (*((volatile uint32_t *)0x40006400))
#define GPIO_PORTC_IS_R         (*((volatile uint32_t *)0x40006404))
#define GPIO_PORTC_IBE_R        (*((volatile uint32_t *)0x40006408))
#define GPIO_PORTC_IEV_R        (*((volatile uint32_t *)0x4000640C))
#define GPIO_PORTC_IM_R         (*((volatile uint32_t *)0x40006410))
#define GPIO_PORTC_RIS_R        (*((volatile uint32_t *)0x40006414))
#define GPIO_PORTC_MIS_R        (*((volatile uint32_t *)0x40006418))
#define GPIO_PORTC_ICR_R        (*((volatile uint32_t *)0x4000641C))
#define GPIO_PORTC_AFSEL_R      (*((volatile uint32_t *)0x40006420))
#define GPIO_PORTC_DR2R_R       (*((volatile uint32_t *)0x40006500))
#define GPIO_PORTC_DR4R_R       (*((volatile uint32_t *)0x40006504))
#define GPIO_PORTC_DR8R_R       (*((volatile uint32_t *)0x40006508))
#define GPIO_PORTC_ODR_R        (*((volatile uint32_t *)0x4000650C))
#define GPIO_PORTC_PUR_R        (*((volatile uint32_t *)0x40006510))
#define GPIO_PORTC_PDR_R        (*((volatile uint32_t *)0x40006514))
#define GPIO_PORTC_SLR_R        (*((volatile uint32_t *)0x40006518))
#define GPIO_PORTC_DEN_R        (*((volatile uint32_t *)0x4000651C))
#define GPIO_PORTC_LOCK_R       (*((volatile uint32_t *)0x40006520))
#define GPIO_PORTC_CR_R         (*((volatile uint32_t *)0x40006524))
#define GPIO_PORTC_AMSEL_R      (*((volatile uint32_t *)0x40006528))
#define GPIO_PORTC_PCTL_R       (*((volatile uint32_t *)0x4000652C))
#define GPIO_PORTC_ADCCTL_R     (*((volatile uint32_t *)0x40006530))
#define GPIO_PORTC_DMACTL_R     (*((volatile uint32_t *)0x40006534))

//*****************************************************************************
//------------ Systick
#define NVIC_ST_CTRL_R          (*((volatile uint32_t *)0xE000E010))
#define NVIC_ST_RELOAD_R        (*((volatile uint32_t *)0xE000E014))
#define NVIC_ST_CURRENT_R       (*((volatile uint32_t *)0xE000E018))
	


// UART 
#define SYSCTL_RCGCUART_R       (*((volatile uint32_t *)0x400FE618))
#define UART1_CTL_R             (*((volatile uint32_t *)0x4000D030))
#define UART1_IBRD_R            (*((volatile uint32_t *)0x4000D024))
#define UART1_FBRD_R            (*((volatile uint32_t *)0x4000D028))
#define UART1_LCRH_R            (*((volatile uint32_t *)0x4000D02C))

// UART registers (UART1)
//
//*****************************************************************************
#define UART1_DR_R              (*((volatile uint32_t *)0x4000D000))
#define UART1_RSR_R             (*((volatile uint32_t *)0x4000D004))
#define UART1_ECR_R             (*((volatile uint32_t *)0x4000D004))
#define UART1_FR_R              (*((volatile uint32_t *)0x4000D018))
#define UART1_ILPR_R            (*((volatile uint32_t *)0x4000D020))
#define UART1_IBRD_R            (*((volatile uint32_t *)0x4000D024))
#define UART1_FBRD_R            (*((volatile uint32_t *)0x4000D028))
#define UART1_LCRH_R            (*((volatile uint32_t *)0x4000D02C))
#define UART1_CTL_R             (*((volatile uint32_t *)0x4000D030))
#define UART1_IFLS_R            (*((volatile uint32_t *)0x4000D034))
#define UART1_IM_R              (*((volatile uint32_t *)0x4000D038))
#define UART1_RIS_R             (*((volatile uint32_t *)0x4000D03C))
#define UART1_MIS_R             (*((volatile uint32_t *)0x4000D040))
#define UART1_ICR_R             (*((volatile uint32_t *)0x4000D044))
#define UART1_DMACTL_R          (*((volatile uint32_t *)0x4000D048))
#define UART1_9BITADDR_R        (*((volatile uint32_t *)0x4000D0A4))
#define UART1_9BITAMASK_R       (*((volatile uint32_t *)0x4000D0A8))
#define UART1_PP_R              (*((volatile uint32_t *)0x4000DFC0))
#define UART1_CC_R              (*((volatile uint32_t *)0x4000DFC8))

//*****************************
