#pragma once

#include "stdafx.h"

#include "resource.h"
#include "Constants.h"

#include "PE.h"

VOID				LaunchGUI (HINSTANCE);
LPWSTR				GetBinPath (HWND);
VOID				MakeListViewCols (HWND);
VOID				LoaderProc (WPARAM, uint32_t);
LRESULT CALLBACK	rootProc  (HWND, UINT, WPARAM, LPARAM);
LRESULT	CALLBACK	leftProc (HWND, UINT, WPARAM, LPARAM, UINT_PTR, DWORD_PTR);
LRESULT CALLBACK	rightProc (HWND, UINT, WPARAM, LPARAM, UINT_PTR, DWORD_PTR);

static HWND			rootWnd, subWndLeft, subWndRight, progBar;
static RECT			rootRect{}, leftRect{}, rightRect{};
static HBITMAP		hDropBean = NULL;
static HINSTANCE	hInst;
static bool			firstSel = true;
static bool			deleting = false;
