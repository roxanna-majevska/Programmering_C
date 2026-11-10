# Spårbarhet

| Krav   | Beskrivning                            | Funktion               | Testfall                          | Status  |
|--------|----------------------------------------|------------------------|-----------------------------------|---------|
| REQ-01 | Läsa in heltal                         | main (fgets + strtol)  | TC-01, TC-02, TC-03, TC-04, TC-05 | Godkänd |
| REQ-02 | ≥ 35 → För varmt!                      | classify_temperature() | TC-02, TC-03                      | Godkänd |
| REQ-03 | ≤ 15 → För kallt!                      | classify_temperature() | TC-07                             | Godkänd |
| REQ-04 | −40 till 85, annars Ogiltig temperatur | is_valid_temperature() | TC-05                             | Godkänd |
| REQ-05 | text → Fel input                       | main (strtol-kontroll) | TC-06                             | Godkänd |
| REQ-06 | 16–34 → Normal                         | classify_temperature() | TC-01, TC-04                      | Godkänd |