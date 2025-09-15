# Templates in Git

Some clients, like GitHub, have a template functionality that let you create repositories from an existing template repository with the click of a button. In typical Microsoft fashion, **for some reason Azure doesn't support this.** Thankfully, we can still create and use a [template repo without a template feature](#template-repo-without-template-feature).

## Important Links
* [The repo I used from the demo](https://github.com/SFML/cmake-sfml-project) is a small and simple example of what we want
* [Recording of the demo in our google drive](https://drive.google.com/file/d/1XXPs7RTZxtv7ldOQVDBF58yk8XG6cT9-/view?usp=drive_link).
* As always, make sure to check [this directory's README](./README.md) for additional resources and help with pre-requisite knowledge.

## Template Repo without Template Feature
```bash
git clone https://git@client.com:template # Clone url to template
cd template # Get into our template directory
rm -rf .git # Remove the repo
git init # Create our new .git
git add . # Add all of our template code to our new .git database
git commit -m "Initial commit"
git remote add origin https://git@client.com:project # Set our remote to the project repo that will be using the template. !!!This remote repo MUST exist and have NO prior commits!!!
git push -u origin main
```