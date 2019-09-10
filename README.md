# SingleCell_NEURON
1. Download VM from https://www.virtualbox.org/wiki/Downloads

2.Download the CompNeuro Virtual Appliance provided by the Mizzou Neural Engineering Lab:
https://drive.google.com/uc?id=1-9tUHcFvi5LpnII8Zdzsfv8ZObdEwAUl
This file is 8.6GB and will take some time to download. The file may also be available via USB.

3.Download the Pyramidal file

4.complie the mod files, use the command line nrnivmodl Pyramidal,then move the x86_64 floder into Pyramidal floder.

5.There are three kinds of model in the folder, one compartment(one-compartment.ipynb), three compartments (3-compartments.ipynb) and detailed cell(HTO&LTO.ipynb).

6.select any kind of model you need and run the cell, use silders to tune the parameters like maximum conductances, V1/2 or slope to match the passive property, FIR, LTO and HTO.

7.After tuning the value, copy the value to the next cell of the notebook.
