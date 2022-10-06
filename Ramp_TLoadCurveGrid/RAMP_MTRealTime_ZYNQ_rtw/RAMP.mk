# File    : MTRealTime_ZYNQ.tmf (for Release 2010b and later)
#
# Abstract:
#       Real-Time Workshop template makefile for building a real-time
#       version of a Simulink model to run on ModelingTech
#       RT Series hardware. This template makefile uses generated C code
#       and supports the GCC compiler.
#
# 		This makefile attempts to conform to the guidelines specified in the
# 		IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (cs-make) which is located in MTREALTIME_ROOT/tmw/toolchain/gcc.
#
#       Note that this template is automatically customized by the Real-Time
#       Workshop build procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#	  	OPT_OPTS       - Optimization options. Default is -O.
#	  	CPP_OPTS       - C++ compiler options.
#	  	OPTS           - User specific compile options.
#	  	USER_SRCS      - Additional user sources, such as files needed by
#				   S-functions.
#	  	USER_INCLUDES  - Additional include paths
#				   (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#
#       To enable debugging:
#         set MTDEBUG = 1 below, which will trigger OPTS=-g and
#          LDFLAGS += -g (may vary with compiler version, see compiler doc) 
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see grt.tlc

#------------------------ Macros read by make_rtw -----------------------------
#
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for 
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure 
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = C:\Users\Public\modelingtech\toolchain\gnuwin_2018.2\bin\make.exe
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = MTRealTime_ZYNQ.tlc
BUILD_SUCCESS	= \#\#\# Created

MAKEFILE_FILESEP = /

#---------------------- Tokens expanded by make_rtw ---------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the 
# Real-Time Workshop build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS         - List of S-functions.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  SOLVER              - Solver source file name
#  NUMST               - Number of sample times
#  TID01EQ             - yes (1) or no (0): Are sampling rates of continuous task
#                        (tid=0) and 1st discrete task equal.
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  EXT_MODE            - yes (1) or no (0): Build for external mode
#  TMW_EXTMODE_TESTING - yes (1) or no (0): Build ext_test.c for external mode
#                        testing.
#  EXTMODE_TRANSPORT   - Index of transport mechanism (e.g. tcpip, serial) for extmode
#  EXTMODE_STATIC      - yes (1) or no (0): Use static instead of dynamic mem alloc.
#  EXTMODE_STATIC_SIZE - Size of static memory allocation buffer.

CC           			= C:\Users\Public\modelingtech\toolchain\gcc-arm-none-eabi_2018.2\bin\arm-none-eabi-gcc.exe

MODEL           		= RAMP
MODULES         		= RAMP_data.c mt_modelframework.c rtGetInf.c rtGetNaN.c rt_nonfinite.c
MAKEFILE        		= RAMP.mk
MATLAB_ROOT     		= C:/Program Files/MATLAB/R2018b
ALT_MATLAB_ROOT 		= C:/PROGRA~1/MATLAB/R2018b
MATLAB_BIN      		= C:/Program Files/MATLAB/R2018b/bin
ALT_MATLAB_BIN  		= C:/PROGRA~1/MATLAB/R2018b/bin
MASTER_ANCHOR_DIR    	= 
START_DIR          		= D:/1_HILModels/5_Drive/Model/CtrlBlock4Sim/Ramp_TLoadCurveGrid
S_FUNCTIONS     		= DCPowerCalc_wrapper.c MechPowerCalc_wrapper.c RAMP_FUNCTION_wrapper.c SineSignalGen_wrapper.c TorqueRefGen_wrapper.c VgGridGen_wrapper.c
S_FUNCTIONS_LIB 		= 
SOLVER          		= 
NUMST           		= 1
TID01EQ         		= 0
NCSTATES        		= 0
BUILDARGS       		=  EXT_MODE=0 EXTMODE_STATIC_ALLOC=0 TMW_EXTMODE_TESTING=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 MAT_FILE=0 MTDEBUG=0 MTOPT="Default" OPTS="" MTSTANDALONE_GNU_SETUP="" COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 ISPROTECTINGMODEL=NOTPROTECTING
MULTITASKING    		= 0
EXT_MODE        		= 0
MATLAB_VERSION			= R2018b
STR_MATLAB_VERSION 		= "$(MATLAB_VERSION)"

