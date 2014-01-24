#include <stdio.h>
#include <lua.hpp>
#include "tolua++.h"
#include "lok.h"
#include "ok.h"
int main(int argc,char** argv){
	printf("hello\n");
	ok* abc = new ok();
	abc->show(12);

	lua_State* L = luaL_newstate();

	luaL_openlibs(L);
	tolua_lok_open(L);
	luaL_dofile(L,"ok.lua");

	lua_close(L);
}
