## LUHN ALGORITHM  

This algorithm is used for verification of credit card numbers.      
Double the value of every odd digit of the card number.      
If the result of this doubling operation is greater than 9 (e.g., 8 × 2 = 16), then add the digits of the result.       
Take the sum of all the digits.       
If the total mod 10 is equal to 0 (if the total ends in zero) then the number is valid according to the Luhn formula otherwise it is not valid.       

