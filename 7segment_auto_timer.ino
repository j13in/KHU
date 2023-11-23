int numValue[10][7] = 
{
  {1, 1, 1, 0, 1, 1, 1}, // 0: ABCDEF
  {0, 0, 1, 0, 0, 0, 1}, // 1: BC
  {1, 1, 0, 1, 0, 1, 1}, // 2: ABDEG
  {0, 1, 1, 1, 0, 1, 1}, // 3: ABCDG
  {0, 0, 1, 1, 1, 0, 1}, // 4: BCFG
  {0, 1, 1, 1, 1, 1, 0}, // 5: ACDFG
  {1, 1, 1, 1, 1, 0, 0}, // 6: CDEFG
  {0, 0, 1, 0, 0, 1, 1}, // 7: ABC
  {1, 1, 1, 1, 1, 1, 1}, // 8: ABCDEFG
  {0, 0, 1, 1, 1, 1, 1} // 9: ABCFG
};

void setup()
{
  int i;
  for (i = 2; i < 10; i++)
  {
    pinMode(i, OUTPUT);
  }
  digitalWrite(9, HIGH);
}

void loop() 
{
  for (int i = 0; i < 10; i++)
  {
    displayDigit(i);
    delay(1000);
  } 
}

void displayDigit(int num)
{
  int pin = 2;
  for (int i = 0; i < 7; i++)
  {
    digitalWrite(pin + i, numValue[num][i]);
  }
}