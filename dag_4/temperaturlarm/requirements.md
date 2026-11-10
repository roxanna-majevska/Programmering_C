# Krav: temperaturlarm

| ID     | Prio | Krav                                                                                                                    |
|--------|------|-------------------------------------------------------------------------------------------------------------------------|
| REQ-01 | Ska  | Programmet ska läsa in en temperatur som ett heltal från tangentbordet.                                                 |
| REQ-02 | Ska  | När temperaturen är 35 °C eller högre ska programmet skriva "För varmt!".                                               |
| REQ-03 | Ska  | När temperaturen är 15 °C eller lägre ska programmet skriva "För kallt!".                                               |
| REQ-04 | Ska  | Programmet ska bara acceptera temperaturer från -40 till 85 °C. Annars ska det skriva "Ogiltig temperatur".             |
| REQ-05 | Ska  | Om användaren skriver något som inte är ett tal (t.ex. abc) ska programmet skriva "Fel input" och inte tolka det som 0. |
| REQ-06 | Ska  | När temperaturen är mellan 16 och 34 °C ska programmet skriva "Normal".                                                 |