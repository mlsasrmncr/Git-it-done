# GIT IT DONE - A Hands-On Webinar on Git & GitHub | Online


![githubevent](https://user-images.githubusercontent.com/77405013/150646326-e0bea276-c224-4858-9995-4ae15d562d88.jpeg)


## About The Event
📅 **January 23, 2022** </br>
🕕 **6:00 PM – 8:00 PM (India Standard Time)**</br>
Join us for a free Microsoft Workshop on Git and GitHub on **January 23rd, 2022 at 6PM IST** hosted on Teams Live Event. Learn all about Git and GitHub, creating repositories, making branches, committing to other repositories, making pull requests, and more. Link for the workshop will be shared to you on the day of event. Please join using laptop for a smooth experience of the workshop.

## Steps On How To Make Your Contribution.

**Note: Just follow the following steps copy paste the commands and change them accordingly and you are All Set To Go 😀**

### STEP 1
Set your user name and email in the gitbash using following commands (Replace the BOB and bob@example.com with your name and email).

> git config --global user.name "Bob"
> 
> git config --global user.email "bob@example.com"

### STEP 2
Generate a new SSH key for a hardware security key.
> ssh-keygen -t ed25519 -C "your_email@example.com"
 
**Source:** https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent

### STEP 3
Add your SSH key to the ssh-agent.
> eval "$(ssh-agent -s)"
> 
> ssh-add ~/.ssh/id_ed25519

**Source:** https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent

### STEP 4
Copy the SSH public key to your clipboard.
> clip < ~/.ssh/id_ed25519.pub

After copying the key go to your github setting --> SSH keys and paste it there and give some title and save.

**Source:** https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account

Then do it for this repo and copy the SSH link to clone.

### STEP 5
To clone the repo, Create a new folder open gitbash and run:
> git clone <link>

Replace the link with the copied link.

### STEP 6
To move to the main folder run:
> cd git-it-done

### STEP 7
To create a new branch run:
> git checkout -b <branch name>
> 
Replace branch name with your own branch name.

### STEP 8
To check the status of your file run:
> git status
  
### STEP 9
To add files to staging area run:
> git add .

### STEP 10
To commit the changes run:
> git commit -m "commit message"

Replace the "commit message" with actual message.

### STEP 11
To push the chanegs run:
> git push origin <your branch name>

Replace <your branch name> with your branch.
Ex: git push origin test

### STEP 12
After all of this go to https://github.com/mlsasrmncr/Git-it-done and create a PR.

So, finally you have created your first PR 🎉🌟
  
## Our Speakers 🗣
  
* _[Abhinav Rajput](https://github.com/AbhinavRajputEXE)_
* _[Devanshu Sinha](https://github.com/ArthrowAbstract)_




