int R = 16;
int G = 100;
int B = 255;
//Values set as global variables, just change values at start of loop.


int r = 0;
int g = 0;
int b = 0;
String stringOne = " ";
String stringTwo = " ";
String stringThree = " ";
void setup() {
  Serial.begin(9600);
  

}

void loop() {
  if (R < 16) {
    r = 55;
  }
  if (G < 16) {
    g = 55;
  }
  if (B < 16) {
    b = 55;
  }   

  if (r == 55) {
    stringOne =  "0" + String(R, HEX);
  } else {
    stringOne =  String(R, HEX);
  }
  if (g == 55) {
    stringTwo =  "0" + String(G, HEX);
  } else {
    stringTwo =  String(G, HEX);
  }
  if (b == 55) {
    stringThree =  "0" + String(B, HEX);
  } else {
    stringThree =  String(B, HEX);
  }
  
String HEXCODE = "0x" + stringOne + stringTwo + stringThree;
long color = strtol(HEXCODE.c_str(), NULL, 16);
}
