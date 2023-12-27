# README

## Git LFS
This repo requires Git LFS.

Search online for how to install Git Large File System for your OS. It might be as simple as `git lfs install`, if you are using a GUI then it may install it for you automatically.

## Getting Started
Install VSCode with the following addons: https://code.visualstudio.com/
* EditorConfig.EditorConfig
* vlad333000.sqf

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
