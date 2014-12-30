TowerQuest
==========
Notre projet :

Nous voulons faire un jeu où le joueur va pouvoir sélectionner lui-même ses caractéristiques, et qui va ensuite affronter 
un monstre au hasard tiré parmi une base de monstre prédéfinis.  
Au bout de 3-5 combats, le joueur affrontera un boss qui aura des caractéristiques plus élevées que celles des monstres 
précédents. Ceci sera détaillé dans les spécifications.
Le but de ce jeu sera de survivre le plus longtemps possible en débloquant de nouveaux points de caractéristiques. 
Nous avons pour but de continuer à améliorer ce projet en second semestre. 

Les spécifications :

Comme dit précédemment, nous faisons un programme où le joueur va pouvoir faire des choix concernant ses caractéristiques : 
il nous faut donc des variables, et permettre la saisie. Les règles étant complexes, nous afficherons également une notice 
pour permettre au joueur de mieux s'approprier les règles du jeu. En effet, le joueur a 5 caractéristiques différentes 
(pour une version simplifiée pour le moment, 4) : la vie, la force, la défense, l'agilité (4 principales utilisées pour le 
moment) et (à venir) la volonté.

Il commence avec 8 points dans chaque caractéristique, cela donne :

Vie : 8
Force : 8
Défense : 8
Agilité : 8
(Volonté : 8)

Il a ensuite un capital de 18 points à répartir, cependant :
pour augmenter une caractéristique 
de 8 à 12, on dépense 1 point par niveau
de 12 à 15 : 2 points par niveau
de 15 à 19 : 3 points par niveau
20 et + : 4 points par niveau

exemple : 
j'ai 18 points à dépenser, je veux mettre tous les points dans la force, ce qui donne :

18 points :

force : 8 => 9 (-1 point, reste = 17 points)
9 => 10 (-1 point, reste = 16 points)
10 => 11 (-1 point, reste = 15 points)
11 => 12 (-1 point, reste = 14 points)
12 => 13 (-2 points, reste = 12 points)
13 => 14 (-2 points, reste = 10 points)
14 => 15 (-2 points, reste = 8 points)
15 => 16 (-3 points, reste = 5 points)
16 => 17 (-3 points, reste = 2 points)
17 => 18 impossible car il ne reste pas suffisamment de points (il en reste 2, et il en faut 3)

Je peux donc mettre ces deux derniers points dans une autre caractéristique de mon choix, les répartir comme je le veux.

Les monstres ont été créés manuellement selon le même principe ; cependant un monstre de base aura quant à lui un capital 
de points inférieurs (10 pour le début). Le boss du niveau est créé de façon manuelle, et il a des caractéristiques 
réparties selon le même modèle que le joueur (8 dans chaque + 18 de capital qui lui ont été ajoutés par nos soins).

Le joueur fera un combat contre un monstre créé de façon brute mais tiré aléatoirement : nous faisons les créations manuelles 
sous forme de structures par monstre et nous stockons chaque structure de type monstre dans un tableau. Nous faisons ensuite 
un appel aléatoire à ce tableau qui fournit donc une structure monstre aléatoire. Le joueur ne peut donc pas savoir contre 
quel monstre il va se battre en commençant sa partie. En revanche, les boss ont toujours les mêmes caractéristiques d'une 
partie à l'autre, ce qui permet au joueur d'adapter sa répartition de points une fois qu'il a joué pour la première fois.

Après sa victoire face à un boss, le joueur gagne 5 points en plus à répartir.
Les monstres deviennent plus fort, et le prochain boss également.

(Nous déplorons ici l'absence des pointeurs qui nous aurait permis d'étoffer notre gamme de monstres et de boss en faisant 
une vraie base de donnée)

La partie s'arrête quand le joueur est vaincu ou quand il a battu un nombre prédéfini de boss (nombre maximal que l'on aura 
créé).
Nous allons éventuellement développer l'aspect ludique en ajoutant un scénario. 
Et ensuite étoffer ce projet au second semestre en y ajoutant une interface graphiques et une semi liberté pour le joueur.
Pour résumer, nous avons besoin de faire des tableaux, des structures, des générations aléatoires, des fonctions et définir 
précisément le système de combat (celui-ci n'est pas encore tout à fait défini).
