path = ./easy_training/rook/main
archive_name = ./easy_training/rook/rook.cpp

cldb: 
	rm -rf $(path) | g++ -o $(path) $(archive_name)
