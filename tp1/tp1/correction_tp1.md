## Section 4.1. Git : Initialisation de votre répertoire (2pts)
___

4.1.1. Saisie d’écran du git log [1/1]

4.1.2. Différence entre git log et git log -p [0/1]

> En fait, ce n'est pas seulement pour le dernier commit, mais pour tous les commits de l'historique. Vous pouvez faire défiler le terminal avec les flèches :)

## Section 4.2. Git : Modification et gestion de conflit (24pts)
___

4.2.1. Quelles sont les commandes utilisées? [2/2]

4.2.2. A quoi correspond la petite étoile à coté de la première branche ? [1/1]

4.2.3. Saisie d’écran du git status [1/1]

4.2.4. Est-ce que cette sortie est normale ? [0/1]

> Il n'y a pas de `serveur local`. On parle en fait du repository local. De manière plus précise, on aurait voulu dire que les modifications n'ont pas encore été validées.

4.2.5. Quelles sont les commandes que vous devez utiliser ? [3/3]

4.2.6. Quelle est la différence entre la première et la troisième branche? [1/1]

4.2.7. Saisie d’écran du git merge master [1/1]

4.2.8. Est-ce que cette sortie est normale ? [1/1]

4.2.9. Saisie d’écran du git push origin master [1/1]

4.2.10. Est-ce que cette sortie est normale ? [1/1]

4.2.11. Saisie d’écran du git merge origin/master [1/1]

4.2.12. Est-ce que cette sortie est normale ? [1/1]

4.2.13. Saisie d’écran du git push origin master du coéquipier #2 [1/1]

4.2.14. Saisie d’écran du git merge origin/master pour le coéquipier #1 [1/1]

4.2.15. Est-ce que cette sortie est normales ? [1/1]

4.2.16. Quelle est cette commande ? [1/1]

4.2.17. Saisie d’écran du git push origin master [1/1]

4.2.18. Résolution du conflit [4/4]

## Section 4.3. Make : Modification du code (4pts)
___

4.3.1. Saisie d’écran du ./newton 49 3 pour le ou la coéquipièrE #1 [1/1]

4.3.2. Saisie d’écran du ./newton 49 3 pour le ou la coéquipièrE #2 [1/1]

4.3.3. Saisie d’écran du ./newton 49 3 pour le ou la coéquipièrE qui a modifié le code [1/1]

4.3.4. Saisie d’écran du git push origin master pour le ou la coéquipièrE qui a modifié le code [1/1]

## Section 4.4, Make : Ajustement du Makefile (1pts)
___

4.4.1. Saisie d’écran du make et du ./newton 49 3 [1/1]

## Section 4.5. Make : Ajout de nouvelles commandes (1pts)
___

4.5.1. Saisie d’écran du make install [1/1]

## État du serveur (11pts)

Contenu du main.c final sur le serveur [2/2]

Makefile final sur le serveur contient les symboles @, &lt; et ^ appropriés [5/5]

Makefile final sur le serveur contient un make install approprié [2/4]

> Il ne faut pas utiliser de commande `make` dans la liste des commande associé à une cible. Vous pouvez plutôt lister les cibles à construire dans votre liste de dépendances ainsi:

```
install: $(EXEC)
	mkdir -p install
	cp -f $(EXEC) install
```

## Section 5. Rétroaction (0pts)
___

5.1. Temps passé sur le travail pratique [/0]

5.2. Recommandations [/0]

## Section 7. Livrable (2pts)
___

7.1 Création du tag « TP1 » sur votre commit final [2/2]

## Note finale
___
TOTAL: [41/45]