
<h1>Wifi Signal strenght with and without the antenna mod.</h1>

<a href='https://github.com/tedelm/MRTEEL/blob/master/README.md'>Back to meny</a></br></br>


|  | With | Without |
| ------------- | ------------- | ------------- |
| 7m | 92% | 80% |
| 10m + wall (outside house) | 66% | 30% |
| 35m + wall (outside house) | 28% | 0% |



Create your DIY Antenna from a small wire, cut to 29.4mm (20-31mm should be optimal for 1/4 wavelenght) and expose 1-2mm wire at both ends and pre tin them.
<img src="https://github.com/tedelm/MRTEEL/blob/master/IMG/29_4mmWire.jpg" width="600"/>

Cut the PCB antenna at the red marking on the picture with a x-acto knife or scalpel
<img src="https://github.com/tedelm/MRTEEL/blob/master/IMG/wemosd1miniCut.PNG" width="600"/>

Solder the antenna wire to the Wemos D1 Mini PCB, base of the PCB antenna.
<img src="https://raw.githubusercontent.com/tedelm/MRTEEL/master/IMG/CompleteHackAntenna.jpg" width="600"/>


Disclaimer:
Im no expert, try this at own risk.

<h2>Tested this antenna for 9h with one upload per minute to validate battery usage</h2>
The wifi AP was placed 10m (other side of the house) from the Wemos/ESP.

540 updates (9h*60) and voltage dropped 0.04v
<img src="https://github.com/tedelm/MRTEEL/blob/master/IMG/6h_60sec_volt.PNG" width="600"/>

Average uploaded per 5 minutes

<img src="https://github.com/tedelm/MRTEEL/blob/master/IMG/6h_60sec.PNG" width="600"/>

