//擷取數字的某一位數
int cut(int num,int a){
  int b = num/pow(10,a);
  //num / 10**a
  return b%10;
}

boolean set_score(int t) {
  float y = getvalue();
  score += abs(y);
  error_list[num_of_time][0] = t;
  error_list[num_of_time][1] = int(y);
  if (num_of_time >= 200){
    return true;
  }else{
    num_of_time ++;
    return false;
  }
}

void output_score(){  
  lcd.clear();
  lcd.setCursor(0,0);
  String output = String(millis());
  lcd.print("t:"+output);

  output = "e:" + String(score / num_of_time);
  lcd.setCursor(0,1);
  lcd.print(output);
}


