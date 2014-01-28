 # =====================================================================================
 #
 #       Filename:  yd.sh
 #
 #    Description: Script to download videos from youtube 
 #
 #        Version:  1.0
 #        Created:  Saturday 25 January 2014 09:47:34  IST
 #       Revision:  none
 #       Interpreter:  Bash
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
    echo "Changing to home directory ...."
    cd
    sudo youtube-dl  -o "%(id)s.%(ext)s" -f /22/18 $1
else
    echo "Youtube video downloader"
    echo "Usage: yd <URL>"
    echo "      eg. yd https://www.youtube.com/watch?v=ZbFFx9kp1lI#t=19"
fi

