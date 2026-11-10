# Krav: temperaturlarm

| ID     | Prio | Krav                                                                                                                                                        |
|--------|------|-------------------------------------------------------------------------------------------------------------------------------------------------------------|
| REQ-01 | Ska  | Programmet ska läsa in en temperatur som ett heltal från tangentbordet.                                                                                     |
| REQ-02 | Ska  | När temperaturen är lika med eller högre än den valda varningsgränsen ska programmet skriva "För varmt!".                                                   |
| REQ-03 | Ska  | När temperaturen är 15 °C eller lägre ska programmet skriva "För kallt!".                                                                                   |
| REQ-04 | Ska  | Programmet ska bara acceptera temperaturer från -40 till 85 °C. Annars ska det skriva "Ogiltig temperatur".                                                 |
| REQ-05 | Ska  | Om användaren skriver något som inte är ett tal (t.ex. abc) ska programmet skriva "Fel input" och inte tolka det som 0.                                     |
| REQ-06 | Ska  | När temperaturen är mellan 16 och under varningsgränsen ska programmet skriva "Normal".                                                                     |
| REQ-07 | Ska  | När programmet startar ska användaren få välja en varningsgräns. Gränsen ska vara mellan 0 och 60°C.Annars ska programmet skriva "Gränsen måste vara 0-60°C |