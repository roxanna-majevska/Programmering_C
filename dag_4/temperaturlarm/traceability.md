# Spårbarhet

| Krav   | Beskrivning                                        | Funktion                | Testfall                          | Status  |
|--------|----------------------------------------------------|-------------------------|-----------------------------------|---------|
| REQ-01 | Läsa in heltal                                     | main (fgets + strtol)   | TC-01, TC-02, TC-03, TC-04, TC-05 | Godkänd |
| REQ-02 | ≥ vald gräns → För varmt!                          | classify_temperature()  | TC-02, TC-03, TC-08, TC-12        | Godkänd |
| REQ-03 | ≤ 15 → För kallt!                                  | classify_temperature()  | TC-07                             | Godkänd |
| REQ-04 | −40 till 85, annars Ogiltig temperatur             | is_valid_temperature()  | TC-05                             | Godkänd |
| REQ-05 | text → Fel input                                   | main (strtol-kontroll)  | TC-06, TC-13                      | Godkänd |
| REQ-06 | 16 till under gränsen → Normal                     | classify_temperature()  | TC-01, TC-04, TC-09               | Godkänd |
| REQ-07 | Användaren väljer gräns 0-60, annars felmeddelande | is_valid_limit() + main | TC-08, TC-09, TC-10, TC-11, TC-12 | Godkänd |