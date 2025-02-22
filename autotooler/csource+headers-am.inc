CSOURCES = \
	src/LxElfChecksumCmd.cpp	\
	src/LxElfCmd.cpp		\
	src/LxElfCmdFactory.cpp		\
	src/LxElfDataBuffer.cpp		\
	src/LxElfEntrySteerFile.cpp	\
	src/LxElfException.cpp		\
	src/LxElfFile.cpp		\
	src/LxElfFillCmd.cpp		\
	src/LxElfFrontCmd.cpp		\
	src/LxElfRelocCmd.cpp		\
	src/LxElfSaveBinCmd.cpp		\
	src/LxElfSaveCmdBase.cpp	\
	src/LxElfSaveCmd.cpp		\
	src/LxElfSaveIHexCmd.cpp	\
	src/LxElfSaveSimpleCode.cpp	\
	src/LxElfSaveSRecCmd.cpp	\
	src/LxElfSaveTiTxtCmd.cpp	\
	src/LxElfStripCmd.cpp		\
	src/LxMain.cpp			\
	src/unicode_output.cpp

# INSTALL_HEADERS = 

# Config needs to have a separate recipe
# INSTALL_CONFIG = 

HHEADERS = \
	$(INSTALL_HEADERS)		\
	src/BuildTxt.h			\
	src/IARTPVersion.h		\
	src/LxElfChecksumCmd.h		\
	src/LxElfCmdFactory.h		\
	src/LxElfCmd.h			\
	src/LxElfDataBuffer.h		\
	src/LxElfEntrySteerFile.h	\
	src/LxElfException.h		\
	src/LxElfFile.h			\
	src/LxElfFillCmd.h		\
	src/LxElfFrontCmd.h		\
	src/LxElfParityCmd.h		\
	src/LxElfRelocCmd.h		\
	src/LxElfSaveBinCmd.h		\
	src/LxElfSaveCmdBase.h		\
	src/LxElfSaveCmd.h		\
	src/LxElfSaveIHexCmd.h		\
	src/LxElfSaveSimpleCode.h	\
	src/LxElfSaveSRecCmd.h		\
	src/LxElfSaveTiTxtCmd.h		\
	src/LxElfStripCmd.h		\
	src/LxElfTypes.h		\
	src/LxMain.h			\
	src/LxOutput.h			\
	src/unicode_output.h		\
	src/IARTPVersion.h		\
	src/BuildTxt.h			\
	windows/afxres.h		\
	windows/windows.h

# Demos needs to have a separate recipe
# INSTALL_DEMOS =