MODELREFS            	= 
SHARED_SRC           	= 
SHARED_SRC_DIR       	= 
SHARED_BIN_DIR       	= 
SHARED_LIB           	= 
TARGET_LANG_EXT			= c
GCC_VERSION				:= $(shell $(CC) -dumpversion)
OPTIMIZATION_FLAGS   	= 
ADDITIONAL_LDFLAGS   	= 

# To enable debugging:
# set DEBUG_BUILD = 1
DEBUG_BUILD          	:= $(MTDEBUG)
#DEBUG_BUILD = 1

MTREALTIME_ROOT		:= $(subst \,/,C:\Users\Public\modelingtech\MTRealTime2020\2020)
MTREALTIME_LIB_DIR     	= $(MTREALTIME_ROOT)/ModelInterface/tmw/lib/armv7-a/gcc/$(GCC_VERSION)/$(MATLAB_VERSION)
ifeq ($(DEBUG_BUILD),1)
	MTREALTIME_LIB_DIR 	:= $(MTREALTIME_LIB_DIR)/DEBUG
else
	MTREALTIME_LIB_DIR 	:= $(MTREALTIME_LIB_DIR)/RELEASE
endif

#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
	MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
	MATLAB_BIN := $(ALT_MATLAB_BIN)
endif

#--------------------------- Model and reference models -----------------------
MODELLIB                  = RAMPlib.lib
MODELREF_LINK_LIBS   	  = 
MODELREF_INC_PATH         = 
RELATIVE_PATH_TO_ANCHOR   = ..
# NONE: standalone, SIM: modelref sim, RTW: modelref rtw
MODELREF_TARGET_TYPE      = NONE

#--------------------------- Tool Specifications ------------------------------

# Optimize for ARM v7-A
CPU = armv7-a

LD	= $(CC)
AR  = C:\Users\Public\modelingtech\toolchain\gcc-arm-none-eabi_2018.2\bin\arm-none-eabi-ar.exe
RM 	= C:\Users\Public\modelingtech\toolchain\gnuwin_2018.2\bin\rm.exe
#------------------------------ Include/Lib Path ------------------------------

MATLAB_INCLUDES := \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common 
	

# Additional file include paths
ADD_INCLUDES = \
	-I$(START_DIR) \
	-I$(START_DIR)/RAMP_MTRealTime_ZYNQ_rtw \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common \


SHARED_INCLUDES =
ifneq ($(SHARED_SRC_DIR),)
	SHARED_INCLUDES = -I$(SHARED_SRC_DIR) 
endif

INCLUDES := -I. -I.. -I$(RELATIVE_PATH_TO_ANCHOR) $(MATLAB_INCLUDES) \
			$(ADD_INCLUDES) $(USER_INCLUDES) $(MODELREF_INC_PATH) $(SHARED_INCLUDES)

#----------------------------- Real-Time Model --------------------------------

RTM_CC_OPTS := -DUSE_RTMODEL

#----------------- Compiler and Linker Options --------------------------------

# General User Options
USE_REBUILT_RTW_LIB_FILES = 1

# Required Options
#CC_OPTS	= -c -fdollars-in-identifiers -march=$(CPU) -fPIC -Wall -MD -fvisibility=protected
CC_OPTS	= -Wall -g -c -fmessage-length=0 -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard
# Optimization Options
ifeq ($(MTOPT), Default)
#	CC_OPTS += $(DEFAULT_OPT_OPTS)
CC_OPTS += -O1
endif
ifeq ($(MTOPT), Favor fast code)
	CC_OPTS += -O2
endif
ifeq ($(MTOPT), Favor small code)
	CC_OPTS += -Os
endif

ifneq ($(OPTIMIZATION_FLAGS),)
	CC_OPTS += $(OPTS) $(RTM_CC_OPTS) $(OPTIMIZATION_FLAGS)
