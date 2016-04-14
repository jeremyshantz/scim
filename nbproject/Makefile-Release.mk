#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/cppunitlite/Failure.o \
	${OBJECTDIR}/cppunitlite/Main.o \
	${OBJECTDIR}/cppunitlite/Test.o \
	${OBJECTDIR}/cppunitlite/TestRegistry.o \
	${OBJECTDIR}/cppunitlite/TestResult.o \
	${OBJECTDIR}/scim/Email.o \
	${OBJECTDIR}/scim/EnterpriseUser.o \
	${OBJECTDIR}/scim/Group.o \
	${OBJECTDIR}/scim/Manager.o \
	${OBJECTDIR}/scim/Meta.o \
	${OBJECTDIR}/scim/Name.o \
	${OBJECTDIR}/scim/PhoneNumber.o \
	${OBJECTDIR}/scim/Resource.o \
	${OBJECTDIR}/scim/User.o \
	${OBJECTDIR}/tests.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/scims

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/scims: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/scims ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/cppunitlite/Failure.o: cppunitlite/Failure.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/Failure.o cppunitlite/Failure.cpp

${OBJECTDIR}/cppunitlite/Main.o: cppunitlite/Main.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/Main.o cppunitlite/Main.cpp

${OBJECTDIR}/cppunitlite/Test.o: cppunitlite/Test.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/Test.o cppunitlite/Test.cpp

${OBJECTDIR}/cppunitlite/TestRegistry.o: cppunitlite/TestRegistry.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/TestRegistry.o cppunitlite/TestRegistry.cpp

${OBJECTDIR}/cppunitlite/TestResult.o: cppunitlite/TestResult.cpp 
	${MKDIR} -p ${OBJECTDIR}/cppunitlite
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cppunitlite/TestResult.o cppunitlite/TestResult.cpp

${OBJECTDIR}/scim/Email.o: scim/Email.cpp 
	${MKDIR} -p ${OBJECTDIR}/scim
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scim/Email.o scim/Email.cpp

${OBJECTDIR}/scim/EnterpriseUser.o: scim/EnterpriseUser.cpp 
	${MKDIR} -p ${OBJECTDIR}/scim
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scim/EnterpriseUser.o scim/EnterpriseUser.cpp

${OBJECTDIR}/scim/Group.o: scim/Group.cpp 
	${MKDIR} -p ${OBJECTDIR}/scim
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scim/Group.o scim/Group.cpp

${OBJECTDIR}/scim/Manager.o: scim/Manager.cpp 
	${MKDIR} -p ${OBJECTDIR}/scim
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scim/Manager.o scim/Manager.cpp

${OBJECTDIR}/scim/Meta.o: scim/Meta.cpp 
	${MKDIR} -p ${OBJECTDIR}/scim
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scim/Meta.o scim/Meta.cpp

${OBJECTDIR}/scim/Name.o: scim/Name.cpp 
	${MKDIR} -p ${OBJECTDIR}/scim
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scim/Name.o scim/Name.cpp

${OBJECTDIR}/scim/PhoneNumber.o: scim/PhoneNumber.cpp 
	${MKDIR} -p ${OBJECTDIR}/scim
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scim/PhoneNumber.o scim/PhoneNumber.cpp

${OBJECTDIR}/scim/Resource.o: scim/Resource.cpp 
	${MKDIR} -p ${OBJECTDIR}/scim
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scim/Resource.o scim/Resource.cpp

${OBJECTDIR}/scim/User.o: scim/User.cpp 
	${MKDIR} -p ${OBJECTDIR}/scim
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scim/User.o scim/User.cpp

${OBJECTDIR}/tests.o: tests.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/tests.o tests.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/scims

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
