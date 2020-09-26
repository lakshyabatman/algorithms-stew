*Git Installation

-> Install git depending on operating system from official site to run git terminal (Bash).

-> Now when successfully installed git next step is to set a environment for development and to learn basic git commands.



**Getting link for Cloning

-> First go to the git repository for which you want to contribute.
-> Now fork that repository so that the copy of that same project will create in your repository.
-> Now go to the green code button on the top left of that repository to copy the https link for that repository.
-> Copy that link to clipboard.



***Cloning 

-> Make an new empty folder.

-> Open git terminal and run cd folder_location
	example cd Desktop/git-project

-> run git init.

-> Now run git clone (copied link) to clone that project to local system.



****Runnning Cpp in terminal

1. Before running programs we must set the path of compiler. So, first right click on Computer icon and go to Properties option.

2. Click on Advance system settings and then Environment Variables.

3. A new window will open, there click on New button. In Variable name filed enter path and in Variable value filed enter the path of the bin folder of compiler.

4. You can find the path of bin folder by going to the directory where you have installed the compiler.

5. After that click all OK buttons to save the information.

6. Press Win+R keys to open Run. Type cmd and press enter to open command prompt.

7. Now change the directory to where you have saved your C or C++ program file. Lets say you have saved the program on Desktop then type cd desktop and press enter.

8. Now for compiling the program type gcc filename. Here filename is the name of the program file. I have used gcc command because I have installed GCC compiler in my system.
The command will change if you are using any other compiler, like for Turbo C++ it will be tcc, for Borland C++ it will be bcc and so on.

9. For running the program just type the name of the source file without .c or .cpp extension and press enter.

10. If you have followed steps properly then you can see the output. 




*****Running Python in Terminal

	Running a Script
	-> Once the script has been written, save it to a specific location in your system and then follow the steps below to run it:

	-> Open the terminal by searching for it in the dashboard or pressing Ctrl + Alt + T.

	-> Navigate the terminal to the directory where the script is located using the cd command.

	-> Type python SCRIPTNAME.py in the terminal to execute the script.

	-> If the script is python3, use python3 in the terminal command:pyhton3 SCRIPTNAME.py

	Alternate method
	-> If you find it cumbersome to write python in the terminal every time you run the script, follow the procedure below:

	-> Prepend #! /usr/bin/python with your script.

	-> Run the following command in your terminal to make the script executable: chmod +x SCRIPTNAME.py

	-> Now, ​simply type ./SCRIPTNAME.py to run the executable script.



*****Debug C++ in Visual Studio Code

-> Visual Studio Code supports the following debuggers for C/C++ depending on the operating system you are using:

-> Linux: GDB
-> macOS: LLDB or GDB
-> Windows: the Visual Studio Windows Debugger or GDB (using Cygwin or MinGW)
-> Download given language extension from virtual studio code extensions.

 Now enter the following command to compile the source file using g++.

	-> $ g++ -o <name-you-want-to-give> source.cpp

	In place of <name-you-want-to-give> replace it by any name like myprogram, etc.

	-> Run it! Now you can run the program using −

	-> $ ./myprogram




******Commit File Changes

-> Before running commit command you have to run add command to add the changes whatever you made to your respository.
	i.e. git add file_name
-> Now run command commit command to save your changes to the local repository.
	i.e. git commit -m "Succcesfully Added"

	****	-m <message>
	Sets the commit's message. Make sure to provide a concise description that helps your teammates (and yourself) understand what happened.

	****    -a
	Includes all currently changed files in this commit. Keep in mind, however, that untracked (new) files are not included.

	****	--amend
	Rewrites the very last commit with any currently staged changes and/or a new commit message.
	Git will rewrite the last commit and effectively replace it with the amended one.
	Note that such a rewriting of commits should only be performed on commits that have not been pushed to a remote repository, yet.

*******Git Push and Pull Request

-> First you have Push your local repository to remote server. so, that the changes you made in local repository will also appeared their.
"push" command is used to publish new local commits on a remote server.

	i.e. git push

-> Then it will ask to fill your login credentials fill them. i.e. Login email , Password.

-> Once you push the changes to your repo, the Compare & pull request button will appear in GitHub.
	
	*Open a pull request by clicking the Create pull request button.
	*This allows the repo's maintainers to review your contribution.
	*From here, they can merge it if it is good, or they may ask you to make some changes. 
