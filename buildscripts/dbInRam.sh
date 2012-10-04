#execute this with sudo!
rm -rf /var/lib/.mysql
cp -R /var/lib/mysql /var/lib/.mysql

./mysql_tmpfs.sh

service mysql restart

df -h
