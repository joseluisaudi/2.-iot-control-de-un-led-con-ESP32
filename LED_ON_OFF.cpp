/**
 * @file LED_ON_OFF.cpp
 * @brief Código de control para encender y apagar un LED con ESP32.
 * @details Este programa configura el pin GPIO 22 del microcontrolador ESP32
 *          como salida para encender y apagar un LED de forma periódica.
 *          Cumple con los requerimientos de la Actividad Autónoma.
 */

#include <Arduino.h>

// Definición del pin GPIO asignado para el LED.
// Según las instrucciones de la actividad, se utiliza específicamente el GPIO 22.
const int ledPin = 22;

/**
 * @brief Configuración inicial del microcontrolador.
 * @details Esta función se ejecuta una sola vez al iniciar o reiniciar el ESP32.
 *          Se encarga de inicializar los periféricos y configurar el modo de los pines.
 */
void setup() {
  // Configura el pin del LED (GPIO 22) como salida (OUTPUT).
  // Esto permite al ESP32 enviar voltaje (HIGH/LOW) para controlar el estado del LED.
  pinMode(ledPin, OUTPUT);
}

/**
 * @brief Bucle principal del programa.
 * @details Esta función se ejecuta continuamente de forma cíclica e infinita.
 *          Contiene la lógica para alternar el estado del LED entre encendido y apagado.
 */
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
