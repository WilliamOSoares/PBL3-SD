# set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
# set output 'simple.1.png'
set grid
set title "PBL 3" 
set title  font ",20"
set xlabel "Tempo"
set ylabel "Amplitude"
plot "BaseDeDados.txt" smooth csplines
pause 1
reread
