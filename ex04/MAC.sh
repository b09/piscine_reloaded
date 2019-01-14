ifconfig | grep 'ether ' | sed 's/ether //' | cut -c 2- | rev | cut -c 2- | rev
