





//função para voltar ao modo normal do jogo
void modo1 (){
  x = 0;
  y = 0;
  pontox = 0;
  pontoy = 0;
  t = 0;        //setando o valor zero, ele sai do loop (melhor de tres)
  
}


void zera (){
  x = 0;
  y = 0;
  pontox = 0;
  pontoy = 0;
  lc.setLed(0,0,7,false);
  lc.setLed(0,0,6,false);
  
  lc.setLed(1,0,7,false);
  lc.setLed(1,0,6,false);

  lc.clearDisplay(0);
  lc.clearDisplay(1);
}


//////////////////////////////////////////////////////////////////////codigo led

  void writeOnMatrix(int numero, int tela)
{
  //O array abaixo forma o numero 0
  byte N0[8] = {
  B00000000,
  B00011000,
  B00100100,
  B00100100,
  B00100100,
  B00100100,
  B00100100,
  B00011000
               };
  //numero 1
  byte N1[8] = {
  B00000000,
  B00001000,
  B00011000,
  B00001000,
  B00001000,
  B00001000,
  B00001000,
  B00011100
               };
  //numero 2
  byte N2[8] = {
  B00000000,
  B00011000,
  B00100100,
  B00000100,
  B00001000,
  B00010000,
  B00100000,
  B00111100
               };
  //numero 3
  byte N3[8] = {
  B00000000,
  B00011000,
  B00100100,
  B00000100,
  B00001000,
  B00000100,
  B00100100,
  B00011000
               };
  //numero 4
  byte N4[8] = {
  B00000000,
  B00100100,
  B00100100,
  B00100100,
  B00111100,
  B00000100,
  B00000100,
  B00000100
               };
  //pointo que sobe
  byte N5[8] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
               };
  //numero 6
  byte N6[8] = { 
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B10000000
               };
  //1 ponto
  byte N7[8] = {
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B10000000,
  B10000000
               };
  //carinha feliz
  byte N8[8] = {
  B00000000,
  B00100100,
  B00100100,
  B00000000,
  B10000001,
  B01000010,
  B00111100,
  B00000000
               };
  //carinha triste
  byte N9[8] = {
  B00000000,
  B00100100,
  B00100100,
  B00000000,
  B00000000,
  B01111110,
  B10000001,
  B00000000
               };

  //Mostra no display selecionado o numero correspondente
  switch (numero)
  {
    case 0:
      lc.setRow(tela, 1, N0[0]);
      lc.setRow(tela, 1, N0[1]);
      lc.setRow(tela, 2, N0[2]);
      lc.setRow(tela, 3, N0[3]);
      lc.setRow(tela, 4, N0[4]);
      lc.setRow(tela, 5, N0[5]);
      lc.setRow(tela, 6, N0[6]);
      lc.setRow(tela, 7, N0[7]);
      break;
    case 1:
      lc.setRow(tela, 1, N1[0]);
      lc.setRow(tela, 1, N1[1]);
      lc.setRow(tela, 2, N1[2]);
      lc.setRow(tela, 3, N1[3]);
      lc.setRow(tela, 4, N1[4]);
      lc.setRow(tela, 5, N1[5]);
      lc.setRow(tela, 6, N1[6]);
      lc.setRow(tela, 7, N1[7]);
      break;
    case 2:
      lc.setRow(tela, 1, N2[0]);
      lc.setRow(tela, 1, N2[1]);
      lc.setRow(tela, 2, N2[2]);
      lc.setRow(tela, 3, N2[3]);
      lc.setRow(tela, 4, N2[4]);
      lc.setRow(tela, 5, N2[5]);
      lc.setRow(tela, 6, N2[6]);
      lc.setRow(tela, 7, N2[7]);
      break;
    case 3:
      lc.setRow(tela, 1, N3[0]);
      lc.setRow(tela, 1, N3[1]);
      lc.setRow(tela, 2, N3[2]);
      lc.setRow(tela, 3, N3[3]);
      lc.setRow(tela, 4, N3[4]);
      lc.setRow(tela, 5, N3[5]);
      lc.setRow(tela, 6, N3[6]);
      lc.setRow(tela, 7, N3[7]);
      break;
    case 4:
      lc.setRow(tela, 1, N4[0]);
      lc.setRow(tela, 1, N4[1]);
      lc.setRow(tela, 2, N4[2]);
      lc.setRow(tela, 3, N4[3]);
      lc.setRow(tela, 4, N4[4]);
      lc.setRow(tela, 5, N4[5]);
      lc.setRow(tela, 6, N4[6]);
      lc.setRow(tela, 7, N4[7]);
      break;
    case 5:
      lc.setRow(tela, 1, N5[0]);
      lc.setRow(tela, 1, N5[1]);
      lc.setRow(tela, 2, N5[2]);
      lc.setRow(tela, 3, N5[3]);
      lc.setRow(tela, 4, N5[4]);
      lc.setRow(tela, 5, N5[5]);
      lc.setRow(tela, 6, N5[6]);
      lc.setRow(tela, 7, N5[7]);
      break;
    case 6:
      lc.setRow(tela, 1, N6[0]);
      lc.setRow(tela, 1, N6[1]);
      lc.setRow(tela, 2, N6[2]);
      lc.setRow(tela, 3, N6[3]);
      lc.setRow(tela, 4, N6[4]);
      lc.setRow(tela, 5, N6[5]);
      lc.setRow(tela, 6, N6[6]);
      lc.setRow(tela, 7, N6[7]);
      break;
    case 7:
      lc.setRow(tela, 1, N7[0]);
      lc.setRow(tela, 1, N7[1]);
      lc.setRow(tela, 2, N7[2]);
      lc.setRow(tela, 3, N7[3]);
      lc.setRow(tela, 4, N7[4]);
      lc.setRow(tela, 5, N7[5]);
      lc.setRow(tela, 6, N7[6]);
      lc.setRow(tela, 7, N7[7]);
      break;
    case 8:
      lc.setRow(tela, 1, N8[0]);
      lc.setRow(tela, 1, N8[1]);
      lc.setRow(tela, 2, N8[2]);
      lc.setRow(tela, 3, N8[3]);
      lc.setRow(tela, 4, N8[4]);
      lc.setRow(tela, 5, N8[5]);
      lc.setRow(tela, 6, N8[6]);
      lc.setRow(tela, 7, N8[7]);
      break;
    case 9:
      lc.setRow(tela, 1, N9[0]);
      lc.setRow(tela, 1, N9[1]);
      lc.setRow(tela, 2, N9[2]);
      lc.setRow(tela, 3, N9[3]);
      lc.setRow(tela, 4, N9[4]);
      lc.setRow(tela, 5, N9[5]);
      lc.setRow(tela, 6, N9[6]);
      lc.setRow(tela, 7, N9[7]);
      break;
  }
}





