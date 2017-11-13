## CityIoTary: A Real Waste Management and Pollutuion Monitoring System Based on IoT
Internet of Things based Smart City Pollution monitoring and Waste Management system strives to develope a sustainable and low cost system using minimum requirements.<br>
**Requirements**
```
Python 2.7
requests
googlemaps
Flask
Map API-JS
Arduino
```
We have tried to establish communication between Dustbins across the city and the Admin (Assumed Municipalities). The objective of the project was to:
- Establish communication between Dustbins across the city using just the existing network.
- Use Google's Waypoints API for optimizing routes between various different dustbins.
- Triggering alerts to Municipalities everytime dustbins are filled 70% of the volume.
- Tree like  distribution algorithm.<br>
**Usage**
- Find the ino file and burn in the Arduino for given connections of IR sensor.
- Using pyserial read the values and in a global variable having pre stored arrays
- send the requests for coordinates in API.
- On server the routes are optimized.

**This is still in development phase, Will include more files and codes for requests and python API**<br>
It was implemented in Smart Cities Hackathon at JUIT, Waknaghat and bagged 3rd Prize. 
