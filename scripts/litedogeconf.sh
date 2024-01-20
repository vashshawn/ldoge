#!/bin/bash -ev

mkdir -p ~/.litedoge
echo "rpcuser=username" >>~/.litedoge/litedoge.conf
echo "rpcpassword=`head -c 32 /dev/urandom | base64`" >>~/.litedoge/litedoge.conf

