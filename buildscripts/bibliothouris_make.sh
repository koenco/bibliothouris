#
#  Edit following variables
#
document_root='/var/www'		# the main folder where drupal will be installed in
install_folder='bibliothouris_build'	# the name of the drupal install folder, which will also be the url of the site
mysql_username='root'			# your mysql username
mysql_password='mysqlroot'		# your mysql password
mysql_db='localhost/bibliothouris'	# the location and name of the database
site_admin='admin'			# the drupal site admin
site_admin_pass='admin'			# the drupal site admin's password
site_name='Bibliothouris'		# the site's name


#---------------------------------------------------------------------------------------------#
# 			Don't edit anything below this line				      #
#---------------------------------------------------------------------------------------------#

BASEDIR=$(dirname $0)

if [ $BASEDIR == '.' ]; then
	drush make bibliothouris.make $document_root/$install_folder --prepare-install
else 
	drush make $BASEDIR/bibliothouris.make $document_root/$install_folder --prepare-install
fi
#drush make $BASEDIR/bibliothouris.make $document_root/$install_folder --prepare-install

cd $document_root/$install_folder

drush site-install --db-url=mysql://$mysql_username:$mysql_password@$mysql_db --account-name=$site_admin --account-pass=$site_admin_pass --site-name=$site_name -y

cd sites/all/modules

mkdir custom

cd custom

git init
git remote add origin https://github.com/koenco/bibliothouris_modules.git
git pull origin master

cd ../../themes
mkdir custom
cd custom

git init
git remote add origin https://github.com/koenco/bibliothouris_themes.git
git pull origin master
drush en alphorn -y
drush vset theme_default alphorn

cd ../../..
mkdir files
#
# comment the chmod when deploying
chmod 755 -R files 

drush dl ds && drush en ds -y
drush dl panels && drush en panels -y

drush en uuid diff devel devel_generate masquerade simpletest fe_block entitycache views_ui node_export date date_popup uuid_features phone genpass email_registration autoassignrole administerusersbyrole simpletest_clone omega_tools auto_nodetitle references user_reference node_reference -y

drush en bibliotouris_book -y
drush en bibliothouris_user -y

drush fr bibliothouris_user -y
drush fr bibliotouris_book -y

drush en bibliothouris_views -y
drush fr bibliothouris_views -y

drush ucrt emp --mail="emp@emp.be" --password="emp"
drush urol employee emp

drush ucrt member --mail="member@member.be" --password="member"

drush node-export-import --file=$document_root/$install_folder/sites/all/modules/custom/data/books.export 

drush en bibliothouris_data -y
