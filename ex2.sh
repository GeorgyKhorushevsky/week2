
N=210
while [ $N -gt 0 ]
do
    if $(ln ex2.txt ex2.txt.lock 2> /dev/null); then
        echo $(($(tail -n 1 ex2.txt) + 1)) >> ex2.txt
        rm ex2.txt.lock
        N=$(($N-1))
    fi
done