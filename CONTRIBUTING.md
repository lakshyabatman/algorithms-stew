1. Git Installation

	1. Install git depending on the operating system from the official site to run the git terminal   (Bash).

	2. Now when successfully installed git the next step is to set an environment for development and to learn basic git commands.



2. Getting link for Cloning

	1. First, go to the git repository for which you want to contribute.
	2. Now fork that repository so that the copy of that same project will create in your repository.
	3. Now go to the green code button on the top left of that repository to copy the https link for that repository.
	4. Copy that link to clipboard.



3. Cloning 

	1. Make a new empty folder.

	2. Open git terminal and run cd folder_location example cd Desktop/git-project

	3. run git init.

	4. Now run git clone (copied link) to clone that project to local system.



4. Runnning Cpp in terminal

	1. Before running programs, we must set the path of the compiler. So, first, right-click on the Computer icon and go to the Properties option.

	2. Click on Advanced system settings and then Environment Variables.
	
	3. A new window will open, there click on the New button. In Variable name filed enter path and in Variable value field enter the path of the bin folder of a compiler.

	4. You can find the path of the bin folder by going to the directory where you have installed the compiler.

	5. After that click all OK buttons to save the information.

	6. Press the Win+R keys to open Run. Type cmd and press enter to open a command prompt.

	7. Now change the directory to where you have saved your C or C++ program file. Let's say you have saved the program on Desktop then type cd desktop and press enter.

	8. Now for compiling the program type gcc filename. Here filename is the name of the program file. I have used the gcc command because I have installed gcc compiler in my system. The command will change if you are using any other compiler, like for Turbo C++ it will be tcc, for Borland C++ it will be bcc, and so on.

	9. For running the program just type the name of the source file without .c or .cpp extension and press enter.

	10. If you have followed steps properly then you can see the output. 




5. Running Python in Terminal

	->Running a Script

	1. Once the script has been written, save it to a specific location in your system and then follow the steps below to run it:

	2. Open the terminal by searching for it in the dashboard or pressing Ctrl + Alt + T.

	3. Navigate the terminal to the directory where the script is located using the cd command.

	4. Type python SCRIPTNAME.py in the terminal to execute the script.

	5. If the script is python3, use python3 in the terminal command:pyhton3 SCRIPTNAME.py

	->Alternate method

	1. If you find it cumbersome to write python in the terminal every time you run the script, follow the procedure below:

	2. Prepend #! /usr/bin/python with your script.

	3. Run the following command in your terminal to make the script executable: chmod +x SCRIPTNAME.py

	4. Now, ​simply type ./SCRIPTNAME.py to run the executable script.



6. Debug C++ in Visual Studio Code

	1. Visual Studio Code supports the following debuggers for C/C++ depending on the operating system you are using:

	1. Linux: GDB
	2. macOS: LLDB or GDB
	3. Windows: the Visual Studio Windows Debugger or GDB (using Cygwin or MinGW)
	4. Download given language extension from virtual studio code extensions.

 	->Now enter the following command to compile the source file using g++.

	1. $ g++ -o <name-you-want-to-give> source.cpp

	In place of replacing it by any name like my program, etc.

	2. Run it! Now you can run the program using −

	3. $ ./myprogram




7. Commit File Changes

	1. Before running the commit command you have to run add the command to add the changes whatever 	you made to your repository.
		 i.e. git add file_name
	2. Now run command commit command to save your changes to the local repository. i.e. git commit   	-m "Successfully Added"

	****	-m <message>
		Sets the commit's message. Make sure to provide a concise description that helps your teammates (and yourself) understand what happened.

	****    -a
		Includes all currently changed files in this commit. Keep in mind, however, that untracked (new) files are not included.

	****	--amend
		Rewrites the very last commit with any currently staged changes and/or a new commit message. Git will rewrite the last commit and effectively replace it with the amended one. Note that such a rewriting of commits should only be performed on commits that have not been pushed to a remote repository, yet.

8. Git Push and Pull Request

	1. First, you have to push your local repository to a remote server. so, that the changes you made in the local repository will also appear there. "push" command is used to publish new local commits on a remote server.

		i.e. git push

	2. Then it will ask to fill your login credentials to fill them. i.e. Login email, Password.

	3. Once you push the changes to your repo, the Compare & pull request button will appear in GitHub.
	
	4. Open a pull request by clicking the Create pull request button.

	5. This allows the repo's maintainers to review your contribution.

	6. From here, they can merge it if it is good, or they may ask you to make some changes. 
