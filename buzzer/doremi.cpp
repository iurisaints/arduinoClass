//Buzzer Tocando Dó Ré Mi
//Projeto Robótica - Profs. Iuri e Rudinei

void setup() {
pinMode(9,OUTPUT); //Pino do buzzer
}

void loop() {
    delay(2000);
    tone(9,262,200); //DO
    delay(200);
    tone(9,294,300); //RE
    delay(200);
    tone(9,330,300); //MI
    delay(200);
    tone(9,349,300); //FA
    delay(300);
    tone(9,349,300); //FA
    delay(300);
    tone(9,349,300); //FA
    delay(300);
    tone(9,262,90); //DO
    delay(200);
    tone(9,294,300); //RE
    delay(200);   
    tone(9,262,90); //DO
    delay(200);
    tone(9,294,300); //RE
    delay(300);
    tone(9,294,300); //RE
    delay(300);
    tone(9,294,300); //RE
    delay(300);
    tone(9,262,200); //DO
    delay(200);
    tone(9,392,200); //SOL
    delay(200);
    tone(9,349,200); //FA
    delay(200);
    tone(9,330,300); //MI
    delay(300);
    tone(9,330,300); //MI
    delay(300);
    tone(9,330,300); //MI
    delay(300);
    tone(9,262,200); //DO
    delay(200);
    tone(9,294,300); //RE
    delay(200);
    tone(9,330,300); //MI
    delay(200);
    tone(9,349,300); //FA
    delay(300);
    tone(9,349,300); //FA
    delay(300);
    tone(9,349,300); //FA
    delay(300);
}
