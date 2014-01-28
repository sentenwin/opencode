 #
 # =====================================================================================
 #
 #       Filename:  yp.sh
 #
 #    Description:  Script to play you tube videos
 #
 #        Version:  1.0
 #        Created:  Saturday 25 January 2014 10:53:26  IST
 #       Revision:  none
 #       Interpreter:  gcc
 #
 #         Author:  Senthilkumar M (sentenwin), sentenwin@gmail.com
 #        Company:  Share2Create
 #
 # =====================================================================================
 #/
function check_pkg
{
	yd=`dpkg-query -l | grep "youtube-dl" | wc -l`
	omx=`dpkg-query -l | grep "omxplayer" | wc -l`

	if [ "$yd" == 0 ];then
       		echo "Installing youtube downloader"
	        sudo apt-get install youtube-dl -y
	fi

	if [ "$omx" == 0 ];then
        	echo "Installing omxplayer"
	        sudo apt-get install omxplayer -y
	fi
	
}
#!/bin/bash
if [ $1 ];then
    check_pkg
    sudo mkdir /tmp/yd
    cd /tmp/yd
    sudo youtube-dl  -o "%(id)s.%(ext)s" -f /22/18 $1
    omxplayer -o hdmi -r  ./#.mp4
    sudo rm -rf /tmp/yd
else
    echo "Youtube video player"
    echo "Usage: yd <URL>"
    echo "      eg. yp https://www.youtube.com/watch?v=ZbFFx9kp1lI#t=19"
fi


