scp -p -o "ProxyCommand ssh USERNAME@cmsusr nc %h %p" "root@pltslink:FILENAME" .
scp -p -o "ProxyCommand ssh jheidema@lxplus6.cern.ch nc %h %p" "jheidema@april:~/PLTOffline/[File]" .
