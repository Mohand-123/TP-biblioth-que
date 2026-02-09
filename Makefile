# Makefile pour le projet Bibliotheque

# Utilisation de bash MSYS2 pour Windows
SHELL = C:/msys64/usr/bin/bash.exe

# Regle principale
all: bin/bibliotheque.exe

# Regle pour creer l'executable
bin/bibliotheque.exe: obj/main.o obj/globals.o obj/afficher_infos.o obj/ajouter_livre.o obj/rechercher_livre.o obj/afficher_menu.o
	gcc -Wall -g -Iinc -o bin/bibliotheque.exe obj/main.o obj/globals.o obj/afficher_infos.o obj/ajouter_livre.o obj/rechercher_livre.o obj/afficher_menu.o

# Regles pour compiler les fichiers objets
obj/main.o: src/main.c inc/bibliotheque.h
	gcc -Wall -g -Iinc -c src/main.c -o obj/main.o

obj/globals.o: src/globals.c inc/bibliotheque.h
	gcc -Wall -g -Iinc -c src/globals.c -o obj/globals.o

obj/afficher_infos.o: src/afficher_infos.c inc/bibliotheque.h
	gcc -Wall -g -Iinc -c src/afficher_infos.c -o obj/afficher_infos.o

obj/ajouter_livre.o: src/ajouter_livre.c inc/bibliotheque.h
	gcc -Wall -g -Iinc -c src/ajouter_livre.c -o obj/ajouter_livre.o

obj/rechercher_livre.o: src/rechercher_livre.c inc/bibliotheque.h
	gcc -Wall -g -Iinc -c src/rechercher_livre.c -o obj/rechercher_livre.o

obj/afficher_menu.o: src/afficher_menu.c inc/bibliotheque.h
	gcc -Wall -g -Iinc -c src/afficher_menu.c -o obj/afficher_menu.o

# Regle pour nettoyer
clean:
	rm -rf obj/*.o bin/*.exe

# Regle pour executer
run: all
	bin/bibliotheque.exe

.PHONY: all clean run
