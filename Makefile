all: Aula16-11-9

# %: %.cc
# 	g++ -std=c++11 $< -o $@

%: %.c
	gcc $< -o $@

