// Definición del pin GPIO asignado para el LED.
// Según las instrucciones de la actividad, se utiliza específicamente el
// GPIO 22.
const int ledPin = 22;

// Configuración inicial del microcontrolador.
// Esta función se ejecuta una sola vez al iniciar o reiniciar el ESP32.
void setup() {
  // Configura el pin del LED (GPIO 22) como salida (OUTPUT).
  // Esto permite al ESP32 enviar voltaje (HIGH/LOW) para controlar el estado
  // del LED.
  pinMode(ledPin, OUTPUT);
}

// Bucle principal del programa.
// Esta función se ejecuta continuamente de forma cíclica e infinita.
void loop() {
  // Enciende el LED enviando un estado lógico ALTO (HIGH / 3.3V) al GPIO 22.
  digitalWrite(ledPin, HIGH);

  // Retardo de 1000 milisegundos (1 segundo) manteniendo el LED encendido.
  delay(1000);

  // Apaga el LED enviando un estado lógico BAJO (LOW / 0V) al GPIO 22.
  digitalWrite(ledPin, LOW);

  // Retardo de 1000 milisegundos (1 segundo) manteniendo el LED apagado.
  delay(1000);
}
