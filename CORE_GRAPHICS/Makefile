SRC_FILES :=	$(wildcard src/*cpp)
SRC_FILES +=	$(wildcard src/*mm)
OBJ_FILES :=	$(patsubst %.cpp, %.o, $(SRC_FILES))
OBJ_FILES :=	$(patsubst %.mm, %.o, $(OBJ_FILES))
EXEC_NAME :=	OBJC_TEST
DYLIB_NAME := 	libcore_graphics_cpp.dylib

COMPILE_FLAGS := -std=c++17 -fpic -I./include -g -c 
LINK_FLAGS    := -shared -lstdc++ -lobjc -framework CoreGraphics

$(EXEC_NAME) : $(OBJ_FILES)
	gcc -o $(EXEC_NAME) $(OBJ_FILES) $(LINK_FLAGS)

dylib : $(OBJ_FILES)
	gcc -o lib/$(DYLIB_NAME) $(OBJ_FILES) $(LINK_FLAGS)

%.o : %.cpp
	gcc $(COMPILE_FLAGS) $< -o $@

%.o : %.mm
	gcc $(COMPILE_FLAGS) -ObjC++ $< -o $@

clean :
	rm src/*.o
	rm lib/$(DYLIB_NAME)
	rm $(EXEC_NAME)
