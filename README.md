# LT_SPICE_Sims
ASD LAB ASSIGNMENTS:
////////////////////////////////////////////////////////////////////////////////////////////////

Week-1 ASSIGNMNENTS:
1. Design and test op-amp based inverting and non-inverting amplifier circuits for a closed loop gain of inverting amplifier is 6 and 10 for the non inverting amplifier(choose Rf=10K)
(assume vin=Vmsin⍵t)

Sol:
Inverting Amplifier:

Rf=10K 		(given)
Gain(Av)=6

Therefore From 
	
	Av=-Rf/R1
	
we obtain R1=1.66K



Non Inverting Amplifier:
        Rf=10K                  (given)
	Gain(Av)=10
 Therefore From 
 
 Av=1+Rf/R1 

we obtain 1=1.11K

2. Desgin and test a voltage to current converter with grounded load and study the suitability of this circuit for the current source applications.


///////////////////////////////////////////////////////////////////////////////////////////////

Week-2 ASSIGNMENT:

 Design and test a integrator circuit which is used to integrate signals from 8KHz to 80KHz.(Choose Rf=10KΩ)

Frequency Range: 8KHz-80KHz
	
Here fa=8KHz
  		  fa=1/2𝝅RfCf
		  
 We need to obtain value of Cf
 
		 Cf=1/2𝝅 fa Rf
		 
                         Cf=1.989nF
Here fb=80KHz

   		 fb=1/2𝝅R1Cf
		
We need to obtain the value of Rf  

R1=1/2𝝅 fb Cf

R1≅1KΩ
	
2.Design and test a differentiator circuit  which is used to differentiate signals in the    frequency range 4KHz-40KHz(Choose Rf=10K & C=0.01uF)

Frequency Range: 4KHz-40KHz
	
Here fa=40KHz
  		  fa=1/2𝝅RfC1
Assume Rf=10K

		C1=1/2𝝅 Rf fa
		C1= 397.88 pf

Here fb=400KHz (10*fa) 

   		 fb=1/2𝝅R1C1 
		 
We need to obtain the value of R1
           R1=1KΩ 
	   
	   Cf=R1*C1/Rf
	   Cf=0.4pF
//////////////////////////////////////////////////////////
Week 4 Assignment:
Design Requirements:
Band Reject Range:2KHz-20KHz
Pass Band Gain:1.586
Roll-off Rate:40dB/Decade


Low Pass Design:
Flp=2KHz    
Assume C=0.01uF
R2=R3=R=1/2 𝝿 Flp C
R=7957.74Ω
Af=1+Rf/R1=1.586
	Rf/R1=0.586
Assume Rf=10K
	r1=17.06K
	
	
High Pass Filter Design
Assume C=0.01uF
	R4=R5=R=1/2 𝝿 FHp C
 		R1=795.77Ω
Af=1+Rf/R1=1.586
	Rf/R1=0.586
Assume Rf=10K
	R1=17.06K
	
Summing circuit:
gain=1
Rf=10K       R1=10K             Rg=10K
////////////////////////////////////////////////////////

WEEK 5 ASSIGNMENT:
Design  and test a square wave and triangle wave generator of frequency 10KHz

Design specification:  square wave and triangle wave, f=10KHz
 
Assumptions: C=0.01uF UTP=+3V LTP=-3V    +Vsat=+11     -Vsat=-11



Schmitt trigger Design;

Vutp=(R2/R1)*+Vsat
3/11=(R2/R1)
Therefore R1=11K   R2=3K


Integrator Design:
f=(R1 / (  4 * R2 * R3 * C) )
R3=9.16K



