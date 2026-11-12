
# Temperaturlarm

## Syfte
Programmet låter användaren välja en varningsgräns (0–60 °C) och läser sedan in en temperatur.
Det visar om temperaturen är för varm, för kall eller normal.
Felaktig inmatning ger ett felmeddelande.


## Filstruktur
- `main.c`: frågar efter gräns och temperatur, kontrollerar inmatningen och skriver ut svaret
- `temperature.h`: deklarationer för temperaturfunktionerna
- `temperature.c`: kontrollerar om gräns och temperatur är giltiga och klassificerar temperaturen
- `Makefile`: bygger programmet
- `requirements.md`: kraven (REQ-01 till REQ-07)
- `tests.md`: testfallen
- `traceability.md`: kopplingen mellan krav, funktioner och testfall


## Bygga
```
mingw32-make
```

## Köra
```
.\alarm.exe
```

## Exempel
```
Välj varningsgräns (0-60): 30
Temperaturen: 30
För varmt!
```

```
Välj varningsgräns (0-60): 30
Temperaturen: 20
Normal
```

```
Välj varningsgräns (0-60): 70
Gränsen måste vara 0-60°C
```

```
Välj varningsgräns (0-60): abc
Fel input
```