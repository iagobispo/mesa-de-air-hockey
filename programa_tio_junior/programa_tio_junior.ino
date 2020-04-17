#define botaox 12
#define botaoy 11
#define mTres 4 //botao para entrar no mode melhor de tres
#define reset 3 //para zerar os pontos
#define normal 2 // sair do loop e entrat no modo normal

#define led 5 //indica que esta no modo de jogo normal
#define led1 6// indica que esta no modo melhor de tres

int t = 0;
int x = 0;
int y = 0;

int pontox = 0;
int pontoy = 0;

/////////////////////////////////////////////codigo led

//We always have to include the library
#include "LedControl.h"


 
LedControl lc=LedControl(8,10,9,2);


unsigned long delaytime=500;



void setup() {
  pinMode(botaox, INPUT_PULLUP);
  pinMode(botaoy, INPUT_PULLUP);
  pinMode(mTres, INPUT_PULLUP);
  pinMode(reset, INPUT_PULLUP);
  pinMode(normal, INPUT_PULLUP);

  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  


  Serial.begin(9600);

  ///////////////////////////////////////////////codigo led

  int devices=lc.getDeviceCount();
  //we have to init all devices in a loop
  for(int address=0;address<devices;address++) {
    /*The MAX72XX is in power-saving mode on startup*/
    lc.shutdown(address,false);
    /* Set the brightness to a medium values */
    lc.setIntensity(address,8);
    /* and clear the display */
    lc.clearDisplay(address);
  }


}

void loop() {
  digitalWrite(led, HIGH);
  digitalWrite(led1, LOW);
   

    writeOnMatrix(y, 1);
    writeOnMatrix(x, 0);
 // lc.setLed(1,1,5,true);

  

  if (!digitalRead(mTres)) {                   //jogador modo melhor de tres
    digitalWrite(led, LOW);
    digitalWrite(led1, HIGH);
    t++;
    zera ();
    lc.clearDisplay(0);
    lc.clearDisplay(1);
  }

  if (!digitalRead(reset)) {                   //zerar jogo
   zera();
  }




  while (t >= 1) {
    //Serial.println("esta no loop");
    Serial.print(pontox);
    Serial.println(pontoy);

    //writeOnMatrix(y, 1);
    //writeOnMatrix(x, 0);
   

    sobex();
    sobey();
    nx();
    ny();
      

    if (!digitalRead(botaox)) {                   //jogador x
  
      limpax();  //limpa a tela do jogador x para imprimir um novo valor
      x++;
      delay(500);

      Serial.println("ponto do x");
      Serial.println(x);

                                    /////pontuação jogador x

      if (x >= 3) {                             
        Serial.print("sobe ");
        Serial.println(pontox);
        x = 0;
        y = 0;
        limpax();
        limpay();
        pontox++;
        if (pontox >= 3) {
          zera();
          xvence();
          delay(3000);
          lc.clearDisplay(0);
          lc.clearDisplay(1);
          
        }
      }                                 
    }

                                                  //pontuação jogador y

if (!digitalRead(botaoy)) {                   //jogador y

      limpay();  //limpa a tela do jogador y para imprimir um novo valor
      y++;
      delay(500);

      Serial.println("ponto do y");
      Serial.println(y);
      

      
if (y >= 3) {                             
        Serial.print("sobe ");
        Serial.println(pontoy);
        x = 0;
        y = 0;
        limpay();
        limpax();
        pontoy++;
        if (pontoy >= 3) {
          zera();
          yvence();
          delay(3000);
          lc.clearDisplay(0);
          lc.clearDisplay(1);
          
        }
      } 

}



    if (!digitalRead(normal)) {                   //zerar jogo
      modo1 ();
    }

    if (!digitalRead(reset)) {                   //zerar jogo
      zera ();
    }


  }                                              //fim do while
  

  /////////////////////////////////////////////////////////////////////////modo do jogo normal///////////////////////////////////////////////////////////////////////

  if (!digitalRead(botaox)) {                   //jogador x
    x++;
    delay(500);

    Serial.println("ponto do x");
    Serial.println(x);

    if (x >= 5) {
      Serial.println("parabens vc venceu");
      xvence();
      delay(3000);
      zera ();
    }

  } else if (!digitalRead(botaoy)) {             //jogador y
    y++;
    delay(500);

    Serial.println("ponto do y");
    Serial.println(y);

    if (y >= 5) {
      Serial.println("parabens vc venceu");
      yvence();
      delay(3000);
      zera ();
    }
  }

}
