# travis-demo [![Build Status](https://travis-ci.org/jason9829/travis-demo.svg?branch=master)](https://travis-ci.org/jason9829/travis-demo)
This is an project how demonstate how to perform code testing using Travis CI. 

## Requirement
1. A public github repository (for this tutorial).
2. The repository must contain the test framework (for this tutorial).

## Setup
### Configuration for the existing repository 
1. Create a newfile named `.travis.yml` (configuration file) at the main directory.
2. For this tutorial, the `.travis.yml` is shown below

```yml
language: python
before_script: cd python_demo
script: python test_main.py
```
> **language**: Indicate which programming language used in the project (multiple programming language is allowed, for more info click [here](https://stackoverflow.com/questions/27644586/how-to-set-up-travis-ci-with-multiple-languages)).

> **before_script**: Indicate the command to run before running the script. In this case, it will go to subdirectory named `python_demo`.

> **script**: command to run the test. In this case, it will run the python test file named `test_main.py`.

### Configuration on Travis CI
1. Sign in Travis CI via GitHub account.
2. Goto the [repositories](https://travis-ci.org/account/repositories) at Travis CI.
3. At *Legacy Services Integration*, find the desired repository and flip the swtich to activate it at Travis CI.
4. Go to the local repository at your PC, create a new branch (optional) and perform `git push` after complete the configuration as shown at previous section.
5. Wait for a while and the Travis CI will start the build and perform the test based on the script at `.travis.yml`.
