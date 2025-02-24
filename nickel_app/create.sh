#!/bin/bash -x

cd ../
cp build/ereader/sanki nickel_app/sanki/.adds/sanki/sanki.bin
cp libraries/zip_libraries/lib-build/EREADER/libzip.so nickel_app/sanki/.adds/sanki/lib/
cp libraries/ereader/ereaderdev-lib/ereaderdev/build/libereaderdev.so* nickel_app/sanki/.adds/sanki/lib/
cp libraries/ereader/inkbox/libs/prebuilt/libsndfile* nickel_app/sanki/.adds/sanki/lib/

cd nickel_app
rm -rf sanki_nickel.zip
cd sanki/
zip -r sanki_nickel.zip .adds
mv sanki_nickel.zip ../
cd ../
