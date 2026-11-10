# Testfall

| ID    |   Krav | Typ      | Indata | Förväntat          | Faktiskt           | Status  |
|-------|--------|----------|--------|--------------------|--------------------|---------|
| TC-01 | REQ-06 | normal   | 20     | Normal             | Normal             | Godkänd |
| TC-02 | REQ-02 | normal   | 40     | För varmt!         | För varmt!         | Godkänd |
| TC-03 | REQ-02 | gräns    | 35     | För varmt!         | För varmt!         | Godkänd |
| TC-04 | REQ-06 | gräns    | 34     | Normal             | Normal             | Godkänd |
| TC-05 | REQ-04 | utanför  | 86     | Ogiltig temperatur | Ogiltig temperatur | Godkänd |
| TC-06 | REQ-05 | fel text | abc    | Fel input          | Fel input          | Godkänd |
| TC-07 | REQ-03 | gräns    | 15     | För kallt!         | För kallt!         | Godkänd |