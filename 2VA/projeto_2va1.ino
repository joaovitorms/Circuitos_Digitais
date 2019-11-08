//Declaracao das variaveis
int segA = 2,
segB = 3,
segC = 4,
segD = 5,
segE = 6,
segF = 7,
segG = 8,
btnA = 9,
btnB = 10,
btnC = 11,
btnD = 12;

void setup()
{
	pinMode(segA, OUTPUT); 
	pinMode(segB, OUTPUT); 
	pinMode(segC, OUTPUT); 
	pinMode(segD, OUTPUT); 
	pinMode(segE, OUTPUT); 
	pinMode(segF, OUTPUT); 
	pinMode(segG, OUTPUT); 
}

void loop()
{

  // entradas manuais
	bool A = digitalRead(btnA); 
  	bool B = digitalRead(btnB); 
  	bool C = digitalRead(btnC); 
  	bool D = digitalRead(btnD); 
  
  //saídas - apaga/acende
	digitalWrite(segA, acendeA(A, B, C, D)); 
	digitalWrite(segB, acendeB(A, B, C, D));
	digitalWrite(segC, acendeC(A, B, C, D));
	digitalWrite(segD, acendeD(A, B, C, D));
	digitalWrite(segE, acendeE(A, B, C, D));
	digitalWrite(segF, acendeF(A, B, C, D));
	digitalWrite(segG, acendeG(A, B, C, D));


}

//funcoes para acender as suas determinadas partes no display
//Baseado nas expressoes simplificadas
bool acendeA(bool A, bool B, bool C, bool D)
{
	return !( (!A && !B && !D) || (!A && !B && C) || (!A && B && D) || (B && C && D) || (A && !B && !C) || (A && C && !D) );
}

bool acendeB(bool A, bool B, bool C, bool D)
{
	return !((!A && !B) || (!B && !C) || (!A && !C && !D) || (A && !C && D) || (!A && C && D) || (!B && C && !D));
}

bool acendeC(bool A, bool B, bool C, bool D)
{
	return !((!A && !C) || (!A && D) || (!A && B) || (!C && D) || (A && !B) );
}

bool acendeD(bool A, bool B, bool C, bool D)
{
	return !((A && !C) || (!B && !C && !D) || (B && !C && D) || (!B && C && D) || (!A && C && !D) || (B && C && !D));
}

bool acendeE(bool A, bool B, bool C, bool D)
{
	return !((A && B) || (C && !D) || (A && C) || (A && !D) || (!A && !B && !D));
}

bool acendeF(bool A, bool B, bool C, bool D)
{
	return !((A && !B) || (A && C) || (!A && !C && !D) || (!A && B && !C) || (B && C && !D) );
}

bool acendeG(bool A, bool B, bool C, bool D)
{
	return !((A) || (B && !C) || (!B && C) || (C && !D));
}