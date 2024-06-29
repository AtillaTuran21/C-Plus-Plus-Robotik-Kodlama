#include "IRremote.h"         
String buton1 = "BA45FF00";   
String buton2 = "B946FF00";
String buton3 = "B847FF00";
String buton4 = "BB44FF00";
String buton5 = "BF40FF00";
String buton6 = "BC43FF00";
String buton7 = "F807FF00";
String buton8 = "EA15FF00";
String buton9 = "F609FF00";
String buton0 = "E619FF00";
String buton_yildiz = "E916FF00";
String buton_kare = "F20DFF00";
String buton_yukari = "E718FF00";
String buton_asagi = "AD52FF00";
String buton_sol = "F708FF00";
String buton_sag = "A55AFF00";
String buton_ok = "E31CFF00";
 
String kod, sonkod;          
int sensor = A0;              
 
void setup() {
  Serial.begin(9600);
  IrReceiver.begin(sensor,0); 
}
 
void loop() {
  if(IrReceiver.decode()) {   
    kod = String(IrReceiver.decodedIRData.decodedRawData, HEX);
    if (kod != "0"){sonkod = kod;} else {kod = sonkod;}        
    kod.toUpperCase();                                        
    Serial.print("Okunan Kod: ");
    Serial.print(kod);                                         
    Serial.print(" | Buton: ");
    int kayitli = 0;
    if (kod == buton1){Serial.println("1"); kayitli = 1;}       
    if (kod == buton2){Serial.println("2"); kayitli = 1;}
    if (kod == buton3){Serial.println("3"); kayitli = 1;}
    if (kod == buton4){Serial.println("4"); kayitli = 1;}
    if (kod == buton5){Serial.println("5"); kayitli = 1;}
    if (kod == buton6){Serial.println("6"); kayitli = 1;}
    if (kod == buton7){Serial.println("7"); kayitli = 1;}
    if (kod == buton8){Serial.println("8"); kayitli = 1;}
    if (kod == buton9){Serial.println("9"); kayitli = 1;}
    if (kod == buton0){Serial.println("0"); kayitli = 1;}
    if (kod == buton_yildiz){Serial.println("Yıldız"); kayitli = 1;}
    if (kod == buton_kare){Serial.println("Kare"); kayitli = 1;}
    if (kod == buton_yukari){Serial.println("Yukarı"); kayitli = 1;}
    if (kod == buton_asagi){Serial.println("Aşağı"); kayitli = 1;}
    if (kod == buton_sol){Serial.println("Sol"); kayitli = 1;}
    if (kod == buton_sag){Serial.println("Sağ"); kayitli = 1;}
    if (kod == buton_ok){Serial.println("OK"); kayitli = 1;}
    if (kayitli == 0){Serial.println("Kayıtlı değil");}         
    IrReceiver.resume();                                        
}