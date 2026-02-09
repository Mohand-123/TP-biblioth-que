# Makefile pour le projet Bibliotheque avec structure organisée

# Utilisation de bash MSYS2 pour Windows
SHELL = C:/msys64/usr/bin/bash.exe
CC = gcc
CFLAGS = -Wall -g -Iinc

# Répertoires
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc
EXE_DIR = exe
LIB_DIR = lib

# Fichiers sources
SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/bibliotheque.c
OBJS = $(OBJ_DIR)/main.o $(OBJ_DIR)/bibliotheque.o
TARGET = $(EXE_DIR)/bibliotheque.exe

# Règle principale
all: $(TARGET)

# Règle pour créer l'exécutable
$(TARGET): $(OBJS) | $(EXE_DIR)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Règle pour compiler les fichiers objets
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/bibliotheque.h | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Créer les répertoires s'ils n'existent pas
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(EXE_DIR):
	mkdir -p $(EXE_DIR)

# Règle pour nettoyer
clean:
	rm -rf $(OBJ_DIR)/*.o $(EXE_DIR)/*.exe

# Règle pour exécuter
run: all
	$(TARGET)

.PHONY: all clean run
