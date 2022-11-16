# Instructable

Een instructable is een stappenplan - zonder verdere uitleg - hoe je vertrekkend van de bill of materials en gebruik makend van de technische tekeningen de robot kan nabouwen. Ook de nodige stappen om de microcontroller te compileren en te uploaden staan beschreven.  

### stap 1: Verzamel alle benodigdheden  
  
      • Benodigde materialen volgens “BOM” in het technisch dossier 
      • Benodigde software volgens “Software” in het technisch dossier 
      • Soldeermateriaal o Soldeerbout o Soldeerflux o Soldeertin 
      • Multimeter 

### stap 2:  Verkrijgen materialen
    Waar deze materialen te verkrijgen zijn staat uitgelegd bij het desbetreffende onderwerp. Bestel alles tijdig en voorzie voldoende reserve componenten       voor foutieve of defecte componenten te kunnen vervangen.
    
### stap 3: Solderen van printplaat met componenten
   De printplaat wordt gesoldeerd in volgende stappen, volgens de schema’s terug te vinden in Linefollower -> technische tekeningen Elektrisch Schema ->        Schematic_Elektisch Schema B_2022: 
   
      • Stap 1: Voeding 
      • Stap 2: Microcontroller 
      • Stap 3: Draadloze communicatie 
      • Stap 4: H-brug 
      • Stap 5: Sensoren
        
   Bij het solderen testen we veel of de componenten correct gesoldeerd zijn. Is bij een test het resultaat niet gewenst, bekijk of de laatst                  aangesloten componenten correct staan. Staan ze fout of zijn er slechte aansluitingen? Soldeer deze componenten dan opnieuw. 
   Bij het testen moet men altijd rekening houden met de volgende stappen:
        
     •  Plaats opgeladen batterijen in houder 
     •  Verbindt de correcte pinnen van header H1 
     •  Voer de tests uit 
     •  Verwijder de batterijen
       
   Als er programma’s dienen geüpload te worden tijdens het testen, gebeurd dit volgens de stappen terug te vinden bij deel: V. Installeren van een            programma.
        
  ### stap 4: Ontwerp  
   Het 3D-printen van de ontworpen onderdelen die men kan vinden in Linefollower -> technische tekeningen -> mechanische tekeningen -> Arduino-                ondersteuning.stl, linefollower_verbeterd.stl en ondersteuning motor.stl.
     
      • Eerst moet alles gesoldeerd worden: Sensor, H-brug en de motorenen
      • Bij linefollower_verbeterd.stl worden M4 bouten gebruikt voor de moteren te bevestigen met de ondersteuning motor.stl
      • Daarna wordt er een M4 bout gebruikt voor de voorkant van de linefollower_verbeterd.stl de hoogte in te stellen van de grond
      • Dan worden de wielen bevestigd aan de motoren.
      • Vervolgens wordt de sensor bevestigd op de linefollower_verbeterd.stl aan de voorkant bij de voorziene gaten.
      • Ook wordt de batterijhouder met betterijen gemonteerd aan de linefollower_verbeterd.stl
      • Dan zullen er M5 bouten met moeren de linefollower_verbeterd.stl en de Arduino-ondersteuning.stl met elkaar bevestigen
      • Hierbij zal de Arduino met de printplaatje gemonteerd worden op de Arduino-ondersteuning.st
      • Als laatste kunnen men dan de H-brug, drukknop, bleuthooth module en de wipschakelaar aansluiten op de arduino
      
  ### stap 5: Instellen HM-10 module     
  Het instellen van de HM-10 module gebeurt met AT-commando’s. Deze zijn terug te vinden in volgende link: https://people.ece.cornell.edu/land/courses/ece4760/PIC32/uart/HM10/DSD%20TECH%20HM-10%20datasheet.pdf  
  Installeer het programma “Bluetooth”. Open de Arduino IDE en open de seriële monitor. Hier plaatsen we de baudrate op 9600. Daarna stellen we de HM-10       module in met volgende commando’s:
  
      •AT 
      •Controleert connectie: antwoord “OK” 
      •AT+NAME<uw naam> o Wijzigt naam naar “uwnaam”: antwoord “OK<uwnaam>” 
      •AT+BAUD<nummer> 
      •Wijzigt baudrate (voor ons naar nummer 4:9600): antwoord “OK<nummer>” 
      •AT-PIN<pincode> o Wijzigt pincode: antwoord “OK<pincode>” 
      •AT+RESET o Resets bluetooth module
      
  Hierna is de HM-10 module ingesteld naar jouw voorkeur en klaar voor gebruik.
  
   ### stap 6: Verbinden bluetooth 
