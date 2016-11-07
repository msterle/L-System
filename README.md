L-System
========

Description
-----------

A generic L-System implementation in C++. Example code includes a simple tree/shrub grammar(source: https://en.wikipedia.org/wiki/L-system)

Sample Output
-------------
```
Seed
----
X

n = 1
----
F−[[X]+X]+F[+FX]−X

n = 2
----
FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X

n = 3
----
FFFF[[FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FFFF[+FFFFFF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X

n = 4
----
FFFFFFFF[[FFFF[[FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FFFF[+FFFFFF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FFFF[[FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FFFF[+FFFFFF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FFFFFFFF[+FFFFFFFFFFFF[[FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FFFF[+FFFFFF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]FFFF[[FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]+FFFF[+FFFFFF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X]FF[[F−[[X]+X]+F[+FX]−X]+F−[[X]+X]+F[+FX]−X]+FF[+FFF−[[X]+X]+F[+FX]−X]F−[[X]+X]+F[+FX]−X
```
References
----------