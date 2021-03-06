SET(CPACK_DEBIAN_ARDRONE-SERVER_PACKAGE_DEPENDS "jderobot-easyice,  jderobot-interfaces, jderobot-colorspaces")
SET(CPACK_COMPONENT_ARDRONE-SERVER_DESCRIPTION  
"Driver for the Parrot ArDrone 2.0 
 Manual page http://jderobot.org/index.php/Drivers#ardrone_server
 Home page https://jderobot.org")

SET(CPACK_DEBIAN_BASIC-SERVER_PACKAGE_DEPENDS "jderobot-easyice,  jderobot-interfaces, jderobot-colorspaces")
SET(CPACK_COMPONENT_BASIC-SERVER_DESCRIPTION  
"An example of the most basic server made for JdeRobot based on ICE communications. 
 Home page https://jderobot.org") 

SET(CPACK_DEBIAN_CAMERASERVER_DEPENDS "jderobot-easyice, jderobot-util, jderobot-interfaces, jderobot-logger, jderobot-ns, jderobot-colorspaces")
SET(CPACK_COMPONENT_CAMERASERVER_DESCRIPTION  
"Generic server for RGB cameras. 
 Manual Page http://jderobot.org/index.php/Drivers#cameraserver
 Home page https://jderobot.org")

SET(CPACK_DEBIAN_CAMERASERVER-PYTHON_PACKAGE_DEPENDS "jderobot-config-python, jderobot-interfaces")
SET(CPACK_COMPONENT_CAMERASERVER-PYTHON_DESCRIPTION  
"Example of cameraserver driver in python
 Manual Page http://jderobot.org/
 Home page https://jderobot.org")
 
SET(CPACK_DEBIAN_EMSENSORDRIVER_PACKAGE_DEPENDS " jderobot-interfaces")
SET(CPACK_COMPONENT_EMSENSORDRIVER_DESCRIPTION  
"Driver for proximity sensor.
 Manual page http://jderobot.org/index.php/Drivers#ardrone_server
 Home page https://jderobot.org")

SET(CPACK_DEBIAN_EVICAMDRIVER_PACKAGE_DEPENDS " jderobot-interfaces")
SET(CPACK_COMPONENT_EVICAMDRIVER_DESCRIPTION  
"Driver for Sony EVI camera.
 Manual page http://jderobot.org/index.php/Drivers#ardrone_server
 Home page https://jderobot.org")

SET(CPACK_DEBIAN_GAZEBOSERVER_PACKAGE_DEPENDS "jderobot-easyice, jderobot-util, jderobot-interfaces, jderobot-colorspaces, gazebo7")
SET(CPACK_COMPONENT_GAZEBOSERVER_DESCRIPTION  
"Collection of plugins, worlds and models made by JdeRobot. 
 Manual Page http://jderobot.org/index.php/Drivers (sections 3-9)
 Home page https://jderobot.org")

SET(CPACK_DEBIAN_OPENNISERVER_PACKAGE_DEPENDS "jderobot-easyice, jderobot-geometry, jderobot-util, jderobot-interfaces, jderobot-logger, jderobot-ns, jderobot-colorspaces")
SET(CPACK_COMPONENT_OPENNISERVER_DESCRIPTION  
"Server for RGBD cameras (ASUS Xtion, Microsoft Kinect, Orbecc, ...) 
 Manual Page http://jderobot.org/index.php/Drivers#OpenniServer
 Home page https://jderobot.org")

SET(CPACK_DEBIAN_PCLRGBDSERVER_PACKAGE_DEPENDS "jderobot-easyice, jderobot-util, jderobot-interfaces, jderobot-colorspaces")
SET(CPACK_COMPONENT_PCLRGBDSERVER_DESCRIPTION  
"Server for RGBD cameras. 
 Manual Page 
 Home page https://jderobot.org")

SET(CPACK_DEBIAN_MAVLINKSERVER_PACKAGE_DEPENDS "jderobot-easyice,  jderobot-interfaces, jderobot-colorspaces")
SET(CPACK_COMPONENT_MAVLINKSERVER_DESCRIPTION  
"Driver for MAVLink based air drones and planes
 Manual page http://jderobot.org/index.php/Drivers#ardrone_server
 Home page https://jderobot.org")

 SET(CPACK_DEBIAN_YOUTUBESERVER-PYTHON_PACKAGE_DEPENDS "jderobot-config-python, jderobot-interfaces, youtube-dl")
SET(CPACK_COMPONENT_YOUTUBESERVER-PYTHON_DESCRIPTION  
"Driver for get videos from youtube as images server
 Manual page http://jderobot.org/index.php/Drivers#ardrone_server
 Home page https://jderobot.org")
