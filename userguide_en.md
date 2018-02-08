<h1>HowTo101 - How to set up and use iSpindel with ubidots.com</h1>
</br>
</br>

Content


<ul>
  <li>1. General purpose </li>
  <li>2. Steps before first use</li>
  <li>3. Connect your iSpindel to Ubidots.com</li>  
  <li>4. Custom values in Ubidots.com</li>
</ul>

</br>
</br>

<h2>1. General purpose</h2></br>
Ispindel is used to mesure the amount of sugar in your beer while its fermenting
</br>
</br>
<h2>2. Steps before first use</h/2></br>
<h3>2.1. Create an account on <a href='https://www.ubidots.com'>ubidots.com</a></h3></br>
</br>
Log into your newly created ubidots account and navigate to "API Credentials" in the upper right corner
</br>
<img src='/IMG/ubidots_api_01.PNG'>
</br>
</br>
Copy the "Default token" and save it to a textfile on your computer (lets keep it for later, step 3)
</br>
<img src='/IMG/ubidots_api_02.PNG'>
</br>

<h3>2.2. Calibrate your new iSpindel</h3></br>
</br>
<i>This is needed to be done only once.</i>
</br>
</br>


<lu>What you´ll need:
  <li>3 liters of water and something to boil it in</li>
  <li>750grams of table sugar</li>
  <li>A bowl that holds ~3 liters of liquid</li>
  <li>a Aerometer/Hydrometer or Refractometer</li>
  <li>Computer that can open excel/xlsm documents</li>
</lu>


</br>
</br>
Add 750grams of table sugar to 3 liters of boiling water and let it cool down to 20 degrees celsius
</br></br>
Pour the water/sugar solution into a ~3 Liter (high) bowl. The ispindel will need to float without touching the bottom of the bowl.
</br></br>
Start your iSpindel and place it in the water/sugar solution
</br></br>
On your computer/smart phone, go to wifi-settings and connect to the network called "iSpindel"
</br></br>
After you are connected, open a web browser and brows to http://192.168.4.1
</br></br>
Navigate to "iSpindel Test":
</br>
<img src='/IMG/ispindel_test_screen.PNG'>
</br>
</br>
Now you are going to download and open the calibration spreadsheet -> <a href='https://github.com/universam1/iSpindel/blob/master/docs/Kalibrierung.xlsm'>link to .xlsm</a>
</br>
<img src='/IMG/download_xlsm.PNG'>
</br>
<img src='/IMG/calibration_xlsm.PNG'>
</br>
</br>
You will now write down the tilt/angle of the iSpindel and use the Aerometer/Hydrometer to get the sugar content level (eg. 1.090).
</br>
In the "Kalibrierung.xlsm" document you´ll write down:
</br>
</br>
The tilt value in the first column "Winkel"
</br>
In the second column the PLATO value (you will need to convert SG to plato)
</br>
</br>
After you have written down these values you can now dilute the sugar solution with more water (20c) and then repeat the two steps above to take 10-15 more readings and adding them to the "Kalibrierung.xlsm" document.
</br>
</br>
After you have done 10-15 readings of "tilt" and Plato you press "Formel update" in "Kalibrierung.xlsm" document and copy the "Plato Formel:"
</br>
Save the "plato formel" string in a text document for later. This string is used to convert your tilt value to plato and from plato to SG, ABV etc.
</br>
</br>
<h2>3. Connect your iSpindel to Ubidots.com</h2>
</br>
After the calibration it is time to connect your ispindel to ubidots and let it live its own life.
</br>
</br>
Choose your desired wifi for the ispindel to use
</br>
Insert username/password for your wifi
</br>
Insert the API token you saved in a textfile from ubidots
</br>
Insert the "Plato Formel" from the "Kalibrierung.xlsm" document into "Gravity conversion/Polynominal"
</br>
<img src='/IMG/ispindel_connect_ubidots.PNG'>
</br>
</br>
<h2>4. Custom values in Ubidots.com</h2>


