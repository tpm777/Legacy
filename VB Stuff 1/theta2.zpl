^FX ~JSB            ^FX JS=Backup seq ON, A=After print, B=Before print
^FX  PRA,A          ^FX PR=Print speed, A=2 IPS Pront SPD, A=2 IPS Slew SPD
^XA             ^FX XA=Formatting start
^FX  ~TA-20          ^FX TA=Tear off distance, -120 to 120
^FX   MFL,L    ^FX MFL,L=Media feed at power on, L=One or more lbls
^FX  ^MMP            ^FX MM=Print mode, P=Peel off, C= Cutter Mode (pg3-3)
^FX  ^MNY            ^FX MN=Media tracking, Y=Non-continuous
^FX  ^MTT            ^FX MT=Media type, T=Thermal transfer
^FX  ^MD15           ^FX MD=Media darkness, -30 to 30 range
^FX  LH160,30       FX LH=Label home, X axis, Y axis
^FX  LT53           FX LT=Label top, -64 to 64 range
^FWN            ^FX FW=Field orientation, I=inverted 180
^FO200,40^BY3,2,50^B3,N,55,Y,N^FD\d:^FS ^FX 78A=Human field, B=Font id  FD=Field data
^PQ1            ^FX BY=Barcode element module chg  B3=code 39, PQ=print quantity
^XZ             ^FX XZ=end of format
