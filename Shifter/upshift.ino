void upshift(){
  byte shift_try = 0;
  int about_100 = 100;
  if (millis() - prev_time >= cooldown_up)
  {
//    switch (gear)
//    {
//      case 0:
//        while (shift_try != 2 && gear != 1)
        {
          digitalWrite(out_main, HIGH);
          delay(1000);
          digitalWrite(H_2, HIGH);
          Serial.print("U");
          delay(about_100);
//          check_gear();
          digitalWrite(H_2, LOW);
          digitalWrite(out_main, LOW);
        }
//        break;

/*      case 1:
//        while (shift_try != 2 && gear != 2)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_1, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_1, LOW);
          digitalWrite(out_main, LOW);
        }
        break;

      case 2:
//        while (shift_try != 2 && gear != 3)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_1, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_1, LOW);
          digitalWrite(out_main, LOW);
        }
        break;

      case 3:
//        while (shift_try != 2 && gear != 4)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_1, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_1, LOW);
          digitalWrite(out_main, LOW);
        }
        break;

      case 4:
//        while (shift_try != 2 && gear != 5)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_1, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_1, LOW);
          digitalWrite(out_main, LOW);
        }
        break;

      case 5:
//        while (shift_try != 2 && gear != 6)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_1, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_1, LOW);
          digitalWrite(out_main, LOW);
        }
        break;
    }*/
  }
  prev_time = millis();
}
