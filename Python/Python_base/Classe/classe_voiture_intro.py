
# Introduction sur les classes

class Voiture:
    nb_voiture=0
    def __init__(self,marque):
        Voiture.nb_voiture+=1
        self.marque=marque

#Instance 1:
ma_voiture=Voiture("Audi")
print(ma_voiture.marque)
print(Voiture.nb_voiture)

#Instance 2:
ta_voiture=Voiture("Peugeot")
print(ta_voiture.marque)
print(Voiture.nb_voiture)