for ( int x=2;x<116;x++)
    {
        gotoxy(x,0);
        cout << char(196);
        gotoxy(x,29);
        cout << char(196);
    }
      for ( int y=1;y<29;y++)
        {
        gotoxy(1,y);
        cout << char(179);
        gotoxy(116,y);
        cout << char(179);
        }
    gotoxy(1,0); cout <<char(218);
    gotoxy(116,0); cout <<char(191);
    gotoxy(1,29); cout <<char(192);
    gotoxy(116,29); cout <<char(217);
