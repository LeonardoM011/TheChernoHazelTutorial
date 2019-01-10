mkdir tmpfiles
mkdir tmpfiles/Hazel
mkdir tmpfiles/Sandbox
mv Hazel/src/* tmpfiles/Hazel
mv Sandbox/src/* tmpfiles/Sandbox

vendor/bin/premake/premake5 --os=linux --cc=gcc codelite

mv tmpfiles/Hazel/* Hazel/src
mv tmpfiles/Sandbox/* Sandbox/src
rm -r tmpfiles/Hazel
rm -r tmpfiles/Sandbox
rm -r tmpfiles