else
	CC_OPTS += $(OPT_OPTS) $(OPTS) $(RTM_CC_OPTS)
endif

# Set OPTS = -g and any additional flags for debugging
ifeq ($(DEBUG_BUILD),1)
	CC_OPTS	+= -g
	LDFLAGS += -g
endif

ifeq ($(MODELREF_TARGET_TYPE), NONE)
	CC_OPTS += -DMT_ROOTMODEL_$(MODEL)
else
	CC_OPTS += -DMT_REFMODEL_$(MODEL)
endif

CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DRT -DNUMST=$(NUMST) \
		  -DTID01EQ=$(TID01EQ) -DNCSTATES=$(NCSTATES) \
                  -DMT=$(MULTITASKING) -DHAVESTDIO \
                  -DMODELINGTECH_SIT -Dstandalone

CFLAGS		= $(CC_OPTS) $(CPP_REQ_DEFINES) $(INCLUDES) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)"
CPPFLAGS 	= $(CC_OPTS) -MD $(CPP_OPTS) $(CPP_REQ_DEFINES) $(INCLUDES)
LDFLAGS  	+= $(ADDITIONAL_LDFLAGS)

#LDFLAGS  	+= -lm -lrt 
#LDFLAGS  	+= -LC:/MTRealTime_arm-linux-gnueabihf/arm-linux-gnueabihf/libc/usr/lib

#LDFLAGS  	+=-lgcc -LC:/gcc-linaro-6.2.1-2016.11-i686-mingw32arm-linux-gnueabihf/lib/gcc/arm-linux-gnueabihf/6.2.1
#LDFLAGS  	+= --no-undefined
#LDFLAGS  	+=-lgcc_s -LC:/gcc-linaro-6.2.1-2016.11-i686-mingw32_arm-linux-gnueabihf/arm-linux-gnueabihf/libc/lib

ARFLAGS 	= rcs

#----------------------------- Source Files -----------------------------------

MODEL_FILE		= $(MODEL).$(TARGET_LANG_EXT)
MODEL_DATA_FILE	= $(MODEL)_data.$(TARGET_LANG_EXT)

#Shared library
ifeq ($(MODELREF_TARGET_TYPE), NONE)
	PRODUCT   	= lib$(MODEL).a
	REQ_SRCS	= $(MODEL_FILE) $(MODULES) $(SOLVER) rt_sim.c
else
	#Model Reference Target
	PRODUCT		= $(MODELLIB)
	REQ_SRCS 	= $(MODULES)
endif

SRCS 		= $(REQ_SRCS) $(USER_SRCS) $(S_FUNCTIONS)
OBJS      = $(addsuffix .o, $(basename $(SRCS)))
SHARED_OBJS := $(addsuffix .o, $(basename $(wildcard $(SHARED_SRC))))

# ------------------------- Additional Libraries ------------------------------

LIBS =


LIBS 	+= $(S_FUNCTIONS_LIB)

#--------------------------------- Rules --------------------------------------

# Recompilation will occur if a change is detected in the source, but not necessarily if only type definitions have changed. 
# To guarantee all model references are using the parameter type definition, we must call clean before each build.

ifeq ($(MODELREF_TARGET_TYPE), NONE)
#--- Stand-alone model ---
$(PRODUCT) : create_lib_dir clean $(OBJS) $(SHARED_LIB) $(LIBS) $(MODELREF_LINK_LIBS)
	@echo ### Building target ...
	
# List linking libraries starting with the least generic relationship to the model.  
# The linker handles libraries by scanning through for define symbols that been referenced but not defined.
#	$(AR) -rcs "$@" $(OBJS) $(MODELREF_LINK_LIBS) $(SHARED_LIB) $(LIBS)
	$(AR) -r "$@" $(OBJS)
	@echo $(BUILD_SUCCESS) static library : %cd%\$(PRODUCT)
