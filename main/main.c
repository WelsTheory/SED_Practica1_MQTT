
#include "main.h"
#include "config.h"

const char *TAG = "MAIN";

data_t datos = {.active_button = 0, .active_led = 0};
/*******************************************************************************
 Programa principal
******************************************************************************/
void app_main(void)
{
  /* Inicializaciones */
  WIFI_init();
  MQTT_init();
  /* Suscripción a LED */
  MQTT_subscribe("test/button");
  //MQTT_publish("test/led","0");
  IO_gpioInit();
  /* */
  int rssi;
  char msg[50];  


  while(1){
    /* Loop */
    if(datos.active_button == 1){
      rssi = WIFI_getRSSI();
      sprintf(msg,"%i",rssi);
      MQTT_publish("test/topic1",msg);
      CRONO_delayMs(500);
      ESP_LOGI(TAG,"test/topic1, mensaje %s",msg);
    } 
    CRONO_delayMs(50);
  }

}
