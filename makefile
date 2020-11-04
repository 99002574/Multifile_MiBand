all:	heart	imageGen
heart:	heart.cpp	heart_test.cpp
	g++ heart.cpp heart_test.cpp -lgtest -lgtest_main -lpthread -o all.out
imageGen:	imageCon.cpp	pbPlots.cpp	supportLib.cpp
	g++ imageCon.cpp pbPlots.cpp supportLib.cpp -lm

run:
	./all.out
	./a.out

clean:
	rm *.out
