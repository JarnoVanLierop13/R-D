String myName;   //Declare a String variable to hold your name
int diameter;         //Declare an Int variable to hold your age
float height;    //Declare a float variable to hold your height
float pi = 3.14;  //declare a float avriable to hold PI
 
void setup() {
  Serial.begin(9600);      // turn on Serial Port
}
 
void loop() {
  
  Serial.println("Please enter your name: "); //Prompt User for input
  while (Serial.available()==0) {             //Wait for user input
  
  }
  myName=Serial.readString();                 //Read user input into myName
  
  Serial.println("what is the diameter of the cilinder? ");        //Prompt User for input
  while (Serial.available()==0)  {
  
  }
  diameter=Serial.parseInt();                      //Read user input into age
  
  Serial.println("what is the height of the cilinder? ");      //Prompt User for input
  while (Serial.available()==0)  {
  
  }
  height=Serial.parseInt();                //Read user input into height

  float volume = pi * (diameter / 2) * (diameter / 2) * height;
  
  Serial.print("Hello ");                    //Print out nicely formatted output.
  Serial.print(myName);
  Serial.print(", the cillinder is ");
  Serial.print(diameter);
  Serial.println(" centimeter in width,");
  Serial.print(" and it is  ");
  Serial.print(height);
  Serial.println(" centimeters heigh.");
  Serial.print (" de inhoud is ");
  Serial.print (volume);
  Serial.print ("cm3");
  delay (1000);
 
}
