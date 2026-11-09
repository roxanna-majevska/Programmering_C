
# Temperaturlarm

## Syfte
"Programmet läser in en temperatur och visar om den är för varm,
          för kall eller normal. Felaktig inmatning ger ett felmeddelande."



## Filstruktur
- `main.c`: frågar användaren, kontrollerar inmatningen och skriver ut svaret
- `temperature.h`: deklarationer för temperaturfunktionerna
- `temperature.c`: kontrollerar om en temperatur är giltig och klassificerar den
- `Makefile`: bygger programmet

## Bygga
mingw32-make

## Köra
.\alarm.exe

## Exempel
Temperaturen: 20
Normal

Temperaturen: abc
Fel input