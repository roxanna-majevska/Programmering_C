# Testfall

| ID    |   Krav         | Typ      | Indata (gräns / temp) | Förväntat                 | Faktiskt                  | Status  |
|-------|----------------|----------|-----------------------|---------------------------|---------------------------|---------|
| TC-01 | REQ-06         | normal   | 35 / 20               | Normal                    | Normal                    | Godkänd |
| TC-02 | REQ-02         | normal   | 35 / 40               | För varmt!                | För varmt!                | Godkänd |
| TC-03 | REQ-02         | gräns    | 35 / 35               | För varmt!                | För varmt!                | Godkänd |
| TC-04 | REQ-06         | gräns    | 35 / 34               | Normal                    | Normal                    | Godkänd |
| TC-05 | REQ-04         | utanför  | 35 / 86               | Ogiltig temperatur        | Ogiltig temperatur        | Godkänd |
| TC-06 | REQ-05         | fel text | 35 / abc              | Fel input                 | Fel input                 | Godkänd |
| TC-07 | REQ-03         | gräns    | 35 / 15               | För kallt!                | För kallt!                | Godkänd |
| TC-08 | REQ-07, REQ-02 | gräns    | 30 / 30               | För varmt!                | För varmt!                | Godkänd |
| TC-09 | REQ-07, REQ-06 | gräns    | 30 / 29               | Normal                    | Normal                    | Godkänd |
| TC-10 | REQ-07         | utanför  | 70                    | Gränsen måste vara 0-60°C | Gränsen måste vara 0-60°C | Godkänd |
| TC-11 | REQ-07         | utanför  | -1                    | Gränsen måste vara 0-60°C | Gränsen måste vara 0-60°C | Godkänd |
| TC-11 | REQ-07         | gräns    | 0 / 20                | För varmt!                | För varmt!                | Godkänd |
| TC-12 | REQ-05         | fel text | abc (som gräns)       | Fel input                 | Fel input                 | Godkänd |
