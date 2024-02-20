int ENCODER_PIN_A = 2;  // Encoder pin A connected to digital pin 2
void isr();
void PWM();
volatile long pulseCount = 0;  // Count of pulses from the encoder
float rpm = 0;                 // Calculated RPM
unsigned long lasttime = 0;    // Time of last sample
int RPM;

void isr() {
  pulseCount++;
}

void PWM() {
  if (millis() - lasttime >= 250) {
    noInterrupts();
    rpm = ((float)pulseCount / 500) * (60000 / (millis() - lasttime));
    pulseCount = 0;
    lasttime = millis();
    interrupts();
    rpm;
  }
}
void setup() {
  // put your setup code here, to run once:
  pinMode(ENCODER_PIN_A, INPUT);
  attachInterrupt(digitalPinToInterrupt(ENCODER_PIN_A), isr, RISING);
  Serial.begin(115200);
}

void loop() {
  // put your main code here,
  PWM();
  RPM = rpm;
  Serial.print("RPM: ");
  Serial.println(RPM);
}
