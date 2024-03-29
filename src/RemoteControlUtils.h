﻿////////////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Util functions for the Remote control
/// 
/// @author   park
/// @date     Mon Nov 13 15:12:18 2023
/// 
/// Copyright(C) 2023 Bandisoft, All rights reserved.
/// 
////////////////////////////////////////////////////////////////////////////////////////////////////


#pragma once



#define APP_CLASS_NAME				L"BandiViewClass"
#define BANDIVIEW_INFO_WND_CLASS	L"BANDIVIEW_INFO_WND_CLASS"
#define WMCOPYDATAMAGIC				0x20220905



////////////////////////////////////////////////////////////////////////////////////////////////////
///         
///         CMD_XX commands
///         
/// @date   Mon Nov 13 15:44:27 2023
////////////////////////////////////////////////////////////////////////////////////////////////////
struct Command
{
	LPCWSTR		str;
	DWORD		cmd;
};
size_t			GetSampleCommandsSize();
const Command*	GetSampleCommands();



////////////////////////////////////////////////////////////////////////////////////////////////////
///         
///         string based commands
///         
/// @date   Mon Nov 13 15:44:16 2023
////////////////////////////////////////////////////////////////////////////////////////////////////
struct StringCommand
{
	LPCWSTR		str;
	LPCWSTR		sampleParam;

};
size_t					GetStringCommandsSize();
const StringCommand*	GetStringCommands();







HWND	FindBandiViewWnd();

HWND	FindBandiInfoWnd();

DWORD	SendStringCommand2BandiView(HWND hWnd, LPCWSTR commandString);


bool	LaunchBandiView(CString param);





