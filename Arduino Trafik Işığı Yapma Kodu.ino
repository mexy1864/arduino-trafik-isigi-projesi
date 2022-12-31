void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT); //Kırmızı Işık
pinMode(7, OUTPUT); //Yeşil Işık
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8, HIGH); //Kırmızı Işığı yak.
delay(20000); //Kırmızı Işığı 20 saniye boyunca açık tut.
digitalWrite(8, LOW); //Kırmızı Işığı söndür.
delay(2000); //2 saniye bekle.
digitalWrite(7, HIGH); //Yeşil Işığı yak.
delay(20000); //Yeşil Işığı 20 saniye boyunca açık tut.
digitalWrite(7, LOW); //Yeşil Işığı söndür.
delay(1000);
digitalWrite(7, HIGH); //Yeşil Işığı yak.
delay(1000);
digitalWrite(7, LOW); //Yeşil Işığı söndür.
delay(1000);
digitalWrite(7, HIGH); //Yeşil Işığı yak.
delay(1000);
digitalWrite(7, LOW); //Yeşil Işığı söndür.
delay(1000);
digitalWrite(7, HIGH); //Yeşil Işığı yak.
delay(1000);
digitalWrite(7, LOW); //Yeşil Işığı söndür.
delay(1000);
digitalWrite(7, HIGH); //Yeşil Işığı yak.
delay(1000);
digitalWrite(7, LOW); //Yeşil Işığı söndür.
delay(2000); //2 saniye bekle ve bu kodları döngüye al.
}
