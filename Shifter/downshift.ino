void downshift()  {

  byte shift_try = 0;
  int about_100 = 100;
//gear=1;
  if (millis() - prev_time >= cooldown_down)
  {
//    switch (gear)
//    {
//      case 1:
//        while (shift_try != 2 && gear != 0)
        {
          /*digitalWrite(out_main, HIGH);
          Serial.print("SD");
          //delay(200);
          digitalWrite(H_1, HIGH);
          Serial.print("1D");
          //delay(200);
//          check_gear();
          digitalWrite(H_1, LOW);
          delay(200);
          digitalWrite(out_main, LOW);*/
                    digitalWrite(out_main, HIGH);
          Serial.print("D");
          delay(1000);
          digitalWrite(H_1, HIGH);
          //Serial.print("2D");
          delay(about_100);
//          check_gear();
          digitalWrite(H_1, LOW);
          digitalWrite(out_main, LOW);
        }
//        break;

/*      case 2:
//        while (shift_try != 2 && gear != 1)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_2, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_2, LOW);
          digitalWrite(out_main, LOW);
        }
        break;

      case 3:
//        while (shift_try != 2 && gear != 2)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_2, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_2, LOW);
          digitalWrite(out_main, LOW);
        }
        break;

      case 4:
//        while (shift_try != 2 && gear != 3)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_2, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_2, LOW);
          digitalWrite(out_main, LOW);
        }
        break;

      case 5:
//        while (shift_try != 2 && gear != 4)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_2, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_2, LOW);
          digitalWrite(out_main, LOW);
        }
        break;

      case 6:
//        while (shift_try != 2 && gear != 5)
        {
          digitalWrite(out_main, HIGH);
          digitalWrite(H_2, HIGH);
          delay(about_100);
//          check_gear();
          digitalWrite(H_2, LOW);
          digitalWrite(out_main, LOW);
        }
        break;
    }*/
  }

  prev_time = millis();
}