///////////////////////////////////////funçao para print

void xvence(){
  writeOnMatrix(9, 1);
  writeOnMatrix(8, 0);
}
void yvence(){
  writeOnMatrix(9, 0);
  writeOnMatrix(8, 1);
}

void sobex(){
  if(pontox == 1){
    lc.setLed(0,7,0,true);
    lc.setLed(1,7,7,true);

    
  }else if (pontox == 2){

    lc.setLed(1,7,7,true);
    lc.setLed(1,6,7,true);

    
    lc.setLed(0,7,0,true);
    lc.setLed(0,6,0,true);
    
  }else if (pontox == 0){
    lc.setLed(0,0,7,false);
    lc.setLed(0,0,6,false);
  }
}

void sobey(){
  if(pontoy == 1){
    lc.setLed(1,7,0,true);
    lc.setLed(0,7,7,true);

    
  }else if (pontoy == 2){

    lc.setLed(0,7,7,true);
    lc.setLed(0,6,7,true);

    
    lc.setLed(1,7,0,true);
    lc.setLed(1,6,0,true);
    
  }else if (pontoy == 0){
    lc.setLed(1,0,7,false);
    lc.setLed(1,0,6,false);
  }
}

//////////////////função para numero do jodador x

void nx(){
  if(x == 0){                   //numero 0
    
    lc.setLed(0,7,3,true);
    lc.setLed(0,7,4,true);
    lc.setLed(0,6,2,true);
    lc.setLed(0,6,5,true);
    lc.setLed(0,5,2,true);
    lc.setLed(0,5,5,true);
    lc.setLed(0,4,2,true);
    lc.setLed(0,4,5,true);
    lc.setLed(0,3,2,true);
    lc.setLed(0,3,5,true);
    lc.setLed(0,2,2,true);
    lc.setLed(0,2,5,true);
    lc.setLed(0,1,3,true);
    lc.setLed(0,1,4,true);
  }else if (x == 1){              //numero 1
    
    lc.setLed(0,7,3,true);
    lc.setLed(0,7,4,true);
    lc.setLed(0,7,5,true);
    lc.setLed(0,6,4,true);
    lc.setLed(0,5,4,true);
    lc.setLed(0,4,4,true);
    lc.setLed(0,3,4,true);
    lc.setLed(0,2,4,true);
    lc.setLed(0,1,4,true);
    lc.setLed(0,2,3,true);
   }else if (x == 2){             //numero 2
    lc.setLed(0,7,2,true);
    lc.setLed(0,7,3,true);
    lc.setLed(0,7,4,true);
    lc.setLed(0,7,5,true);
    lc.setLed(0,6,2,true);
    lc.setLed(0,5,3,true);
    lc.setLed(0,4,4,true);
    lc.setLed(0,3,5,true);
    lc.setLed(0,2,5,true);
    lc.setLed(0,2,2,true);
    lc.setLed(0,1,3,true);
    lc.setLed(0,1,4,true);
    
   }
}

