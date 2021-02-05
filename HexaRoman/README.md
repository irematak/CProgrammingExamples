## HEXA ROMAN    

Program converts entered number to hexadecimal then prints it with roman numerals.            
In this program, letters in the roman numeral system will be used, but the letter values it shows are different.      

0 x 1 : I   
0 x 8 : V   
0 x 10 : X    
0 x 80 : L     
0 x 100 : C   
0 x 800 : D     
0 x 1000 : M     

For numbers between 0x1 and 0x6 in the ones digit, 'I' is written as much as the value of the number.  e.g. 0x3 -> III   
For the number 0x8, 'V' is written.  
After writing 'V' for numbers between 0x9 and 0xE, 'I' is written as much as difference between number and 0x8. e.g. 0xB -> VIII   
For the number 0x7, 'IV' is written.   
For the number 0xF, 'IX' is written.     
The large digit numbers are written to the left.    

* **Example**   

> **Input**  
> Enter the number: 2421   
> **Output**  
> DCXLIIIII   

> **Input**  
> Enter the number: 504  
> **Output**  
> CXCV   





