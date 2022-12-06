# Instructable

Een instructable is een stappenplan - zonder verdere uitleg - hoe je vertrekkend van de bill of materials en gebruik makend van de technische tekeningen de robot kan nabouwen. Ook de nodige stappen om de microcontroller te compileren en te uploaden staan beschreven.  

### Stap 1: Verzamel alle benodigdheden  
  
      • Benodigde materialen volgens “BOM” in het technisch dossier 
      • Benodigde software volgens “Software” in het technisch dossier 
      • Soldeermateriaal 
        o Soldeerbout 
        o Soldeerflux 
        o Soldeertin 
      • Multimeter 

### Stap 2:  Verkrijgen materialen
    
   Waar deze materialen te verkrijgen zijn staat uitgelegd bij het desbetreffende onderwerp. Bestel alles tijdig en voorzie voldoende reserve componenten      voor foutieve of defecte componenten te kunnen vervangen.
    
### Stap 3: Solderen van printplaat met componenten

   De printplaat wordt gesoldeerd in volgende stappen, volgens de schema’s terug te vinden in Linefollower -> technische tekeningen Elektrisch Schema ->                        Schematic_Elektisch Schema B_2022: 
   
      • Stap 1: Voeding 
      • Stap 2: Microcontroller 
      • Stap 3: Draadloze communicatie 
      • Stap 4: H-brug 
      • Stap 5: Sensoren
        
   Bij het solderen testen we veel of de componenten correct gesoldeerd zijn. Is bij een test het resultaat niet gewenst, bekijk of de laatst                  aangesloten      componenten correct staan. Staan ze fout of zijn er slechte aansluitingen? Soldeer deze componenten dan opnieuw. 
   Bij het testen moet men altijd rekening houden met de volgende stappen:
        
     •  Plaats opgeladen batterijen in houder 
     •  Verbindt de correcte pinnen van header H1 
     •  Voer de tests uit 
     •  Verwijder de batterijen
       
   Als er programma’s dienen geüpload te worden tijdens het testen, gebeurd dit volgens de stappen terug te vinden bij deel: V. Installeren van een            programma.
        
  ### Stap 4: Ontwerp  
  
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
      
  ### Stap 5: Instellen HM-10  module     
  Het instellen van de HM-10  module gebeurt met AT-commando’s. Deze zijn terug te vinden in volgende link: https://people.ece.cornell.edu/land/courses/ece4760/PIC32/uart/HM10/DSD%20TECH%20HM-10%20datasheet.pdf  
  Installeer het programma “Bluetooth”. Open de Arduino IDE en open de seriële monitor. Hier plaatsen we de baudrate op 9600. Daarna stellen we de HM-10 
  module in met volgende commando’s:
  
      •AT 
      •Controleert connectie: antwoord “OK” 
      •AT+NAME<uw naam> o Wijzigt naam naar “uwnaam”: antwoord “OK<uwnaam>” 
      •AT+BAUD<nummer> 
      •Wijzigt baudrate (voor ons naar nummer 4:9600): antwoord “OK<nummer>” 
      •AT-PIN<pincode> o Wijzigt pincode: antwoord “OK<pincode>” 
      •AT+RESET o Resets bluetooth module
      
   Hierna is de HC-05 module ingesteld naar jouw voorkeur en klaar voor gebruik.
  
   ### Stap 6: Verbinden bluetooth 
   
   Het verbinden met bluetooth gebeurd met de bluetooth app en de linefollower. Dit kan enkel nadat de bluetooth module is ingesteld bij stap 5.
   Voor het instellen van HM-10 module gebeurt in volgende stappen:
   
      1.	Installeer de app op uw Android toestel via play store en type: Serial Bluetooth Terminal in.
      2.	Voorzie de linefollower van spanning 
      3.	Verbind het Android toestel met de linefollower via bluetooth 
        a.	Zoek hierbij naar de naam die je hebt ingesteld 
        b.	Indien nodig, geef de code in die je hebt ingesteld 
      4.	Open de Serial Bluetooth Terminal op het Android toestel 
      5.	Ga naar “devices” 
      6.	Druk op de ingestelde naam van jouw bluetooth module 
        a.	Indien nodig, geef de code in die je hebt ingesteld 
      7.	Ga naar “terminal” 
      8.	Druk op het connect icoon rechts boven 
        a.	In de terminal verschijnt: 
          i. Connecting…
          ii. Connected 
      9.	Hierna is de connectie bevestigd 
      10.	Onderaan kunnen nu commando’s getypt worden en verzonden met het pijltje erna 
         a.	De verzonden commando’s verschijnen in de terminal 
         b.	Ook de antwoorden zullen te lezen zijn in de terminal

   ### Stap 7: Programma en hun gebruik 
        Bluetooth 
            Met dit programma stellen we onze bluetooth module in, zoals uitgelegd in: VI. Instellen HC-06 module. 
            Houdt de linefollower gedurende de werking van dit programma verbonden via kabel. 
        Blink 
            Dit programma wordt gebruikt voor het controleren van de microcontroller en de bluetooth communicatie.
	    Dit gaat aan de hand van volgende commando’s en hun gewenste resultaat:
	    
          Vanaf het begin pinkt een led cyclisch mee. 
              •	Set debug on o Laat cyclisch antwoorden: “loop still running” 
              •	Set debug off o Stopt cyclisch antwoorden: “loop still running” 
              •	Set cycle “cyclustijd” o Veranderd de cyclustijd van het pinken 
                o	Antwoord: “Cycle time: “cyclustijd” microseconden” 
              •	Set getal “getal” o Stelt het getal in, in de parameter “getal” o Antwoord: “getal: “getal”” 
              •	Debug 
                  o	Geeft alle ingestelde waarde weer o Antwoorden: 
              ▪	“Cycle time: “cyclustijd” microseconden” 
              ▪	“Calculation time: “calculatietijd” microseconden” 

        Buttons 
           Controleert de werking van de drukknoppen. Volgende werking is gewenst: 
              •	Indrukken van 2 knoppen o Een led gaat aan en uit cyclisch 
              •	Indrukken van 1 knop o Een led blijft constant aan 
              •	Indrukken van geen knoppen o Een led blijft uit 
              Als dit correct is zijn de drukknoppen correct gesoldeerd. 
 	 
      H-brug 
          Controleert de werking van de H-brug en motoren. Dit door middel van volgende commando’s: 
              •	Start o Start en stopt de werking van de motoren o Antwoorden: “Started” of “Stopped” 
              •	Reset 
                o	Zet alle waarden terug naar de originele instellingen   
                  o Antwoord: “Reset done” 
              •	Debug: 
                o	Geeft alle ingestelde waarden weer 
                o Antwoorden: 
                  ▪	“Cycle time: “cyclustijd” microseconden” 
                  ▪	“Left: “powerLeft”” 
              •	Deze mag ingesteld worden tussen 255 en -255 
                  ▪	“Right: “powerRight”” 
                  ▪	“Calculation time: “calculatietijd” microseconden” 
              •	Set cycle “cyclustijd” o Stelt de cyclustijd in naar de gewenste waarde 
              •	Set left o Stelt de snelheid en draairichting van de linkse motor in o Deze mag ingesteld worden tussen 255 en -255 
                ▪	Als deze waarde positief is draait de motor vooruit 
                ▪	Hoe positiever de waarde hoe sneller deze draait 
                ▪	Als deze waarde negatief is draait de motor achteruit 
                ▪	Hoe negatiever de waarde hoe sneller deze draait 
              •	Set right o Stelt de snelheid en draairichting van de rechtse motor in o Deze mag ingesteld worden tussen 255 en -255 
                ▪	Als deze waarde positief is draait de motor vooruit 
                ▪	Hoe positiever de waarde hoe sneller deze draait 
                ▪	Als deze waarde negatief is draait de motor achteruit 
                ▪	Hoe negatiever de waarde hoe sneller deze draait 
              Test de correcte werking van de motoren door beiden vooruit en achteruit te laten draaien op verschillende snelheden. 
 	 
      Sensoren 
          Controleert de werking van de sensoren. Dit door middel van volgende commando’s: 
          •	Debug: 
            o Geeft alle ingestelde waarden weer o Antwoorden: 
              ▪	“Cycle time: “cyclustijd” microseconden” 
              ▪	“Calculation time: “calculatietijd” microseconden” 
              ▪	“calibration white: “6 sensorwaarden”” op een wit achtergrond
          • 	Deze waarden moeten zo laag mogelijk zijn
	            ▪ “calibration black: “6 sensorwaarden”” op een zwart achtergrond
          •	Deze waarden moeten zo dicht mogelijk bij 1024 liggen 
	            ▪ 	“sensors: “6 huidige sensorwaarden”” 
          •	Waar lijn is moet bij de overeenkomstige sensoren de waardes hoog liggen, bij de overige sensoren de waardes laag 
          • Set cycle “cyclustijd”
             o Stelt de cyclustijd in naar de gewenste waarde 
          •	Calibrate black o Plaats de sensoren boven een zwart vlak en voer dit commando in 
             o Antwoord: “start calibrating black… ” 
             o Eenmaal klaar antwoord: “done” 
          •	Calibrate white o Plaats de sensoren boven een wit vlak en voer dit commando in
              o Antwoord: “start calibrating white… ”
              o Eenmaal klaar antwoord: “done” 
          Test de correctheid van de sensoren door de kalibratie en door een zwart lijn op verschillende plaatsen 
	  onder sensoren door te laten gaan en te zien dat de waardes overeenkomen. 
 	 
   ### Stap 8: Finaal programma

          Met dit programma wordt de volledige linefollower aangestuurd. Dit programma werkt met volgende commando’s: 
          •	Debug: 
            o Geeft alle ingestelde waarden weer o Antwoorden: 
              ▪	“Cycle time: “cyclustijd” microseconden” 
              ▪	“kp: “kp-waarde”” 
              ▪	“ki: “ki-waarde”” 
              ▪	“kd: “kd-waarde”” 
              ▪	“diff: “diff-waarde”” 
              ▪	“power: “power-waarde”” 
              ▪	“Calculation time: “calculatietijd”” 
              ▪	“calibration white: “6 sensorwaarden”” 
          •	Deze waarden moeten zo laag mogelijk zijn 
	            ▪	“calibration black: “6 sensorwaarden”” 
          •	Deze waarden moeten zo dicht mogelijk bij 1024 liggen 
              ▪	“sensors: “6 huidige sensorwaarden”” 
          •	Waar lijn is moet bij de overeenkomstige sensoren de waardes hoog liggen, bij de overige sensoren de waardes laag 
              ▪	“position: “huidige positie lijn”” 
          •	Set cycle “waarde” o Stelt de cyclustijd in naar de gewenste waarde 
          •	Set kp “waarde” o Stelt de kp-waarde in naar de gewenste waarde 
          •	Set ki “waarde” o Stelt de ki-waarde in naar de gewenste waarde 
          •	Set kd “waarde” o Stelt de kd-waarde in naar de gewenste waarde 
          •	Set diff “waarde” o Stelt de diff-waarde in naar de gewenste waarde, deze moet tussen 0 en 1 liggen 
          •	Set power “waarde” 
            o Stelt de power-waarde in naar de gewenste waarde 
          •	Calibrate black 
            o Plaats de sensoren boven een zwart vlak en voer dit commando in 
              o Antwoord: “start calibrating black… ” 
              o Eenmaal klaar antwoord: “done” 
          •	Calibrate white 
            o Plaats de sensoren boven een wit vlak en voer dit commando in 
              o Antwoord: “start calibrating white… ” 
              o Eenmaal klaar antwoord: “done” 
 
   ### Stap 9: Gebruik linefollower
   
       Eenmaal je verbonden bent met bluetooth door middel van stap 6 (Verbinden met bluetooth) kan je via bluetooth communiceren met de linefollower
	volgens de commando’s weergegeven in stap 7.
	Pogramma’s en hun gebruik -> Finaal programma. Hiermee kan men testen om de limieten van de linefollower op te zoeken.
         
        Ingestelde waarden 
        Tijdens het testen van onze linefollower kwamen we bij deze instellingen de beste waarden uit:  
          •	Cycle time: 1300
          •	Kp: 15 
          •	Ki: 0 
          •	Kd: 0.25 
          •	Diff: 0.2 
          •	Power: 100
        Dit leverde een resultaat op met een snelheid van 0.55 m/s 

   
   
