# tell information about yourself to git
git config --global user.email "you@example.com" # mail
git config --global user.name "Your Name" # user name

# generate auth key using ssh
ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
