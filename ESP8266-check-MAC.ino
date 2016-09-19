#include <ESP8266WiFi.h>

uint8_t MAC_array_STA[6];
uint8_t MAC_array_AP[6];
char MAC_char_STA[18];
char MAC_char_AP[18];

void setup() {
	Serial.begin(115200);
	Serial.println();

	WiFi.macAddress(MAC_array_STA);
	WiFi.softAPmacAddress(MAC_array_AP);
	for (int i = 0; i < sizeof(MAC_array_STA); ++i) {
		sprintf(MAC_char_STA, "%s%02x:", MAC_char_STA, MAC_array_STA[i]);
		sprintf(MAC_char_AP, "%s%02x:", MAC_char_AP, MAC_array_AP[i]);
	}

	Serial.printf("MAC STA: ");
	Serial.println(MAC_char_STA);
	Serial.printf("MAC AP:  ");
	Serial.println(MAC_char_AP);
}

void loop() {
}
