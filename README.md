# README

## Our Discord Link
If you have stumbled upon our mod and are interested in helping with development, have a question about our mod, or want to join our unit then you may want to join our Discord.
Mod development discussions and our Arma 3 event organisation (aka Operations) happen over there, if you are interested in playing with us then you can join the unit from our Discord too.
https://discord.gg/zFZFqWsq2v

## Git LFS
This repo requires Git LFS.

Search online for how to install Git Large File System for your OS. It might be as simple as `git lfs install`, if you are using a GUI then it may install it for you automatically.

## Getting Started
Install VSCode with the following addons: https://code.visualstudio.com/
* [EditorConfig.EditorConfig](https://marketplace.visualstudio.com/items?itemName=EditorConfig.EditorConfig)
* [vlad333000.sqf](https://marketplace.visualstudio.com/items?itemName=vlad333000.sqf)

You will also need to install git so that you can use it in the editor: https://git-scm.com/downloads

## Release Steps
These instructions are for senior developers, if you are a junior developer then you can safely ignore this section.
 * Update the changelog file
 * Merge develop branch into main branch via a pull request
 * Create a release tag (right side of code view on github website)
 * Update your fork's main branch to be in sync with the primary repo
 * On your local machine, checkout the main branch
 * Pull those changes to your local machine
 * Build the mod
 * Upload to Steam Workshop
 * Post changelog to the designated discord channel
