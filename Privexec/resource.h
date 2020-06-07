#ifndef RESOURCE_H
#define RESOURCE_H
#include "..\include\version.h"
#define IDI_APPLICATION_ICON 101
#define IDD_APPLICATION_DIALOG 102

#define IDM_PRIVEXEC_ABOUT 500

#define IDC_USER_COMBOX 1001
#define IDC_USER_STATIC 1002
#define IDC_COMMAND_STATIC 1003
#define IDC_COMMAND_COMBOX 1005
#define IDB_COMMAND_TARGET 1006
#define IDB_EXECUTE_BUTTON 1007
#define IDB_EXIT_BUTTON 1008
#define IDS_APPSTARTUP 1009
#define IDE_APPSTARTUP 1010
#define IDB_APPSTARTUP 1011
#define IDC_COMMAND_SID 1012
#define IDE_APPCONTAINER_APPMANIFEST 1013
#define IDC_APPCONTAINER_STATIC 1014
#define IDB_APPCONTAINER_BUTTON 1015
#define IDS_RECOMMENDED_CAPS 1016 // recommended
#define IDL_APPCONTAINER_LISTVIEW 1017
#define IDS_HELPMSG 1018
#define IDC_LPACMODE 1019
#define IDM_PRIVEXEC_THEME 1020

#define CS_LISTVIEW WS_BORDER | WS_VSCROLL | WS_TABSTOP | LVS_REPORT | LVS_NOCOLUMNHEADER

#define CS_BASE                                                                                    \
  BS_PUSHBUTTON | BS_TEXT | BS_DEFPUSHBUTTON | BS_CHECKBOX | BS_AUTOCHECKBOX | WS_CHILD |          \
      WS_OVERLAPPED | WS_VISIBLE

// Next default values for new objects
//
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE 103
#define _APS_NEXT_COMMAND_VALUE 40001
#define _APS_NEXT_CONTROL_VALUE 1008
#define _APS_NEXT_SYMED_VALUE 101
#endif
#endif

#endif
