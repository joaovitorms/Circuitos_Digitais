void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

  bool func_and(bool a, bool b){
    if(!a && !b){
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
  		digitalWrite(11, LOW);
    }else if(a && !b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, LOW);
  		digitalWrite(11, LOW);
    }else if(!a && b){
    	digitalWrite(13, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, LOW);
    }else if(a && b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, HIGH);
    }
  }

  bool func_or(bool a, bool b){
    if(!a && !b){
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
  		digitalWrite(11, LOW);
    }else if(a && !b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, LOW);
  		digitalWrite(11, HIGH);
    }else if(!a && b){
    	digitalWrite(13, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, HIGH);
    }else if(a && b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, HIGH);
    }
  }

  bool func_nand(bool a, bool b){
    if(!a && !b){
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
  		digitalWrite(11, HIGH);
    }else if(a && !b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, LOW);
  		digitalWrite(11, HIGH);
    }else if(!a && b){
    	digitalWrite(13, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, HIGH);
    }else if(a && b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, LOW);
    }
  }

  bool func_nor(bool a, bool b){
    if(!a && !b){
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
  		digitalWrite(11, HIGH);
    }else if(a && !b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, LOW);
  		digitalWrite(11, LOW);
    }else if(!a && b){
    	digitalWrite(13, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, LOW);
    }else if(a && b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, LOW);
    }
  }

  bool func_xor(bool a, bool b){
    if(!a && !b){
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
  		digitalWrite(11, LOW);
    }else if(a && !b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, LOW);
  		digitalWrite(11, HIGH);
    }else if(!a && b){
    	digitalWrite(13, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, HIGH);
    }else if(a && b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, LOW);
    }
  }

  bool func_xnor(bool a, bool b){
    if(!a && !b){
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
  		digitalWrite(11, HIGH);
    }else if(a && !b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, LOW);
  		digitalWrite(11, LOW);
    }else if(!a && b){
    	digitalWrite(13, LOW);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, LOW);
    }else if(a && b){
    	digitalWrite(13, HIGH);
  		digitalWrite(12, HIGH);
  		digitalWrite(11, HIGH);
    }
  }  

void loop()
{
  //---------------TESTE----------------------------------
  //func_and(false, false);
  //func_and(true, false);
  //func_and(false, true);
  //func_and(true, true);
  
  //func_or(false, false);
  //func_or(true, false);
  //func_or(false, true);
  //func_or(true, true);
  
  //func_nand(false, false);
  //func_nand(true, false);
  //func_nand(false, true);
  //func_nand(true, true);
  
  //func_nor(false, false);
  //func_nor(true, false);
  //func_nor(false, true);
  //func_nor(true, true);
  
  //func_xor(false, false);
  //func_xor(true, false);
  //func_xor(false, true);
  //func_xor(true, true);
  
  //func_xnor(false, false);
  //func_xnor(true, false);
  //func_xnor(false, true);
  //func_xnor(true, true);
  //--------------------------------------------------------
  
  int i = 1;
  //variavel para trocar a execucao das funcoes
  int troca = 1;
  //Inicia ambas como falso
  bool a = false;
  bool b = false;
  
  // sao 4 possibilidades de combinacao true x false 
  while (i<=4){

    if(i==1){
      a=false;
      b=false;
    }else if(i==2){
      a=true;
      b=false;
    }else if(i==3){
      a=false;
      b=true;
    }else if(i==4){
      a=true;
      b=true;
    }

    if(troca == 1)
    	func_and(a,b);
    else if (troca == 2)
    	func_or(a,b);
    else if (troca == 3)
       	func_nand(a,b);
    else if (troca == 4)
       	func_nor(a,b);
    else if (troca == 5)
       	func_xor(a,b);
    else if (troca == 6)
       	func_xnor(a,b);
    
    delay(2000); 

    if (i==4){
    	i=1;
    	troca++;
    }
    else {
    	i++;
    }
    
    //quando rodar as 6 funcoes, recomeca novamente
    if(troca > 6){
    	troca = 1;
    }
	
 
  }

}
  
  