#
#  Edit following variables
#
document_root='/var/www'		# the main folder where drupal will be installed in
install_folder='bibliothouris_jenkins'		# the name of the drupal install folder, which will also be the url of the site
mysql_username='root'			# your mysql username
mysql_password='mysqlroot'		# your mysql password
mysql_db='localhost/bibliothouris_jenkins'	# the location and name of the database
site_admin='admin'			# the drupal site admin
site_admin_pass='admin'			# the drupal site admin's password
site_name='Bibliothouris_jenkins'		# the site's name


#---------------------------------------------------------------------------------------------#
# 			Don't edit anything below this line				      #
#---------------------------------------------------------------------------------------------#

cd $document_root/$install_folder

drush site-install --db-url=mysql://$mysql_username:$mysql_password@$mysql_db --account-name=$site_admin --account-pass=$site_admin_pass --site-name=$site_name -y

#
# comment the chmod when deploying
# or maybe this will fix permissions
# maybe not
chown www-data:www-data -R files 

#drush en alphorn -y
#drush vset theme_default alphorn
drush en bibliotheme -y
drush vset theme_default bibliotheme

drush en uuid diff devel devel_generate masquerade simpletest fe_block entitycache views_ui node_export date date_popup uuid_features phone genpass email_registration autoassignrole administerusersbyrole simpletest_clone omega_tools auto_nodetitle references user_reference node_reference statistics clientside_validation_field_validation field_validation_ui -y

drush en bibliotouris_book -y
drush en bibliothouris_user -y

drush fr bibliothouris_user -y
drush fr bibliotouris_book -y

drush en bibliothouris_views -y
drush fr bibliothouris_views -y

drush en bibliothouris_clientside_validation

drush ucrt emp --mail="emp@emp.be" --password="emp"
drush urol employee emp

drush ucrt member --mail="member@member.be" --password="member"

drush node-export-import --file=$document_root/$install_folder/sites/all/modules/custom/data/books.export

drush en bibliothouris_data -y
