all:
	@echo "Compilando o programa . . ."
	@gcc -c ./src/pacote.c -I ./header -o ./obj/pacote.o
	@gcc -c ./src/ListaPacotes.c -I ./header -o ./obj/ListaPacotes.o
	@gcc -c ./src/drone.c -I ./header -o ./obj/drone.o
	@gcc -c ./src/preenchimento_arquivo.c -I ./header -o ./obj/preenchimento_arquivo.o
	@gcc -c ./src/galpao.c -I ./header -o ./obj/galpao.o
	@gcc -c ./src/preenchimento_manual.c -I ./header -o ./obj/preenchimento_manual.o
	@gcc  ./main.c ./obj/*.o -I ./header -o ./bin/main
	


run:
	@echo "Rodando o programa . . ."
	@./bin/main

clean:
	@echo "Limpando pastas bin e obj . . ."
	@rm -f ./bin/* ./obj/*

.PHONY: all run clean