//////////////////função para numero do jodador y

void ny(){
  if(y == 0){                   //numero 0
    
    lc.setLed(1,7,3,true);
    lc.setLed(1,7,4,true);
    lc.setLed(1,6,2,true);
    lc.setLed(1,6,5,true);
    lc.setLed(1,5,2,true);
    lc.setLed(1,5,5,true);
    lc.setLed(1,4,2,true);
    lc.setLed(1,4,5,true);
    lc.setLed(1,3,2,true);
    lc.setLed(1,3,5,true);
    lc.setLed(1,2,2,true);
    lc.setLed(1,2,5,true);
    lc.setLed(1,1,3,true);
    lc.setLed(1,1,4,true);
  }else if (y == 1){              //numero 1
    
    lc.setLed(1,7,3,true);
    lc.setLed(1,7,4,true);
    lc.setLed(1,7,5,true);
    lc.setLed(1,6,4,true);
    lc.setLed(1,5,4,true);
    lc.setLed(1,4,4,true);
    lc.setLed(1,3,4,true);
    lc.setLed(1,2,4,true);
    lc.setLed(1,1,4,true);
    lc.setLed(1,2,3,true);
   }else if (y == 2){             //numero 2
    lc.setLed(1,7,2,true);
    lc.setLed(1,7,3,true);
    lc.setLed(1,7,4,true);
    lc.setLed(1,7,5,true);
    lc.setLed(1,6,2,true);
    lc.setLed(1,5,3,true);
    lc.setLed(1,4,4,true);
    lc.setLed(1,3,5,true);
    lc.setLed(1,2,5,true);
    lc.setLed(1,2,2,true);
    lc.setLed(1,1,3,true);
    lc.setLed(1,1,4,true);
    
   }
}


                        // função para limpar as telas 
  
void limpax(){
  /*
  lc.setLed(0,7,1,false);
    lc.setLed(0,7,2,false);
    lc.setLed(0,7,3,false);
    lc.setLed(0,7,4,false);
    lc.setLed(0,7,5,false);
    lc.setLed(0,7,6,false);

    lc.setLed(0,6,1,false);
    lc.setLed(0,6,2,false);
    lc.setLed(0,6,3,false);
    lc.setLed(0,6,4,false);
    lc.setLed(0,6,5,false);
    lc.setLed(0,6,6,false);

    lc.setLed(0,5,1,false);
    lc.setLed(0,5,2,false);
    lc.setLed(0,5,3,false);
    lc.setLed(0,5,4,false);
    lc.setLed(0,5,5,false);
    lc.setLed(0,5,6,false);

    lc.setLed(0,4,1,false);
    lc.setLed(0,4,2,false);
    lc.setLed(0,4,3,false);
    lc.setLed(0,4,4,false);
    lc.setLed(0,4,5,false);
    lc.setLed(0,4,6,false);

    lc.setLed(0,3,1,false);
    lc.setLed(0,3,2,false);
    lc.setLed(0,3,3,false);
    lc.setLed(0,3,4,false);
    lc.setLed(0,3,5,false);
    lc.setLed(0,3,6,false);

    lc.setLed(0,2,1,false);
    lc.setLed(0,2,2,false);
    lc.setLed(0,2,3,false);
    lc.setLed(0,2,4,false);
    lc.setLed(0,2,5,false);
    lc.setLed(0,2,6,false);

    lc.setLed(0,1,1,false);
    lc.setLed(0,1,2,false);
    lc.setLed(0,1,3,false);
    lc.setLed(0,1,4,false);
    lc.setLed(0,1,5,false);
    lc.setLed(0,1,6,false);

  */

    for (int i = 2; i < 6; i++){
      lc.setLed(0,7,i,false);
      lc.setLed(0,6,i,false);
      lc.setLed(0,5,i,false);
      lc.setLed(0,4,i,false);
      lc.setLed(0,3,i,false);
      lc.setLed(0,2,i,false);
      lc.setLed(0,1,i,false);

    }
    
    
    
}

void limpay(){

   for (int i = 2; i < 6; i++){
      lc.setLed(1,7,i,false);
      lc.setLed(1,6,i,false);
      lc.setLed(1,5,i,false);
      lc.setLed(1,4,i,false);
      lc.setLed(1,3,i,false);
      lc.setLed(1,2,i,false);
      lc.setLed(1,1,i,false);

    }
    

  
}





 
