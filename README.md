# URA-Homework-3
Fakultet elektrotehnike Tuzla - Uvod u racunarske algoritme


## Napomena

U svim problemima koji slijede nije dozvoljena upotreba komandi i funkcija koje dosad nisu
korištene na predavanjima ili vježbama. Dozvoljena je upotreba kontejnera iz standardne
biblioteke (​std::vector​ i ​std::list​)​, kao i C nizova.

## Zadatak 1:

Posmatrati ​ _merge sort_ ​ algoritam kao algoritam za sortiranje u mjestu (​ _in-place_ ​algoritam -
algoritam koji transformiše ulaz korištenjem konstantne memorije, izvodi se na orginalnom
nizu). Ilustrirati izvršavanje algoritma na sljedećem nizu cijelih brojeva:
**A = {3, 13, 89, 34, 21, 44, 99, 56,9};**
Za svaku iteraciju izvršenja algoritma napisati sadržaj niza u tom trenutku.

## Zadatak 2:

Implementirati funkciju ​ **pronadjiNajmanji** ​ ​koja vraća najmanji element proslijeđenog
niza korištenjem ​ _divide and conquer_ ​strategije.
**int pronadjiNajmanji(int*, int);**

## Zadatak 3:

Potrebno je implementirati ​ _divide and conquer_ ​ algoritam koji u O(logN) vremenu pronalazi
minimalan element u cirkularno pomjerenom sortiranom nizu.
Naprimjer, ukoliko imamo sortiran niz ​ **A = {1, 2, 3, 4, 5, 6}** ​cirkularno pomjeren niz
za 2 elementa je ​ **A’ = {5, 6, 1, 2, 3, 4}.**

## Zadatak 4:

a)
Implementirati quick sort algoritam. Implementaciju testirati na nizu od 20000 elemenata.


b)
U najboljem slučaju pivot dijeli niz napola za sve rekurzivne pozive. Potrebno je naći
sekvencu od 3 broja i sekvencu od 7 brojeva koja uzrokuje ovaj najbolji slučaj. (Hint: za
sekvencu od 7 brojeva, prva dva rekurzivna poziva trebaju biti nad sekvencama od 3 broja)
