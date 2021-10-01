# CP Tricks
-> last bit of even number is 0 and last bit of odd number is 1

-> for a given number a, the number b which gives a%b maximum is (a/2+1)
   irrespective of whether a is even or odd

-> a number n is a power of 2 if the bit-wise and of n and n-1 is zero (n&n-1==0)

->inorder to check whether an array or vector is sorted or not, make use of is_sorted()
  function 

-> the no of powers of 10 requried to represent a number x is nothing but the
   sum of the digits at each bit of the number x.
   
   for ex => x=14957
   Lets find the no of powers of 10 requried to represent number x
   We know that powers of 10 are nothing but (1,10,100,1000,...)
   Now for our given number x=14957 we can easily observe that we need
   (7->1s,5->10s,9->100s,4->1000s and 1->10000s).So the no of powers of 10  
   requried to represent number x is (7+5+9+4+1) which is nothing but the 
   sum of the digits at each bit of the number x

-> the prodcut of perfect squares always results in a perfect square
   (a^2*b^2*c^2.....)=(a*b*c*.....)^2
   ex=> 4*9=36
        16*9*4=144
        1*64*49*144=451584 (which is a perfect square)
