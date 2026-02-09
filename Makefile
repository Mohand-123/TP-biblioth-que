# Makefile pour le projet Bibliotheque

# Utilisation de bash MSYS2 pour Windows
SHELL = C:/msys64/usr/bin/bash.exe
CC = gcc
CFLAGS = -Wall -g

# Fichiers sources
SRCS = main.c bibliotheque.c
TARGET = bibliotheque.exe

# Règle principale
all: $(TARGET)

# Règle pour créer l'exécutable
$(TARGET): $(SRCS) bibliotheque.h
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# Règle pour nettoyer
clean:
	rm -f *.o $(TARGET)

# Règle pour exécuter
run: all
	./$(TARGET)

.PHONY: all clean run
