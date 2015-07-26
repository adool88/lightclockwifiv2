const char clearromsure_html[] PROGMEM = R"=====(
<!DOCTYPE HTML>
<html><head>
$css
<meta http-equiv=Content-Type content="text/html; charset=utf-8" />
<meta name=viewport content="width=device-width, initial-scale=1.0">
<link rel=stylesheet href=style.css>
</head>
<body class=settings-page>
<H1>Are you sure?</H1><br>
This will clear all settings including your wifi password. When The Light Clock reboots please connect to it to set up local wifi again.<br><br><br>
<a class="btn" href=/cleareeprom>Reset to factory default</a>
</body>
</html>
)=====";
