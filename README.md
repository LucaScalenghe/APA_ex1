# APA_ex1
This was my first exercise for my APA exam at Politecnico di Torino

L’esercizio richiede di scrivere una funzione void buildAndPrint(int* V,int N,int **M,int r,int c)

dato un vettore V di numeri interi e di inserire x volte un numero y in una matrice utilizzando la
tecnica del row-major.
I valori x e y vengono presi a coppie dal vettore dato.
Dentro la funzione che si deve realizzare ai fini dell’esercizio viene allocato un vettore Q così da
poter intuitivamente inserire tutti i valori y su una stessa “linea”.
Viene scandito il vettore V con un indice i che parte da zero e viene incrementato di due, mentre
il vettore Q viene scandito dall’indice j ottenendo quindi un doppio ciclo annidato. Si inserisce in
Q il valore che si trova in V[i+1]. Ad ogni fine del ciclo più interno viene salvata la posizione
corrente di j in lastpos così da poter proseguire da quel punto con la nuova coppia di valori.
In un secondo momento viene scandito il vettore Q con un variabile y che viene incrementata a
ogni inserimento nella matrice. La posizione corretta nella matrice si ottiene con un indice i che
scandisce le righe, mentre un for più interno scandisce j che partirà sempre da i%c e scandirà i
valori compresi da zero a c-1.
Infine con un doppio ciclo for si passa alla stampa della matrice con i valori inseriti correttamente.
Viene, come ultimo passaggio viene liberato il puntatore a Q allocato in precedenza tramite la
funzione free()
