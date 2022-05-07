# Descrizione
Qui è mostrato un esempio di attacco nel quale un utente malintenzionato che non conosce la password richiesta da un programma riesce ad aggirare la limitazione modificando l'eseguibile con un "hex editor" (programma che permette di modificare il contenuto dell'eseguibile mostrandolo come esadecimale).



# Attacco
Si supponga di disporre solo dell'eseguibile del compilato di main.cc (qui disponibile per praticità) e di volerne alterare il comportamento.
Dall'analisi del disassemblato è possibile vedere la presenza di un'istruzione JE (Jump if Equal) nel sorgente, identificata dalla sequenza esadecimale 0x74, la quale segue immediatamente il confronto della password fornita dall'utente con quella "corretta".
L'attacco consiste nel sostituire l'istruzione macchina JE con una JNE (Jump if Not Equal), identificata dalla sequenza esadecimale 0x74.

Il procedimento è il seguente:
- ottenere una rappresentazione in esadecimale dell'eseguibile (es.: con il comando xxd)
- sostituire la JE con JNE (banalmente, nell'unico posto in cui compare la sequenza 74 scrivere invece 75)
- convertire nuovamente il file modificato in esguibile
- lanciare l'eseguibile inserendo una pwd qualsiasi (diversa da quella corretta) e si otterrà l'accesso.

P.S.: chiaramente, se si dispone di un hex editor che permette di lavorare direttamente su un unico file conviene utilizzarlo (salvo temere di creare danni irreparabili al sorgente).

