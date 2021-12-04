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

Therefore From Av=-Rf/R1 we obtain
		R1=1.66K



Non Inverting Amplifier:
        Rf=10K                  (given)
	Gain(Av)=10
 Therefore From Av=1+Rf/R1 we obtain
		R1=1.11K

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
//////////////////////////////////////////////////////////////////////////////////////////////
