/** \file config.h
 *  Mar 2022
 *  Maestría en SIstemas Embebidos - Sistemas embebidos distribuidos
 */

#ifndef CONFIG_H_
#define CONFIG_H_

/* configuración WIFI */
#define ESP_WIFI_SSID "WELS_LIBI"     // CONFIG_ESP_WIFI_SSID  // "SSID wifi"
#define ESP_WIFI_PASS "w@2801(-)3007@l" // CONFIG_ESP_WIFI_PASS  // "pass wifi"

/*  Configuracion MQTT  */
#define PORT_MQTT 1883            //CONFIG_PORT_MQTT      // default
/* PC LOCAL */ //#define IP_BROKER_MQTT "192.168.18.7"   //CONFIG_IP_BROKER_MQTT // Broker MQTT
#define IP_BROKER_MQTT "test.mosquitto.org"
#define USER_MQTT "usuario"             // Usuario de MQTT
#define PASSWD_MQTT "usuariopassword"   // Contraseña de MQTT

/*  configuración IO */
#define BLINK_GPIO CONFIG_BLINK_GPIO  // port 2 para NodeMcu-23S

typedef struct
{
    volatile uint active_button;/* data */
    volatile uint active_led;
}data_t;

/* Configuración SD  */

/* Configuración CRONO  */

/* Configuración SD  */

#endif
