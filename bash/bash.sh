#!/bin/bash

function Delete_Files(){
 sudo find /tmp -type f -atime +10 -delete
 echo ""
}

function  back_up(){
 echo "Please enter your username."
 read user_name
 echo "Would you like to back up the user folder or another folder?"
 echo "Enter 1 for user folder, enter 2 for another folder"
 read choice_answer
 if [ $choice_answer -eq 1 ]
 then
 	echo "Your home folder will be backed up at /home/backups, continue?(y/n)"
 	read ans
 		if [ $ans = y ]
 		then
        		sudo rsync -avr /home/$user_name/ /home/backups/
 		elif [ $ans = n ]
 		then
        		echo "Please enter a loaction to store your backup."
 			read destination
 			sudo rsync -avr /home/$user_name/ /$destination/
 		else
 			echo "Wrong input. Please enter either 'y','n'." 
 		fi
elif [ $choice_answer -eq 2 ]
then
	echo "Please enter the path of the folder you want to back up:"
	read path_in
	echo "Please enter the the path of the folder where you want to save the back up"
	read path_out
	sudo rsync -avr /$path_in/ /$path_out/
fi
 echo ""
}

function cpu_usage(){
uptime
echo ""
}

function mem_usage(){
free -h
echo ""
}

function menu(){
 echo "Please choose what you want to do:"
 echo "1) Delete tmp files older than 10 day nonactive."
 echo "2) Backup user data/folder."
 echo "3) Check CPU usage."
 echo "4) Check memory usage"
 echo "5) Do all."
 echo "0) Quit."
 read Choise
echo ""
 case $Choise in
	1)
	    Delete_Files;
	    menu ;;
	2)
	    back_up;
	    menu ;;
	3)
	    cpu_usage;
	    menu;;
	4)
	    mem_usage;
	    menu;;
	5)
	    Delete_Files
	    back_up
	    cpu_usage
	    mem_usage;
	    menu;;
	0)
	    echo "Thank see you in an hour."
	    exit
	    ;;
	*)
	    echo "Wrong input.";
	    menu;;
esac
}
menu
