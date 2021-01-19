void  setup() { // Executado cada vez que o Arduino se inicializa;
  pinMode(13, OUTPUT); // Inicializa o pino 13 como saída.
}

void  loop() { // Função loop() executada interruptamente;
  digitalWrite(13, HIGH); // Acende o LED (HIGH nível de tensão liberado);
}