else
#--- Model reference RTW Target ---
$(PRODUCT) : create_lib_dir clean $(OBJS) $(SHARED_LIB)
	@echo ### Archiving ...
	$(AR) $(ARFLAGS) "$@" $(OBJS)
	@echo $(BUILD_SUCCESS) static library : %cd%\$(PRODUCT)
endif

# Create the precompiled object directory if it doesn't exist
create_lib_dir : 
	@if not exist "$(subst /,\,$(MTREALTIME_LIB_DIR))"\ (mkdir "$(subst /,\,$(MTREALTIME_LIB_DIR))")

%.o : %.c
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<

%.o : ../%.c
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<

%.o : %.cpp
	@echo ### Compiling $<
	$(CC) $(CPPFLAGS) -o $@ $<

%.o : ../%.cpp
	@echo ### Compiling $<
	$(CC) $(CPPFLAGS) -o $@ $<

%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<

%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	@echo ### Compiling $<
	$(CC) $(CPPFLAGS) -o $@ $<
	
%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<
	
%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<
%.o : $(MATLAB_ROOT)/simulink/src/%.c
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	@echo ### Compiling $<
	$(CC) $(CPPFLAGS) -o $@ $<
%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	@echo ### Compiling $<
	$(CC) $(CPPFLAGS) -o $@ $<


$(MTREALTIME_LIB_DIR)/%.o:$(MATLAB_ROOT)/rtw/c/src/%.c
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<
$(MTREALTIME_LIB_DIR)/%.o:$(MATLAB_ROOT)/simulink/src/%.c
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<


$(MTREALTIME_LIB_DIR)/%.o:$(MATLAB_ROOT)/rtw/c/src/%.cpp
	@echo ### Compiling $<
	$(CC) $(CPPFLAGS) -o $@ $<
$(MTREALTIME_LIB_DIR)/%.o:$(MATLAB_ROOT)/simulink/src/%.cpp
	@echo ### Compiling $<
	$(CC) $(CPPFLAGS) -o $@ $<


ifeq "$(TARGET_LANG_EXT)" "cpp"
$(MODEL).o : $(MODEL_FILE)
	@echo ### Compiling model source: $(MODEL_FILE)
	$(CC) $(CPPFLAGS) -DMT_REALTIME_MAINMODELFILE -o $@ $<
	
$(MODEL)_data.o : $(MODEL_DATA_FILE)
	@echo ### Compiling model data file: $(MODEL_DATA_FILE)
	$(CC) $(CPPFLAGS) -DMT_REALTIME_MODELDATAFILE -o $@ $<
else
$(MODEL).o : $(MODEL_FILE)
	@echo ### Compiling model source: $(MODEL_FILE)
	$(CC) $(CFLAGS) -DMT_REALTIME_MAINMODELFILE -o $@ $<
	
$(MODEL)_data.o : $(MODEL_DATA_FILE)
	@echo ### Compiling model data file: $(MODEL_DATA_FILE)
	$(CC) $(CFLAGS) -DMT_REALTIME_MODELDATAFILE -o $@ $<
endif

%.o : $(MATLAB_ROOT)/simulink/src/%.c
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<

%.o : $(MATLAB_ROOT)/simulink/src/%.cpp
	@echo ### Compiling $<
	$(CC) $(CPPFLAGS) -o $@ $<

# Libraries:







#----------------------------- Dependencies -----------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw

$(SHARED_BIN_DIR)/%.o : $(SHARED_SRC_DIR)/%.c 
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<
	
$(SHARED_BIN_DIR)/%.o : $(SHARED_SRC_DIR)/%.cpp
	@echo ### Compiling $<
	$(CC) $(CFLAGS) -o $@ $<
	
$(SHARED_LIB) : $(SHARED_OBJS)
	@echo ### Creating $@
	$(AR) $(ARFLAGS) $@ $(SHARED_OBJS)
	@echo $(BUILD_SUCCESS) static library : $@ 

#----------------------------- Utilities -----------------------------------

clean:
	@echo ### Deleting the objects and $(PRODUCT)
	-$(RM) -rf $(OBJS) $(PRODUCT)