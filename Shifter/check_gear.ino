inline void check_gear()  {

  if (digitalRead(8) == LOW)
    gear = 1;
  if (digitalRead(9) == LOW)
    gear = 2;
  if (digitalRead(10) == LOW)
    gear = 3;
  if (digitalRead(11) == LOW)
    gear = 4;
  if (digitalRead(12) == LOW)
    gear = 5;
  if (digitalRead(13) == LOW)
    gear = 6;
 // if (digitalRead() == LOW)
   // gear = 0;
}
