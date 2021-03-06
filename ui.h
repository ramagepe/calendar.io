#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <pthread.h>
#include "user.h"

#define DAY_LENGTH 10
#define MONTH_LENGTH 12

#define main_color 3
#define sec_color 15
#define ESC 27

#ifndef UI_H
#define UI_H

void logOutMessage();
void logInMessage();
void logInErrorMessage();
void userExistsMessage();
void deleteWarningMessage();

void UIintro();
void UIheader();
void UIcalendarTable(treeNode * userNode);
void UIcalendarHeader (int x0, int y0);
void UIcalendarPrtLines (int x0, int y0);
void UIdaily(treeNode * userNode);
void dayName(int dayNumber, char day[]);
void monthName(int monthNumber, char month[]);
void hidecursor(int ver);
void showTime();

void adminMenu();
void mainMenu();
void userMenu();
void profileMenu(user u);

void dragonKing();
void adminLogo();

void color(int c);
void gotoxy(int x, int y);

#endif // UI_H
