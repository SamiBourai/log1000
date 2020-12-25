# Correction du TP2

## Question 1 (7/10)

---

**Diagramme de cas d'utilisation (2.5/5)**

> Il y beaucoup d'éléments dans le schéma, je dirais même trop ;)

> Pour faire la distinction entre `Prendre un Rendez-vous automatique` et `Prendre un rendez-vous par Consultation du Profil`, il aurait été plus propre d'utiliser la relation d'héritage et de généraliser ces deux cas d'utilisation en `Prendre un Rendez-vous`.

> Votre schéma est en deux parties non interconnectées. Je ne crois pas que ce soit normal.

> Vous avez des flèches sans extend, include ou héritage. Normalement, on n'utilise pas celle-ci entre les cas d'utilisation, mais seulement entre les acteurs et les cas d'utilisation.

> Vérifier Infirmiere Disponible est une réaction du système et non pas une action de l'utilisateur.

> Se connecter est dédoublé.

> En somme, j'ai de la difficulté à comprendre tout le schéma.

**Description détaillée sous forme de tableau correspondant au cas d'utilisation (4.5/5)**

## Question 2 (3.5/5)

---

**Diagramme de séquence pour la prise de rendez-vous avec une infirmière (3.5/5)**

> Vous auriez pu mettre les séquences alt. dispo/indispo en commun aux séquences alt. automatique/par consultation du profil.

> Pour certain point de l'axe du temps, il y a plusieurs flèches.

## Question 3 (4/5)

---

**Diagramme de classes pour l’ensemble de votre application (4/5)**

> Attention à ne pas mettre en attribut une classe qui est déjà lié par une relation. Ex. Lieu dans Profil, mais aussi visible par la relation entre lieu et profil.

> Pourquoi association entre Patient et Carte. On aurait pu être plus précis et parler d'aggrégation.

# Total (14.5/20)
