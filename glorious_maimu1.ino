// C++ code
//
int time_slot;
void setup()
{
  pinMode(13, OUTPUT);//signal 1 red {T}
  pinMode(12, OUTPUT);//signal 1 yellow {T}
  pinMode(11, OUTPUT);//signal 1 green {T}
  pinMode(10, OUTPUT);//signal 2 red {R}
  pinMode(9, OUTPUT);//signal 2 yellow {R}
  pinMode(8, OUTPUT);//signal 2 green {R}
  pinMode(2, OUTPUT);//signal 3 red {B}
  pinMode(3, OUTPUT);//signal 3 yellow {B}
  pinMode(4, OUTPUT);//signal 3 green {B}
  pinMode(5, OUTPUT);//signal 4 red {L}
  pinMode(6, OUTPUT);//signal 4 yellow {L}
  pinMode(7, OUTPUT);//signal 4 green {L}
  
 Serial.begin(9600);
 Serial.println("Tell the Time Slot :");
}

void loop()
{
   
   
  
  Serial.println("Please select a time slot (1,2,3,4): "); //asking the user for input
  while(Serial.available()==0)
  {
    
  }
  time_slot= Serial.parseInt(); 
  
 
  
   if(time_slot == 1)
  {
   digitalWrite(12, HIGH);  //signal 1 YELLOW ON 
   digitalWrite(9, HIGH);  //signal 2 YELLOW ON
   digitalWrite(3, HIGH);  //signal 3 YELLOW ON 
   digitalWrite(6, HIGH);  //signal 4 YELLOW ON
     
   delay(500);
     
   digitalWrite(12, LOW); //signal 1 YELLOW OFF
   digitalWrite(9, LOW);  //signal 2 YELLOW OFF
   digitalWrite(3, LOW);  //signal 3 YELLOW OFF
   digitalWrite(6, LOW);  //signal 4 YELLOW OFF
     
   delay(500);
     
   }
  
  
  
  
  else if(time_slot == 2)
  {
    digitalWrite(11, HIGH); //signal 1 GREEN ON
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(2, HIGH); //signal 3 RED ON
    digitalWrite(5, HIGH); //signal 4 RED ON
  
    delay(3000);
      
    digitalWrite(11, LOW); //signal 1 GREEN OFF
    digitalWrite(12, HIGH);  //signal 1 YELLOW ON
    
    delay(1000);
    
    digitalWrite(12, LOW); //signal 1 YELLOW OFF
    digitalWrite(13, HIGH); //signal 1 RED ON
    digitalWrite(10, LOW);  //signal 2 RED OFF
    digitalWrite(8, HIGH); //signal 2 GREEN ON
   
    delay(3000);
      
    digitalWrite(9, HIGH);  //signal 2 YELLOW ON
    digitalWrite(8, LOW); //signal 2 GREEN OFF
    
    delay(1000);
    
    digitalWrite(9, LOW); //signal 2 YELLOW OFF
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(2, LOW); //signal 3 RED OFF
    digitalWrite(4, HIGH); //signal 3 GREEN ON
    
    delay(3000);
      
    digitalWrite(3, HIGH);  //signal 3 YELLOW ON
    digitalWrite(4, LOW); //signal 3 GREEN OFF
    
    delay(1000);
    
    digitalWrite(3, LOW); //signal 3 YELLOW OFF
    digitalWrite(2, HIGH); //signal 3 RED ON
    digitalWrite(5, LOW); //signal 4 RED OFF
    digitalWrite(7, HIGH); //signal 4 GREEN ON
    
    delay(3000);
      
    digitalWrite(6, HIGH);  //signal 4 YELLOW ON
    digitalWrite(7, LOW); //signal 4 GREEN OFF
    
    delay(1000);
    
    digitalWrite(6, LOW); //signal 4 YELLOW OFF
    digitalWrite(5, LOW); //signal 4 RED ON
    digitalWrite(13, HIGH); //signal 1 RED OFF
    digitalWrite(11, LOW); //signal 1 GREEN ON
    
  } 
  
  
  
  
  
    else if(time_slot == 3)
  {
    digitalWrite(8,HIGH); //Signal 2 GREEN ON
    digitalWrite(7,HIGH); //Signal 4 GREEN ON
    digitalWrite(13,HIGH); //Signal 1 RED ON
    digitalWrite(2,HIGH); //Signal 3 RED ON
      
    delay(3000);
    
    digitalWrite(8,LOW); //Signal 2 GREEN OFF
    digitalWrite(7,LOW); //Signal 4 GREEN OFF
    digitalWrite(9,HIGH); //Signal 2 YELLOW ON
    digitalWrite(6,HIGH); //Signal 4 YELLOW ON
      
    delay(1000);
    
    digitalWrite(9,LOW); //signal 2 yellow off
    digitalWrite(6,LOW); //signal 4 yellow off
    digitalWrite(10,HIGH); //Signal 2 RED ON
    digitalWrite(5,HIGH); //Signal 4 RED ON
    digitalWrite(13,LOW); //signal 1 RED off
    digitalWrite(2,LOW); //signal 3 red off
    digitalWrite(11,HIGH); //Signal 1 GREEN ON
    digitalWrite(4,HIGH); //Signal 3 GREEN ON
      
    delay(3000);
    
    digitalWrite(11,LOW); //Signal 1 GREEN OFF
    digitalWrite(4,LOW); //Signal 3 GREEN OFF
    digitalWrite(12,HIGH); //Signal 1 YELLOW ON
    digitalWrite(3,HIGH); //Signal 3 YELLOW ON
      
    delay(1000);
      
    digitalWrite(12,LOW); //signal 1 yellow off
    digitalWrite(3,LOW); //signal 3 yellow off
    digitalWrite(13,HIGH); //Signal 1 RED ON
    digitalWrite(2,HIGH); //Signal 3 RED ON
    digitalWrite(10,LOW); //signal 2 RED off
    digitalWrite(5,LOW); //signal 4 red off
    digitalWrite(8,HIGH); //Signal 2 GREEN ON
    digitalWrite(7,HIGH); //Signal 4 GREEN ON
   
    delay(3000);
    
    digitalWrite(8,LOW); //Signal 2 GREEN OFF
    digitalWrite(7,LOW); //Signal 4 GREEN OFF
    digitalWrite(9,HIGH); //Signal 2 YELLOW ON
    digitalWrite(6,HIGH); //Signal 4 YELLOW ON
      
    delay(1000);
    
    digitalWrite(9,LOW); //signal 2 yellow off
    digitalWrite(6,LOW); //signal 4 yellow off
    digitalWrite(10,HIGH); //Signal 2 RED ON
    digitalWrite(5,HIGH); //Signal 4 RED ON
    digitalWrite(13,LOW); //signal 1 RED off
    digitalWrite(2,LOW); //signal 3 red off
    digitalWrite(11,HIGH); //Signal 1 GREEN ON
    digitalWrite(4,HIGH); //Signal 3 GREEN ON
      
    delay(3000);
    
    digitalWrite(11,LOW); //Signal 1 GREEN OFF
    digitalWrite(4,LOW); //Signal 3 GREEN OFF
    digitalWrite(12,HIGH); //Signal 1 YELLOW ON
    digitalWrite(3,HIGH); //Signal 3 YELLOW ON
      
    delay(1000);
    
    digitalWrite(12,LOW); //signal 1 yellow off
    digitalWrite(3,LOW); //signal 3 yellow off
    digitalWrite(13,HIGH); //Signal 1 RED ON
    digitalWrite(2,HIGH); //Signal 3 RED ON
    digitalWrite(10,LOW); //signal 2 RED off
    digitalWrite(5,LOW); //signal 4 red off
    digitalWrite(8,HIGH); //Signal 2 GREEN ON
    digitalWrite(7,HIGH); //Signal 4 GREEN ON
    
    }
  
  
  
  
  
  else if(time_slot == 4)
  {
    digitalWrite(11, HIGH); //signal 1 GREEN ON
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(2, HIGH); //signal 3 RED ON
    digitalWrite(5, HIGH); //signal 4 RED ON
  
    delay(3000);
      
    digitalWrite(11, LOW); //signal 1 GREEN OFF
    digitalWrite(12, HIGH);  //signal 1 YELLOW ON
    
    delay(1000);
    
    digitalWrite(12, LOW); //signal 1 YELLOW OFF
    digitalWrite(13, HIGH); //signal 1 RED ON
    digitalWrite(10, LOW);  //signal 2 RED OFF
    digitalWrite(8, HIGH); //signal 2 GREEN ON
   
    delay(3000);
      
    digitalWrite(9, HIGH);  //signal 2 YELLOW ON
    digitalWrite(8, LOW); //signal 2 GREEN OFF
    
    delay(1000);
    
    digitalWrite(9, LOW); //signal 2 YELLOW OFF
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(2, LOW); //signal 3 RED OFF
    digitalWrite(4, HIGH); //signal 3 GREEN ON
    
    delay(3000);
      
    digitalWrite(3, HIGH);  //signal 3 YELLOW ON
    digitalWrite(4, LOW); //signal 3 GREEN OFF
    
    delay(1000);
    
    digitalWrite(3, LOW); //signal 3 YELLOW OFF
    digitalWrite(2, HIGH); //signal 3 RED ON
    digitalWrite(5, LOW); //signal 4 RED OFF
    digitalWrite(7, HIGH); //signal 4 GREEN ON
    
    delay(3000);
      
    digitalWrite(6, HIGH);  //signal 4 YELLOW ON
    digitalWrite(7, LOW); //signal 4 GREEN OFF
    
    delay(1000);
    
    digitalWrite(6, LOW); //signal 4 YELLOW OFF
    digitalWrite(5, LOW); //signal 4 RED ON
    digitalWrite(13, HIGH); //signal 1 RED OFF
    digitalWrite(11, LOW); //signal 1 GREEN ON
    
  }
  
  
  
  }