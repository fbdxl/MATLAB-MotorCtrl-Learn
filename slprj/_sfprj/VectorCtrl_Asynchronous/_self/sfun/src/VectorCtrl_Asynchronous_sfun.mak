# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64
!include <ntwin32.mak>

MACHINE     = VectorCtrl_Asynchronous
TARGET      = sfun
CHART_SRCS 	= \
     c1_VectorCtrl_Asynchronous.c\
     c2_VectorCtrl_Asynchronous.c\
     c3_VectorCtrl_Asynchronous.c\
     c4_VectorCtrl_Asynchronous.c\
     c5_VectorCtrl_Asynchronous.c\
     c6_VectorCtrl_Asynchronous.c\
     c7_VectorCtrl_Asynchronous.c\
     c8_VectorCtrl_Asynchronous.c\
     c9_VectorCtrl_Asynchronous.c\
     c10_VectorCtrl_Asynchronous.c\
     c11_VectorCtrl_Asynchronous.c\
     c12_VectorCtrl_Asynchronous.c\
     c13_VectorCtrl_Asynchronous.c\
     c14_VectorCtrl_Asynchronous.c\
     c15_VectorCtrl_Asynchronous.c\
     c16_VectorCtrl_Asynchronous.c\
     c17_VectorCtrl_Asynchronous.c\
     c18_VectorCtrl_Asynchronous.c\
     c19_VectorCtrl_Asynchronous.c
MACHINE_SRC	= VectorCtrl_Asynchronous_sfun.c
MACHINE_REG = VectorCtrl_Asynchronous_sfun_registry.c
MEX_WRAPPER =
MAKEFILE    = VectorCtrl_Asynchronous_sfun.mak
MATLAB_ROOT	= D:\Matlab 2012
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   = 
AUX_INCLUDES   = 
ML_INCLUDES     = /I "$(MATLAB_ROOT)\extern\include"
SL_INCLUDES     = /I "$(MATLAB_ROOT)\simulink\include"
SF_INCLUDES     = /I "D:\Matlab 2012\stateflow\c\mex\include" /I "D:\Matlab 2012\stateflow\c\debugger\include"

DSP_INCLUDES    =

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(ML_INCLUDES) $(SL_INCLUDES) $(SF_INCLUDES) $(DSP_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMATLAB_MEX_FILE /nologo /MD $(COMPFLAGS)  
LDFLAGS = /nologo /dll /OPT:NOREF /export:mexFunction 
AUXLDFLAGS = 

#----------------------------- Source Files -----------------------------------

REQ_SRCS  = $(MACHINE_SRC) $(MACHINE_REG) $(MEX_WRAPPER) $(CHART_SRCS)

USER_ABS_OBJS =

AUX_ABS_OBJS =

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_ABS_OBJS) $(AUX_ABS_OBJS)
OBJLIST_FILE = VectorCtrl_Asynchronous_sfun.mol
SFCLIB = "D:\Matlab 2012\stateflow\c\mex\lib\win64\sfc_mex.lib" "D:\Matlab 2012\stateflow\c\debugger\lib\win64\sfc_debug.lib"
AUX_LNK_OBJS =
USER_LIBS =
LINK_MACHINE_LIBS =

DSP_LIBS    =
BLAS_LIBS   = "D:\Matlab 2012\extern\lib\win64\microsoft\libmwblascompat32.lib"

#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MACHINE)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

MEXLIB = "D:\Matlab 2012\extern\lib\win64\microsoft\libmx.lib" "D:\Matlab 2012\extern\lib\win64\microsoft\libmex.lib" "D:\Matlab 2012\extern\lib\win64\microsoft\libmat.lib" "D:\Matlab 2012\extern\lib\win64\microsoft\libfixedpoint.lib" "D:\Matlab 2012\extern\lib\win64\microsoft\libut.lib" "D:\Matlab 2012\extern\lib\win64\microsoft\libmwmathutil.lib" "D:\Matlab 2012\extern\lib\win64\microsoft\libemlrt.lib" "D:\Matlab 2012\lib\win64\libippmwipt.lib"

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS)
	@echo ### Linking ...
	$(LD) $(LDFLAGS) $(AUXLDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map" $(USER_LIBS) $(SFCLIB) $(AUX_LNK_OBJS) $(MEXLIB) $(LINK_MACHINE_LIBS) $(DSP_LIBS) $(BLAS_LIBS) @$(OBJLIST_FILE)
     mt -outputresource:"$(MEX_FILE_NAME);2" -manifest "$(MEX_FILE_NAME).manifest"
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

