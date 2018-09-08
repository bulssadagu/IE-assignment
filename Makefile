Stock : CompanyCode.o CompanyEarning.o CompanyName.o IEproject.o Search.o Transfer.o input.o Compute.o
		gcc -o Stock.exe CompanyCode.o CompanyEarning.o CompanyName.o IEproject.o Search.o Transfer.o input.o Compute.o

CompanyCode.o : Stock.h CompanyCode.c
		gcc -c CompanyCode.c

CompanyEarning.o : Stock.h CompanyEarning.c
		gcc -c CompanyEarning.c

CompanyName.o : Stock.h CompanyName.c
		gcc -c CompanyName.c

IEproject.o : Stock.h IEproject.c
		gcc -c IEproject.c

Search.o : Stock.h Search.c
		gcc -c Search.c

Transfer : Stock.h Transfer.c
		gcc -c Transfer.c

input : Stock.h input.c
		gcc -c input.c

Compute : Stock.h Compute.c
		gcc -c Compute.c

clean :
		rm *.o Stock
