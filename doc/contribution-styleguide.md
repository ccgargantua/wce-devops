# Contribution Style Guide

## Table of Contents

* [Disclaimer](#disclaimer)
* [Overview](#overview)
* [Versioning](#versioning)
* [Branching Convention](#branching-convention)
    * [Classification](#classification)
    * [Verbosity](#verbosity)
    * [Synchronization](#synchronization)
* [Pull Requests](#pull-requests)
    * [Conflict Resolution](#conflict-resolution)
    * [Details](#details)
    * [Review Process](#review-process)
    * [Merge Strategy](#merge-strategy)



## Disclaimer

This document is a work in progress as the scope of the project is still in development. If you are unfamiliar with Git, or this project as a whole, you should consider referencing our [README](./README.md).


## Overview

Our contribution philosophy aims to provide a simple method of collaborating on code that is both intuitive and thorough. For that reason, we will not be re-inventing the wheel, but integrating the existing Trunk-Based Development strategy. **For a large, detailed collection of documentation on T-BD, look [here](https://trunkbaseddevelopment.com/)**. This document will detail the most important aspects of the strategy as it relates to WCE DevOps open source and proprietary code bases.


## Versioning

Versions are tracked in the following format: `vMAJOR.MINOR.PATCH`. For example, `v1.0.0` is the first major release with no patches. `v1.2.3` is the **first** major release with **two** minor updates and **three** patches since `v1.0.0`'s release.

## Branching Convention

### Classification

Branches should be classified into the following categories:

* `feature` branches consist of code for new features or new templates added. Typically, a project would have several features added as minor updates before a desired state is reached for a release. So, several `vMAJOR.MINOR+1.PATCH`s before a `vMAJOR+1.MINOR.PATCH`

* `bugfix` branches should branch from the *most recent* commit in `main`. This is for low-priority bugs.

* `hotfix` branches should branch from the *latest release tag* in `main`. Upon merge of a hotfix branch, the patch digit in the version number should be updated in a new release tag `vMAJOR.MINOR.PATCH+1`


### Verbosity

When creating a branch, the branch name should be prefixed with the classification in the style of `<classification>/<branchname>`. Branch names should be brief but descriptive. Here are some examples:

* `feature/generic-python-template`
* `feature/front-page-ui-overhaul`
* `bugfix/database-negative-db-index-edgecase`
* `bugfix/rare-crash-from-invalid-ui-resolution`
* `hotfix/major-elf-config-file-corruption`
* `hotfix/libraryname-lib-security-patch`


### Synchronization

To synchronize a branch with `main`/`master`, we rebase. This gives us a more linear history, which is preferred.

## Pull Requests

### Conflict Resolution

Before opening your PR, your branch should be synchronized with `main`/`master`. If there are conflicts during a PR, the rule of thumb for which changes should be merged depend on what code is the "proper" code. If you are applying a more broad `bugfix` to a bug that is addressed in a separate `hotfix`, odds are that you will want to keep all the necessary changes for your `bugfix` and scrap the conflicting `hotfix` changes. If your `feature` uses a temporary ad-hoc solution to a problem that has been fixed from some other merge to `main`/`master`, odds are you will want your wider `feature` to make use of the more robust and proper solution that has since been added to `main` since you started your work.

If you aren't sure, reach out to other team members or Project Manager. In most cases, the solution should be straightforward, but definitely don't make a decision that you aren't sure about.

### Details

* The **title** of a pull request should be a brief description in the style of a commit message, and give a broad description of all changes proposed in the PR.
* The **description**, like the title, should be a broad description of all changes proposed in the PR, except much more verbose and in-depth. It is simply the big picture. You don't have to explain every line of code, every function, or even every file. In fact, I would argue that no code should be explicitly mentioned unless it is vital to the understanding of the change as a whole. Your title is your "What", your description is collectively your "What", "Why" and "How". **Please utilize markdown in your description.** One clever way to provide a sufficient description is to just copy essential big-picture details from any markdown docs you made, if any, into your description. Likely this would only be the case for a `feature/` branch.
* **Tags** for now should just match your branch type prefix, i.e. `bugfix`, `hotfix`, or `feature`.

### Review Process 

If you open a PR, you need to request a review before it can be merged. This should be another member of the team or Project Manager.

Reviewers should ensure that:

1. There are no merge conflicts.
2. All tests (if any) and build pipelines pass.
3. Code quality complies with Michigan Tech guidelines.

The reviewer should leave thorough comments when necessary to aid the programmer in completing a quality contribution. **The programmer should help the reviewer by being as proactive in performing the necessary due diligence before opening a pull request**. Not every commit needs to be perfect, and the PR code isn't expected to be perfect either. But an effort needs to be made to save everyone the additional time and energy during this process.

### Merge Strategy

Upon merging a PR, we should choose to squash the commits. That way, the final state of the code is what is on record for the entire commit. Whether this is the best choice for large feature merges is up for debate, so please reach out if you think you have justification for an alternative strategy to squash + merge. **After merging, tag the merge commit according to the details in [versioning](#versioning)**.