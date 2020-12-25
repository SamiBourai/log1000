# Correction TP5

## E1) Une mauvaise odeur dans les attributs [5/5]

---

## E2) Une mauvaise odeur dans les classes [3.5/4]

---

> L'autre problème est qu'actuellement tout est typé en tant que string.

## E3) Une mauvaise odeur dans les méthodes [8/9]

---

> a4) Les commentaires sont inutiles, car les noms des méthodes créés sont sensées auto-documenter le code. Aussi, vous auriez pu extraire le code dans 4 méthodes différentes plutôt que 2, afin de complètement effectué la restructuration. Par exemple, une méthode displayFilteredAppointments aurait été envisageable.

## E4) Utilisation des variables [2.5/5]

---

> Il reste beaucoup de mauvaises odeurs dans votre main. N'oubliez pas que ces métriques (span, portée, durée de vie) sont des indicateurs que quelque chose cloche dans le code (et qu'il y a des mauvaises odeurs). Les commentaires dans le main sont tous inutiles et auraient dû être retiré. Cela aurait permi d'améliorer les métriques ci-haut. Le case 2 comporte du code mort, car il y a du code après l'instruction break. Finalement et surtout, le code de chacun des cases aurait dû être extrait dans des méthodes. Alors là, vous auriez eu une méthode main exempte de gros défauts de code :)

## E5) Tests [2/2]

---

## Note finale

---

TOTAL: [21/25]
