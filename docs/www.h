#include<arduino.h>
#include<Wire.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>
#define W Wire
#define A_S Adafruit_SSD1306
#define A 43
#define B 44
#define S_S SSD1306_SWITCHCAPVCC
#define IP 0x3C
#define d1 begin
#define d2 clearDisplay
#define d3 setTextColor
#define Size setTextSize
#define Set setCursor
#define Dis display
#define h 128
#define w 64 
A_S d(h,w,&W,-1); 
void set(){
	W.d1();
    d.d1(S_S,IP);
    d.d2();
    d.d3(WHITE);
    d.Set(10,20);
}
void XIAO(){
    d.d1(S_S,IP);
    d.d2();
    d.d3(WHITE);
    d.Set(10,20);
}
