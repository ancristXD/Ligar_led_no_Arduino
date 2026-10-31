#define ledvermelho 8  // O LED está conectado ao pino 8 do Arduino.

void setup(){
  pinMode(ledvermelho, OUTPUT); // Configura o pino do LED como saída.
}

void loop(){
  digitalWrite(ledvermelho, HIGH); // O LED liga.
  delay(500);                      // Aguarda 0,5 segundo.

  digitalWrite(ledvermelho, LOW);  // O LED desliga.
  delay(500);                      // Aguarda 0,5 segundo.

  // Repete esse processo infinitamente.
}