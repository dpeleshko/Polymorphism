struct Popup {
  Popup(int x1, int y1, int x2, int y2)   	{/* збереження координат*/}
  virtual void Out(const char* mes) = 0;
  virtual ~Popup() 					{/*відновлення перекривання*/}
};


struct PopupWin : public Popup{
  PopupWin() : Popup(1, 10, 20, 30) 		{/*побудова вмісту вікна*/}
  void Out(const char* mes)				{/* вивід*/ }
  ~PopupWin()						{/* знищення вмісту вікна*/}
};
int main()  {
  PopupWin w;
  w.Out("Error");
}

