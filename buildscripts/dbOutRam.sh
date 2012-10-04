#execute this with sudo!
service mysql stop
umount /var/lib/mysql
service mysql start

df -h
