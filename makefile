all : heart.cpp heart_test.cpp pbPlots.cpp supportLib.cpp
	g++ heart.cpp heart_test.cpp -lgtest -lgtest_main -lpthread -o all.out
	g++ heart.cpp pbPlots.cpp supportLib.cpp -lm

run:
	./all.out
	./a.out

clean:
	rm *.out
