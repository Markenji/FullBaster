void setup() {
  	DDRD = B11111111;
}

void loop() {
//Mode 1
	for (int i = 0; i < 2; i++) {
		for (int i = 0; i < 2; i++) {
      		PORTD = B00001111;
      		delay(100);
      		PORTD = B11111111;
      		delay(100);
    		}
    		delay(500);

    		for (int i = 0; i < 2; i++) {
      		PORTD = B11110000;
      		delay(100);
      		PORTD = B11111111;
      		delay(100);
    		}
    		delay(500);
	}

//Mode_2	
  	for (int i = 0; i < 2; i++) {
    		int Data = B01111111;
    		
		for (int i = 0; i < 8; i++) {
      		PORTD = Data;
			Data = Data >> 1;
			delay(100);
		}		
		PORTD = B11111111;
		delay(500);
	}

//Mode_3
  	for (int i = 0; i < 2; i++) {
    		int Data = B11111110;
    		
		for (int i = 0; i < 8; i++) {
      		PORTD = Data;
			Data = Data << 1;
			delay(100);
		}  
		PORTD = B11111111;
		delay(500);
	}
	
//Mode_4
	for (int i = 0; i < 2; i++) {	
		PORTD = B11111110;
		delay(100);
		PORTD = B11111101;
		delay(100);
		PORTD = B11111011;
		delay(100);
		PORTD = B11110111;
		delay(100);
		PORTD = B11101111;
		delay(100);	
		PORTD = B11011111;
		delay(100);
		PORTD = B10111111;
		delay(100);	
		PORTD = B01111111;
		delay(100);
		
		PORTD = B10111111;
		delay(100);
		PORTD = B11011111;
		delay(100);
		PORTD = B11101111;
		delay(100);
		PORTD = B11110111;
		delay(100);
		PORTD = B11111011;
		delay(100);
		PORTD = B11111101;
		delay(100);
		PORTD = B11111110;
		delay(100);
	}
	delay(500);
}