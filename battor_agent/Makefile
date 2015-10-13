battor_agent: battor_agent_bin.cc battor_agent_lib.o
	clang++ battor_agent_bin.cc -o battor_agent battor_agent_lib.o

battor_agent_lib.o: battor_agent.cc battor_agent.h
	clang++ -c battor_agent.cc -o battor_agent_lib.o

clean:
	rm battor_agent *.o 
