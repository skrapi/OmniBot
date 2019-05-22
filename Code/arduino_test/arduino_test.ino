#define MOTOR_0_ENABLE_B        3
#define MOTOR_0_INPUT_C         6
#define MOTOR_0_INPUT_D         7

#define MOTOR_1_ENABLE_A        9
#define MOTOR_1_INPUT_A         4
#define MOTOR_1_INPUT_B         5


void setup() 
{
  // put your setup code here, to run once:
    pinMode(MOTOR_0_INPUT_C, OUTPUT);
    pinMode(MOTOR_0_INPUT_D, OUTPUT);
    pinMode(MOTOR_1_INPUT_A, OUTPUT);
    pinMode(MOTOR_1_INPUT_B, OUTPUT);
    pinMode(MOTOR_1_ENABLE_A, OUTPUT);
    pinMode(MOTOR_0_ENABLE_B, OUTPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(MOTOR_1_INPUT_A, HIGH);
  digitalWrite(MOTOR_0_INPUT_C, HIGH);
  int speed;
  for(speed = 0; speed < 255; speed++)
  {
    analogWrite(MOTOR_1_ENABLE_A, speed);
    analogWrite(MOTOR_0_ENABLE_B, speed);
    delay(500);
  }

}
