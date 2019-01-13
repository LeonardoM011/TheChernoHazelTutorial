# TheChernoHazelTutorial
This is my take on TheChernoProject's Game Engine Tutorial On Linux

### Note for CodeLite users on Linux
Sometimes CodeLite won't load source files for Sandbox project (Probably a bug) so you have to follow these steps:
1. Open Bash
2. CD to This Directory
3. Run:
```
mkdir tmpfiles
mv Sandbox/src/* tmpfiles
./GenerateProjectsLinux.sh
```
4. Open **Hazel.workspace** using **CodeLite**
5. Run:
```
mv tmpfiles/* Sandbox/src
rm -r tmpfiles
```
6. Manually add files from src to the project **Sandbox** by right clicking on **Sandbox** project
and choosing option: **Import Files From Directory...** and checking **src** folder

##### Credit
All credit goes to [**TheChernoProject**](https://www.youtube.com/channel/UCQ-W1KE9EYfdxhL6S4twUNw):  
https://www.youtube.com/channel/UCQ-W1KE9EYfdxhL6S4twUNw  
Link to playlist: https://thecherno.com/engine  