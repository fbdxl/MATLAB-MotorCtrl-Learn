#------------------------ Tool Specifications & Options ----------------------

COMPILER  =  lcc

CC        =  "D:\matlab 2019b\sys\lcc64\lcc64\bin\lcc64.exe"
LD        =  "D:\matlab 2019b\sys\lcc64\lcc64\bin\lcclnk64.exe"
LIBCMD    =  "D:\matlab 2019b\sys\lcc64\lcc64\bin\lcclib64.exe"
CFLAGS    =  -dll -noregistrylookup  -c -Zp8 -DLCC_WIN64 -DMATLAB_MEX_FILE -nodeclspec
LDFLAGS   =  -s -dll -entry LibMain pko7jYKpYmCbXoPGn8l9eE_cclib.def -L"D:\matlab 2019b\sys\lcc64\lcc64\lib64"

OBJECTS = \
	   slcc_instrum1_pko7jYKpYmCbXoPGn8l9eE_cclib.obj \
	   slcc_interface_pko7jYKpYmCbXoPGn8l9eE.obj \
	   slcc_instrumtr_pko7jYKpYmCbXoPGn8l9eE_cclib.obj \
	   lccstub.obj \

STATICLIBS = \
	   "D:\matlab 2019b\extern\lib\win64\microsoft\libmwsl_sfcn_cov_bridge.lib" \

#------------------------------ Include/Lib Path ------------------------------

INCLUDE_PATH = \
     -I"d:\matlab 2019b\extern\include" \
     -I"d:\matlab 2019b\simulink\include" \
     -I"d:\simu\drivectrlmodebase\slprj\_slcc\pko7jykpymcbxopgn8l9ee" \
     -I"d:\matlab 2019b\toolbox\simulink\simdemos\simfeatures\include" \
     -I"d:\simu\drivectrlmodebase" \
     -I"d:\matlab 2019b\toolbox\simulink\simdemos\simfeatures\src" \
     -I"d:\matlab 2019b\sys\lcc64\lcc64\include64" \
     -I"d:\matlab 2019b\sys\lcc64\lcc64\mex" \

#--------------------------------- Rules --------------------------------------

pko7jYKpYmCbXoPGn8l9eE_cclib.dll : $(MAKEFILE) $(OBJECTS)
	$(LD) $(LDFLAGS) /OUT:pko7jYKpYmCbXoPGn8l9eE_cclib.dll $(OBJECTS)  $(STATICLIBS) "D:\matlab 2019b\extern\lib\win64\microsoft\libmex.lib" "D:\matlab 2019b\extern\lib\win64\microsoft\libmx.lib"
slcc_instrum1_pko7jYKpYmCbXoPGn8l9eE_cclib.obj :	D:\SIMU\DRIVEC~1\slprj\_slcc\PKO7JY~1\SLCC_I~1.C
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\SIMU\DriveCtrlModeBase\slprj\_slcc\pko7jYKpYmCbXoPGn8l9eE\slcc_instrum1_pko7jYKpYmCbXoPGn8l9eE_cclib.c"
slcc_interface_pko7jYKpYmCbXoPGn8l9eE.obj :	D:\SIMU\DRIVEC~1\slprj\_slcc\PKO7JY~1\SLCC_I~3.C
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\SIMU\DriveCtrlModeBase\slprj\_slcc\pko7jYKpYmCbXoPGn8l9eE\slcc_interface_pko7jYKpYmCbXoPGn8l9eE.c"
slcc_instrumtr_pko7jYKpYmCbXoPGn8l9eE_cclib.obj :	D:\SIMU\DRIVEC~1\slprj\_slcc\PKO7JY~1\SLCC_I~2.C
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\SIMU\DriveCtrlModeBase\slprj\_slcc\pko7jYKpYmCbXoPGn8l9eE\slcc_instrumtr_pko7jYKpYmCbXoPGn8l9eE_cclib.c"
lccstub.obj :	D:\MATLAB~2\sys\lcc64\lcc64\mex\lccstub.c
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "D:\matlab 2019b\sys\lcc64\lcc64\mex\lccstub.c"
