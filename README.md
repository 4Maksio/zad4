Stwórz program, który będzie wykonywał poniższe operacje na plikach:
- upper - zamienia wszustkie znaki na upper case
- lower - lower case
- find - znajduje dany ciąg znaków
- replace - podmienia dany ciąg znaków

Wszystkie argumenty programu są podawane przez użytkownika podczas uruchomienia przez standardowy mechanizm argumentów:
https://www.codesdope.com/blog/article/arguments-to-main-argc-and-argv/

Przykładowe użycie:

```
./nazwa-programu find 'jakiś tam tekst' nazwa-pliku.txt
./nazwa-programu replace 'jakiś tam tekst' 'jakiś tam inny tekst' nazwa-pliku.txt
./nazwa-programu upper nazwa-pliku.txt nowa-nazwa-pliku-po-operacji.txt
```

Program ma zbierać statystyki, służą do tego klasy Statistics oraz Operation.
Statystyki mają zawierać czas trwania każdej operacji: odczyt pliku, wyszukiwanie, modyfikacja, zapis
Do implementacji klasy Operation należy użyć wzorca RAII

FileOperation to interfejs, do którego trzeba dopisać tyle implementacji ile program ma trybów:
upper, lower, find, replace

Odpowiednią implementacje interfejsu FileOperation powinna tworzyć na podstawie 
odanego stringa 'mode' fabryka FileOperationFactory

Struktura Arguments odpowiedzialna jest za parsowanie i przetrzymywanie argumentów podanych do 
programu. Parsowanie powinno odbywać się w konstruktorze, który należy zaimplementować.
