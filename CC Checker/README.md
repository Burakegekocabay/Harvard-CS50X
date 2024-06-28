# Harward's CS50X Course BASIC C Project
Have you ever encountered an error just by entering your credit card number? If you have noticed this, it means that credit cards use an internal mechanism to verify the validity of the card, known as the Luhn algorithm. Now you will code that in C language.
 <h3> DISLAIMER </h3> 
 The credit card validation system provided here uses the Luhn algorithm to check the validity of credit card numbers. This tool is designed for educational and informational purposes only. It does not guarantee the authenticity or fraud prevention of credit card numbers. Always use caution and verify credit card details through secure and official channels. The author assumes no responsibility for any misuse or reliance on this tool.
 
<h3>Algorithm</h3> 
-Take a Credit Card number from user (long type)<br>
-an example with Visa: 4003600000000014. <br>
-Starting from the first digit, underline every other number.<br>
-<u>4</u> 0 <u>0</u> 3 <u>6</u> 0 <u>0</u> 0 <u>0</u> 0 <u>0</u> 0 <u>0</u> 0 <u>1</u> 4<br>
-Okay, let’s multiply each of the underlined digits by 2: <br>
-2 + 0 + 0 + 0 + 0 + 12 + 0 + 8 <br>
-Sum theese values but if there is 2-digit number like 12 : Take as 1+2 <br>
-2 + 0 + 0 + 0 + 0 + 1 + 2 + 0 + 8 = 13 <br>
-Now let’s add that sum (13) to the sum of the digits that weren’t multiplied by 2  <br>
-13 + 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 = 20 <br>
-If value(20) can divisible by 10 , card is valid so this test card is  valid (syntactically)
 <br>
 <h3> Output </h3> 
Enter a card number: 4003600000000014  <br>
RESULT : VALID VISA
<br>


