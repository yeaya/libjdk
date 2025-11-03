#ifndef _com_sun_tools_script_shell_Main_h_
#define _com_sun_tools_script_shell_Main_h_
//$ class com.sun.tools.script.shell.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BUNDLE_NAME")
#undef BUNDLE_NAME
#pragma push_macro("DEFAULT_LANGUAGE")
#undef DEFAULT_LANGUAGE
#pragma push_macro("EXIT_CMD_NO_CLASSPATH")
#undef EXIT_CMD_NO_CLASSPATH
#pragma push_macro("EXIT_CMD_NO_ENCODING")
#undef EXIT_CMD_NO_ENCODING
#pragma push_macro("EXIT_CMD_NO_FILE")
#undef EXIT_CMD_NO_FILE
#pragma push_macro("EXIT_CMD_NO_LANG")
#undef EXIT_CMD_NO_LANG
#pragma push_macro("EXIT_CMD_NO_PROPNAME")
#undef EXIT_CMD_NO_PROPNAME
#pragma push_macro("EXIT_CMD_NO_SCRIPT")
#undef EXIT_CMD_NO_SCRIPT
#pragma push_macro("EXIT_ENGINE_NOT_FOUND")
#undef EXIT_ENGINE_NOT_FOUND
#pragma push_macro("EXIT_FILE_NOT_FOUND")
#undef EXIT_FILE_NOT_FOUND
#pragma push_macro("EXIT_MULTIPLE_STDIN")
#undef EXIT_MULTIPLE_STDIN
#pragma push_macro("EXIT_NO_ENCODING_FOUND")
#undef EXIT_NO_ENCODING_FOUND
#pragma push_macro("EXIT_SCRIPT_ERROR")
#undef EXIT_SCRIPT_ERROR
#pragma push_macro("EXIT_SUCCESS")
#undef EXIT_SUCCESS
#pragma push_macro("EXIT_UNKNOWN_OPTION")
#undef EXIT_UNKNOWN_OPTION
#pragma push_macro("PROGRAM_NAME")
#undef PROGRAM_NAME

namespace java {
	namespace io {
		class File;
		class InputStream;
		class PrintStream;
		class Reader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class ResourceBundle;
	}
}
namespace javax {
	namespace script {
		class ScriptEngine;
		class ScriptEngineManager;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace script {
				namespace shell {

class $export Main : public ::java::lang::Object {
	$class(Main, 0, ::java::lang::Object)
public:
	Main();
	void init$();
	static void addFileSource(::javax::script::ScriptEngine* se, $String* fileName, $String* encoding);
	static void addInteractiveMode(::javax::script::ScriptEngine* se);
	static void addStringSource(::javax::script::ScriptEngine* se, $String* source);
	static void checkClassPath($StringArray* args);
	static $Object* evaluateReader(::javax::script::ScriptEngine* se, ::java::io::Reader* reader, $String* name);
	static $Object* evaluateStream(::javax::script::ScriptEngine* se, ::java::io::InputStream* is, $String* name, $String* encoding);
	static $Object* evaluateString(::javax::script::ScriptEngine* se, $String* script, bool exitOnError);
	static void evaluateString(::javax::script::ScriptEngine* se, $String* script);
	static ::java::net::URL* fileToURL(::java::io::File* file);
	static ::java::io::PrintStream* getError();
	static ::java::io::InputStream* getIn();
	static $String* getMessage($String* key, $ObjectArray* params);
	static $String* getPrompt(::javax::script::ScriptEngine* se);
	static ::javax::script::ScriptEngine* getScriptEngine($String* lang);
	static void initScriptEngine(::javax::script::ScriptEngine* se);
	static void listScriptEngines();
	static void main($StringArray* args);
	static $Array<::java::net::URL>* pathToURLs($String* path);
	static $StringArray* processOptions($StringArray* args);
	static void processSource(::javax::script::ScriptEngine* se, $String* filename, $String* encoding);
	static void setScriptArguments(::javax::script::ScriptEngine* se, $StringArray* args);
	static $String* setScriptFilename(::javax::script::ScriptEngine* se, $String* name);
	static void usage(int32_t exitCode);
	static const int32_t EXIT_SUCCESS = 0;
	static const int32_t EXIT_CMD_NO_CLASSPATH = 1;
	static const int32_t EXIT_CMD_NO_FILE = 2;
	static const int32_t EXIT_CMD_NO_SCRIPT = 3;
	static const int32_t EXIT_CMD_NO_LANG = 4;
	static const int32_t EXIT_CMD_NO_ENCODING = 5;
	static const int32_t EXIT_CMD_NO_PROPNAME = 6;
	static const int32_t EXIT_UNKNOWN_OPTION = 7;
	static const int32_t EXIT_ENGINE_NOT_FOUND = 8;
	static const int32_t EXIT_NO_ENCODING_FOUND = 9;
	static const int32_t EXIT_SCRIPT_ERROR = 10;
	static const int32_t EXIT_FILE_NOT_FOUND = 11;
	static const int32_t EXIT_MULTIPLE_STDIN = 12;
	static $String* DEFAULT_LANGUAGE;
	static ::java::util::List* scripts;
	static ::javax::script::ScriptEngineManager* engineManager;
	static ::java::util::Map* engines;
	static ::java::util::ResourceBundle* msgRes;
	static $String* BUNDLE_NAME;
	static $String* PROGRAM_NAME;
};

				} // shell
			} // script
		} // tools
	} // sun
} // com

#pragma pop_macro("BUNDLE_NAME")
#pragma pop_macro("DEFAULT_LANGUAGE")
#pragma pop_macro("EXIT_CMD_NO_CLASSPATH")
#pragma pop_macro("EXIT_CMD_NO_ENCODING")
#pragma pop_macro("EXIT_CMD_NO_FILE")
#pragma pop_macro("EXIT_CMD_NO_LANG")
#pragma pop_macro("EXIT_CMD_NO_PROPNAME")
#pragma pop_macro("EXIT_CMD_NO_SCRIPT")
#pragma pop_macro("EXIT_ENGINE_NOT_FOUND")
#pragma pop_macro("EXIT_FILE_NOT_FOUND")
#pragma pop_macro("EXIT_MULTIPLE_STDIN")
#pragma pop_macro("EXIT_NO_ENCODING_FOUND")
#pragma pop_macro("EXIT_SCRIPT_ERROR")
#pragma pop_macro("EXIT_SUCCESS")
#pragma pop_macro("EXIT_UNKNOWN_OPTION")
#pragma pop_macro("PROGRAM_NAME")

#endif // _com_sun_tools_script_shell_Main_h_