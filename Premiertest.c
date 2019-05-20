#include <Premiertest.h>






void main()
{

   
   
   
   
 

   while(TRUE)
   {
        output_high(PIN_D0);
      
      // 2^10 cause 10bit ADC = 1024
      // Q=(Vmax - Vmin)/N = ( 5 - 0) /  1024 = 0,0048828125
      delay_ms(10);
      lecture = read_adc() * CONV_CST;
      
      
   
     delay_ms(10);
      
     
      
     
   }

}
