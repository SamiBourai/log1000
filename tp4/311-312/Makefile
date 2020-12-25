# Fichier exécutable produit
EXEC=commerce_en_ligne
# Répertoire contenant les fichiers source
SOURCE=src
# Répertoire contenant les fichiers compilés
BINAIRE=bin
########################
# Répertoire contenant les données utilisées par le logiciel
#DONNEES=data
# Nom du fichier contenant les données
#CLIENTS=clients.dat
#Repertoire contenant les tests
##########################
TESTS=test
EXECTEST = commerce_en_ligne_test



# =======================
# Compilation du logiciel
# =======================

# commande par défaut, construit un exécutable appelé $(EXEC) et le lance.
all: $(BINAIRE)/$(EXEC)

# Fait le "linking" entre les fichiers objets pour produire l'exécutable
$(BINAIRE)/$(EXEC): $(BINAIRE)/main.o $(BINAIRE)/Client.o $(BINAIRE)/Panier.o $(BINAIRE)/Produit.o $(BINAIRE)/Rayon.o
	g++ -o $@ $^ 

# Compile le "main" pour produire le fichier objet.
$(BINAIRE)/main.o: $(SOURCE)/main.cpp $(SOURCE)/Client.h $(SOURCE)/Panier.h $(SOURCE)/Produit.h $(SOURCE)/Rayon.h 
	mkdir -p $(BINAIRE)
	g++ -o $@ -c $<

# Compile la classe Client pour produire le fichier objet.
$(BINAIRE)/Client.o: $(SOURCE)/Client.cpp $(SOURCE)/Client.h $(SOURCE)/Panier.h
	g++ -o $@ -c $<

# Compile la classe Panier pour produire le fichier objet.
$(BINAIRE)/Panier.o: $(SOURCE)/Panier.cpp $(SOURCE)/Panier.h $(SOURCE)/Produit.h
	g++ -o $@ -c $<

# Compile la classe Produit pour produire le fichier objet.
$(BINAIRE)/Produit.o: $(SOURCE)/Produit.cpp $(SOURCE)/Produit.h
	g++ -o $@ -c $<

# Conmpile la classe Rayon pour produire le fichier objet.
$(BINAIRE)/Rayon.o: $(SOURCE)/Rayon.cpp $(SOURCE)/Rayon.h $(SOURCE)/Produit.h
	g++ -o $@ -c $<

# ===========
# Utilitaires
# ===========

# Enlève l'exécutable et les fichiers objets intermédiaires.
clean: 
	rm -rf $(TESTS)/$(BINAIRE)/$(EXECTEST) $(BINAIRE)/$(EXEC) $(BINAIRE)/*.o $(TESTS)/$(BINAIRE)/*.o 
	
# =================
# Tests du logiciel
# ================= $(TESTS)/$(BINAIRE)/$(EXECTEST) $(BINAIRE)/$(EXEC) $(BINAIRE)/*.o $(TESTS)/$(BINAIRE)/*.o 

test: $(TESTS)/$(BINAIRE)/$(EXECTEST)
	./$(TESTS)/$(BINAIRE)/$(EXECTEST)

$(TESTS)/$(BINAIRE)/$(EXECTEST): $(TESTS)/$(BINAIRE)/main.o $(TESTS)/$(BINAIRE)/test.o $(TESTS)/$(BINAIRE)/Client.o $(TESTS)/$(BINAIRE)/Panier.o $(TESTS)/$(BINAIRE)/Produit.o $(TESTS)/$(BINAIRE)/Rayon.o
	g++ -o $@ $^ -lcppunit

$(TESTS)/$(BINAIRE)/test.o: $(TESTS)/$(SOURCE)/test.cpp $(TESTS)/$(SOURCE)/test.h $(SOURCE)/Produit.h $(SOURCE)/Rayon.h $(SOURCE)/Client.h $(SOURCE)/Panier.h
	g++ -o $@ -c $<


$(TESTS)/$(BINAIRE)/main.o: $(TESTS)/$(SOURCE)/main.cpp $(TESTS)/$(SOURCE)/test.h
	mkdir -p $(TESTS)/$(BINAIRE)
	g++ -o $@ -c $<

$(TESTS)/$(BINAIRE)/Client.o: $(SOURCE)/Client.cpp $(SOURCE)/Client.h $(SOURCE)/Panier.h
	g++ -o $@ -c $<

$(TESTS)/$(BINAIRE)/Panier.o: $(SOURCE)/Panier.cpp $(SOURCE)/Panier.h $(SOURCE)/Produit.h
	g++ -o $@ -c $<

$(TESTS)/$(BINAIRE)/Produit.o: $(SOURCE)/Produit.cpp $(SOURCE)/Produit.h
	g++ -o $@ -c $<

$(TESTS)/$(BINAIRE)/Rayon.o: $(SOURCE)/Rayon.cpp $(SOURCE)/Rayon.h $(SOURCE)/Produit.h
	g++ -o $@ -c $<


