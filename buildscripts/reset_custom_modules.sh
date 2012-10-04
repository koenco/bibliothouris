cd /var/www/bibliothouris_build/sites/all/modules/
rm -rf custom

mkdir custom
cd custom

git init
git remote add origin https://github.com/koenco/bibliothouris_modules.git
git pull origin master

cd /var/www/bibliothouris_build/sites/all/themes/

rm -rf custom

mkdir custom
cd custom

git init
git remote add origin https://github.com/koenco/bibliothouris_themes.git
git pull origin master
