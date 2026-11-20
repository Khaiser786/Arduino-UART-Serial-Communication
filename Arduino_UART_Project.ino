void setup()
{
    Serial.begin(9600);
    Serial.println("Hello World!");
}

void loop()
{
    if (Serial.available() > 0)
    {
        char data = Serial.read();
        Serial.print("Received: ");
        Serial.println(data);
    }
}
