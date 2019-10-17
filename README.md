# Enigma coders

PROBLEM:
	There are many people who wish to donate their organs after their death but many organs decay within 15 minutes of their death. So many needy people could not be treated on time. The main reason behind it :
	1.Family is not able to communicate the hospital in the required time.
	2.Due to Traffic Jams the Ambulance can’t make it in time.
This is also the reason for death of many people.
SOLUTION:
	1.To tackle these conditions,an app must be there which must be installed in all hospitals and every person’s mobile so that after someone’s death a family member just has to go through the app and a notification will be automatically sent to all reg. hospitals in that city, and a hospital will claim that request and reach asap.
 	2.To make ambulance find the way all the traffic lights of that zone will have some central control and when a required site is entered all traffic lights from ambulance to that site will be automatically set green.
IMPLEMENTATION
Android App will have two logins –one for Hospital which will have authentication number of each hospital and other for common mass which will be link link with Aadhar for authenticity. Just after death a family member have to fill a small form and a notification will be sent to all hospitals in zone and one of them will claim (just like OLA Drivers) and will sent a notification to control room where through IoT (using NodeMCU) all the traffic lights from ambulance to site will be turned green and other red hence provide a JAM Free path for ambulance. This feature can also be also used where ever the requirement of ambulance comes. 
TECHNICAL IMPLEMENTATION
An app will made in under Android Studio. Notification of death will be sent to Hospitals in their chat box to which they have to reply and once reply is done other replies will be cut by if else statement. Login Server will be made under JAVA. Aadhar will be connected by linking to UIDAI(govt. Feasible).App will also be link to google map which will show the shortest root to ambulance once this shortest root is detected all the Traffic Lights (which were connected through ESP8228 or Node MCU) coming in that shortest root turn green and corresponding will turn red.
