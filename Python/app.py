# -*- coding: UTF-8 -*-

def listar(nomes):
	print "Listando Nomes: "
	for nome in nomes:
		print nome

def cadastrar(nomes):
	nome = raw_input('Digite o nome: ')
	nomes.append(nome)

def menu():
	nomes = []
	escolha = ''
	while(escolha != '0'):
		escolha = raw_input('Digite 1 para cadastrar, 2 para listar, 0 para terminar: ')

		if (escolha == '1'):
			cadastrar(nomes)

		if(escolha == '2'):
			listar(nomes)	
menu()