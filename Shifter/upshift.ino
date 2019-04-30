void upshift(){
  int about_100 = 100;
  if (millis() - prev_time >= cooldown_up)
  {

          digitalWrite(out_main, HIGH);
          delay(10);
          digitalWrite(H_2, HIGH);
          Serial.print("U");
          delay(about_100);
//          check_gear();
          digitalWrite(H_2, LOW);
          digitalWrite(out_main, LOW);

  }
  prev_time = millis();
}
