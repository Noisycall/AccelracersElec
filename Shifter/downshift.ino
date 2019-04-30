void downshift()  {

  
  int about_100 = 100;
  
  if (millis() - prev_time >= cooldown_down)
  {
          digitalWrite(out_main, HIGH);
          Serial.print("D");
          delay(10);
          digitalWrite(H_1, HIGH);
          //Serial.print("2D");
          delay(about_100);
//          check_gear();
          digitalWrite(H_1, LOW);
          digitalWrite(out_main, LOW);

  }
  prev_time = millis();
}
