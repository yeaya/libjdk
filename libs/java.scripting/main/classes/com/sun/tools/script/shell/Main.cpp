#include <com/sun/tools/script/shell/Main.h>

#include <com/sun/tools/script/shell/Main$1.h>
#include <com/sun/tools/script/shell/Main$2.h>
#include <com/sun/tools/script/shell/Main$3.h>
#include <com/sun/tools/script/shell/Main$Command.h>
#include <java/io/BufferedReader.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/security/SecureClassLoader.h>
#include <java/text/MessageFormat.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <java/util/ResourceBundle.h>
#include <javax/script/ScriptEngine.h>
#include <javax/script/ScriptEngineFactory.h>
#include <javax/script/ScriptEngineManager.h>
#include <javax/script/ScriptException.h>
#include <jcpp.h>

#undef ARGV
#undef BUNDLE_NAME
#undef DEFAULT_LANGUAGE
#undef EXIT_CMD_NO_CLASSPATH
#undef EXIT_CMD_NO_ENCODING
#undef EXIT_CMD_NO_FILE
#undef EXIT_CMD_NO_LANG
#undef EXIT_CMD_NO_PROPNAME
#undef EXIT_CMD_NO_SCRIPT
#undef EXIT_ENGINE_NOT_FOUND
#undef EXIT_FILE_NOT_FOUND
#undef EXIT_MULTIPLE_STDIN
#undef EXIT_NO_ENCODING_FOUND
#undef EXIT_SCRIPT_ERROR
#undef EXIT_SUCCESS
#undef EXIT_UNKNOWN_OPTION
#undef FILENAME
#undef PROGRAM_NAME

using $URLArray = $Array<::java::net::URL>;
using $Main$1 = ::com::sun::tools::script::shell::Main$1;
using $Main$2 = ::com::sun::tools::script::shell::Main$2;
using $Main$3 = ::com::sun::tools::script::shell::Main$3;
using $Main$Command = ::com::sun::tools::script::shell::Main$Command;
using $BufferedReader = ::java::io::BufferedReader;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $URLClassLoader = ::java::net::URLClassLoader;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $MessageFormat = ::java::text::MessageFormat;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ScriptEngine = ::javax::script::ScriptEngine;
using $ScriptEngineFactory = ::javax::script::ScriptEngineFactory;
using $ScriptEngineManager = ::javax::script::ScriptEngineManager;
using $ScriptException = ::javax::script::ScriptException;

namespace com {
	namespace sun {
		namespace tools {
			namespace script {
				namespace shell {

$FieldInfo _Main_FieldInfo_[] = {
	{"EXIT_SUCCESS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_SUCCESS)},
	{"EXIT_CMD_NO_CLASSPATH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_CMD_NO_CLASSPATH)},
	{"EXIT_CMD_NO_FILE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_CMD_NO_FILE)},
	{"EXIT_CMD_NO_SCRIPT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_CMD_NO_SCRIPT)},
	{"EXIT_CMD_NO_LANG", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_CMD_NO_LANG)},
	{"EXIT_CMD_NO_ENCODING", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_CMD_NO_ENCODING)},
	{"EXIT_CMD_NO_PROPNAME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_CMD_NO_PROPNAME)},
	{"EXIT_UNKNOWN_OPTION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_UNKNOWN_OPTION)},
	{"EXIT_ENGINE_NOT_FOUND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_ENGINE_NOT_FOUND)},
	{"EXIT_NO_ENCODING_FOUND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_NO_ENCODING_FOUND)},
	{"EXIT_SCRIPT_ERROR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_SCRIPT_ERROR)},
	{"EXIT_FILE_NOT_FOUND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_FILE_NOT_FOUND)},
	{"EXIT_MULTIPLE_STDIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, EXIT_MULTIPLE_STDIN)},
	{"DEFAULT_LANGUAGE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, DEFAULT_LANGUAGE)},
	{"scripts", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/tools/script/shell/Main$Command;>;", $PRIVATE | $STATIC, $staticField(Main, scripts)},
	{"engineManager", "Ljavax/script/ScriptEngineManager;", nullptr, $PRIVATE | $STATIC, $staticField(Main, engineManager)},
	{"engines", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/script/ScriptEngine;>;", $PRIVATE | $STATIC, $staticField(Main, engines)},
	{"msgRes", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(Main, msgRes)},
	{"BUNDLE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Main, BUNDLE_NAME)},
	{"PROGRAM_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(Main, PROGRAM_NAME)},
	{}
};

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)()>(&Main::init$))},
	{"addFileSource", "(Ljavax/script/ScriptEngine;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ScriptEngine*,$String*,$String*)>(&Main::addFileSource))},
	{"addInteractiveMode", "(Ljavax/script/ScriptEngine;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ScriptEngine*)>(&Main::addInteractiveMode))},
	{"addStringSource", "(Ljavax/script/ScriptEngine;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ScriptEngine*,$String*)>(&Main::addStringSource))},
	{"checkClassPath", "([Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Main::checkClassPath))},
	{"evaluateReader", "(Ljavax/script/ScriptEngine;Ljava/io/Reader;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($ScriptEngine*,$Reader*,$String*)>(&Main::evaluateReader))},
	{"evaluateStream", "(Ljavax/script/ScriptEngine;Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($ScriptEngine*,$InputStream*,$String*,$String*)>(&Main::evaluateStream))},
	{"evaluateString", "(Ljavax/script/ScriptEngine;Ljava/lang/String;Z)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($ScriptEngine*,$String*,bool)>(&Main::evaluateString))},
	{"evaluateString", "(Ljavax/script/ScriptEngine;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ScriptEngine*,$String*)>(&Main::evaluateString))},
	{"fileToURL", "(Ljava/io/File;)Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URL*(*)($File*)>(&Main::fileToURL))},
	{"getError", "()Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PrintStream*(*)()>(&Main::getError))},
	{"getIn", "()Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$InputStream*(*)()>(&Main::getIn))},
	{"getMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*,$ObjectArray*)>(&Main::getMessage))},
	{"getPrompt", "(Ljavax/script/ScriptEngine;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($ScriptEngine*)>(&Main::getPrompt))},
	{"getScriptEngine", "(Ljava/lang/String;)Ljavax/script/ScriptEngine;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ScriptEngine*(*)($String*)>(&Main::getScriptEngine))},
	{"initScriptEngine", "(Ljavax/script/ScriptEngine;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ScriptEngine*)>(&Main::initScriptEngine))},
	{"listScriptEngines", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Main::listScriptEngines))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Main::main))},
	{"pathToURLs", "(Ljava/lang/String;)[Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URLArray*(*)($String*)>(&Main::pathToURLs))},
	{"processOptions", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($StringArray*)>(&Main::processOptions))},
	{"processSource", "(Ljavax/script/ScriptEngine;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ScriptEngine*,$String*,$String*)>(&Main::processSource))},
	{"setScriptArguments", "(Ljavax/script/ScriptEngine;[Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ScriptEngine*,$StringArray*)>(&Main::setScriptArguments))},
	{"setScriptFilename", "(Ljavax/script/ScriptEngine;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($ScriptEngine*,$String*)>(&Main::setScriptFilename))},
	{"usage", "(I)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t)>(&Main::usage))},
	{}
};

$InnerClassInfo _Main_InnerClassesInfo_[] = {
	{"com.sun.tools.script.shell.Main$Command", "com.sun.tools.script.shell.Main", "Command", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"com.sun.tools.script.shell.Main$3", nullptr, nullptr, 0},
	{"com.sun.tools.script.shell.Main$2", nullptr, nullptr, 0},
	{"com.sun.tools.script.shell.Main$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.script.shell.Main",
	"java.lang.Object",
	nullptr,
	_Main_FieldInfo_,
	_Main_MethodInfo_,
	nullptr,
	nullptr,
	_Main_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.script.shell.Main$Command,com.sun.tools.script.shell.Main$3,com.sun.tools.script.shell.Main$2,com.sun.tools.script.shell.Main$1"
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

$String* Main::DEFAULT_LANGUAGE = nullptr;
$List* Main::scripts = nullptr;
$ScriptEngineManager* Main::engineManager = nullptr;
$Map* Main::engines = nullptr;
$ResourceBundle* Main::msgRes = nullptr;
$String* Main::BUNDLE_NAME = nullptr;
$String* Main::PROGRAM_NAME = nullptr;

void Main::init$() {
}

void Main::main($StringArray* args) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, scriptArgs, processOptions(args));
	{
		$var($Iterator, i$, $nc(Main::scripts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Main$Command, cmd, $cast($Main$Command, i$->next()));
			{
				$nc(cmd)->run(scriptArgs);
			}
		}
	}
	$System::exit(Main::EXIT_SUCCESS);
}

$StringArray* Main::processOptions($StringArray* args) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($String, currentLanguage, Main::DEFAULT_LANGUAGE);
	$var($String, currentEncoding, nullptr);
	checkClassPath(args);
	bool seenScript = false;
	bool seenStdin = false;
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		$var($String, arg, args->get(i));
		bool var$0 = $nc(arg)->equals("-classpath"_s);
		if (var$0 || $nc(arg)->equals("-cp"_s)) {
			++i;
			continue;
		}
		if (!$nc(arg)->startsWith("-"_s)) {
			int32_t numScriptArgs = 0;
			int32_t startScriptArg = 0;
			if (seenScript) {
				numScriptArgs = args->length - i;
				startScriptArg = i;
			} else {
				numScriptArgs = args->length - i - 1;
				startScriptArg = i + 1;
				$var($ScriptEngine, se, getScriptEngine(currentLanguage));
				addFileSource(se, args->get(i), currentEncoding);
			}
			$var($StringArray, result, $new($StringArray, numScriptArgs));
			$System::arraycopy(args, startScriptArg, result, 0, numScriptArgs);
			return result;
		}
		if ($nc(arg)->startsWith("-D"_s)) {
			$var($String, value, arg->substring(2));
			int32_t eq = value->indexOf((int32_t)u'=');
			if (eq != -1) {
				$var($String, var$1, value->substring(0, eq));
				$System::setProperty(var$1, $(value->substring(eq + 1)));
			} else if (!value->isEmpty()) {
				$System::setProperty(value, ""_s);
			} else {
				usage(Main::EXIT_CMD_NO_PROPNAME);
			}
			continue;
		} else {
			bool var$7 = arg->equals("-?"_s);
			bool var$6 = var$7 || arg->equals("-h"_s);
			bool var$5 = var$6 || arg->equals("--help"_s);
			if (var$5 || arg->equals("-help"_s)) {
				usage(Main::EXIT_SUCCESS);
			} else if (arg->equals("-e"_s)) {
				seenScript = true;
				if (++i == args->length) {
					usage(Main::EXIT_CMD_NO_SCRIPT);
				}
				$var($ScriptEngine, se, getScriptEngine(currentLanguage));
				addStringSource(se, args->get(i));
				continue;
			} else if (arg->equals("-encoding"_s)) {
				if (++i == args->length) {
					usage(Main::EXIT_CMD_NO_ENCODING);
				}
				$assign(currentEncoding, args->get(i));
				continue;
			} else if (arg->equals("-f"_s)) {
				seenScript = true;
				if (++i == args->length) {
					usage(Main::EXIT_CMD_NO_FILE);
				}
				$var($ScriptEngine, se, getScriptEngine(currentLanguage));
				if ($nc(args->get(i))->equals("-"_s)) {
					if (seenStdin) {
						usage(Main::EXIT_MULTIPLE_STDIN);
					} else {
						seenStdin = true;
					}
					addInteractiveMode(se);
				} else {
					addFileSource(se, args->get(i), currentEncoding);
				}
				continue;
			} else if (arg->equals("-l"_s)) {
				if (++i == args->length) {
					usage(Main::EXIT_CMD_NO_LANG);
				}
				$assign(currentLanguage, args->get(i));
				continue;
			} else if (arg->equals("-q"_s)) {
				listScriptEngines();
			}
		}
		usage(Main::EXIT_UNKNOWN_OPTION);
	}
	if (!seenScript) {
		$var($ScriptEngine, se, getScriptEngine(currentLanguage));
		addInteractiveMode(se);
	}
	return $new($StringArray, 0);
}

void Main::addInteractiveMode($ScriptEngine* se) {
	$init(Main);
	$nc(Main::scripts)->add($$new($Main$1, se));
}

void Main::addFileSource($ScriptEngine* se, $String* fileName, $String* encoding) {
	$init(Main);
	$nc(Main::scripts)->add($$new($Main$2, se, fileName, encoding));
}

void Main::addStringSource($ScriptEngine* se, $String* source) {
	$init(Main);
	$nc(Main::scripts)->add($$new($Main$3, se, source));
}

void Main::listScriptEngines() {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($List, factories, $nc(Main::engineManager)->getEngineFactories());
	{
		$var($Iterator, i$, $nc(factories)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ScriptEngineFactory, factory, $cast($ScriptEngineFactory, i$->next()));
			{
				$nc($(getError()))->println($(getMessage("engine.info"_s, $$new($ObjectArray, {
					$($of($nc(factory)->getLanguageName())),
					$($of(factory->getLanguageVersion())),
					$($of(factory->getEngineName())),
					$($of(factory->getEngineVersion()))
				}))));
			}
		}
	}
	$System::exit(Main::EXIT_SUCCESS);
}

void Main::processSource($ScriptEngine* se, $String* filename, $String* encoding) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	if ($nc(filename)->equals("-"_s)) {
		$var($BufferedReader, in, $new($BufferedReader, $$new($InputStreamReader, $(getIn()))));
		bool hitEOF = false;
		$var($String, prompt, getPrompt(se));
		$init($ScriptEngine);
		$nc(se)->put($ScriptEngine::FILENAME, "<STDIN>"_s);
		while (!hitEOF) {
			$nc($(getError()))->print(prompt);
			$var($String, source, ""_s);
			try {
				$assign(source, in->readLine());
			} catch ($IOException& ioe) {
				$nc($(getError()))->println($(ioe->toString()));
			}
			if (source == nullptr) {
				hitEOF = true;
				break;
			}
			$var($Object, res, evaluateString(se, source, false));
			if (res != nullptr) {
				$assign(res, $of(res)->toString());
				if (res == nullptr) {
					$assign(res, "null"_s);
				}
				$nc($(getError()))->println(res);
			}
		}
	} else {
		$var($FileInputStream, fis, nullptr);
		try {
			$assign(fis, $new($FileInputStream, filename));
		} catch ($FileNotFoundException& fnfe) {
			$nc($(getError()))->println($(getMessage("file.not.found"_s, $$new($ObjectArray, {$of(filename)}))));
			$System::exit(Main::EXIT_FILE_NOT_FOUND);
		}
		evaluateStream(se, fis, filename, encoding);
	}
}

$Object* Main::evaluateString($ScriptEngine* se, $String* script, bool exitOnError) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	try {
		return $of($nc(se)->eval(script));
	} catch ($ScriptException& sexp) {
		$nc($(getError()))->println($(getMessage("string.script.error"_s, $$new($ObjectArray, {$($of(sexp->getMessage()))}))));
		if (exitOnError) {
			$System::exit(Main::EXIT_SCRIPT_ERROR);
		}
	} catch ($Exception& exp) {
		exp->printStackTrace($(getError()));
		if (exitOnError) {
			$System::exit(Main::EXIT_SCRIPT_ERROR);
		}
	}
	return $of(nullptr);
}

void Main::evaluateString($ScriptEngine* se, $String* script) {
	$init(Main);
	evaluateString(se, script, true);
}

$Object* Main::evaluateReader($ScriptEngine* se, $Reader* reader, $String* name) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($String, oldFilename, setScriptFilename(se, name));
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(var$2, $nc(se)->eval(reader));
				return$1 = true;
				goto $finally;
			} catch ($ScriptException& sexp) {
				$nc($(getError()))->println($(getMessage("file.script.error"_s, $$new($ObjectArray, {
					$of(name),
					$($of(sexp->getMessage()))
				}))));
				$System::exit(Main::EXIT_SCRIPT_ERROR);
			} catch ($Exception& exp) {
				exp->printStackTrace($(getError()));
				$System::exit(Main::EXIT_SCRIPT_ERROR);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			setScriptFilename(se, oldFilename);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	return $of(nullptr);
}

$Object* Main::evaluateStream($ScriptEngine* se, $InputStream* is, $String* name, $String* encoding) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($BufferedReader, reader, nullptr);
	if (encoding != nullptr) {
		try {
			$assign(reader, $new($BufferedReader, $$new($InputStreamReader, is, encoding)));
		} catch ($UnsupportedEncodingException& uee) {
			$nc($(getError()))->println($(getMessage("encoding.unsupported"_s, $$new($ObjectArray, {$of(encoding)}))));
			$System::exit(Main::EXIT_NO_ENCODING_FOUND);
		}
	} else {
		$assign(reader, $new($BufferedReader, $$new($InputStreamReader, is)));
	}
	return $of(evaluateReader(se, reader, name));
}

void Main::usage(int32_t exitCode) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc($(getError()))->println($(getMessage("main.usage"_s, $$new($ObjectArray, {$of(Main::PROGRAM_NAME)}))));
	$System::exit(exitCode);
}

$String* Main::getPrompt($ScriptEngine* se) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($List, names, $nc($($nc(se)->getFactory()))->getNames());
	return $str({$cast($String, $($nc(names)->get(0))), "> "_s});
}

$String* Main::getMessage($String* key, $ObjectArray* params) {
	$init(Main);
	return $MessageFormat::format($($nc(Main::msgRes)->getString(key)), params);
}

$InputStream* Main::getIn() {
	$init(Main);
	return $System::in;
}

$PrintStream* Main::getError() {
	$init(Main);
	return $System::err;
}

$ScriptEngine* Main::getScriptEngine($String* lang) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($ScriptEngine, se, $cast($ScriptEngine, $nc(Main::engines)->get(lang)));
	if (se == nullptr) {
		$assign(se, $nc(Main::engineManager)->getEngineByName(lang));
		if (se == nullptr) {
			$nc($(getError()))->println($(getMessage("engine.not.found"_s, $$new($ObjectArray, {$of(lang)}))));
			$System::exit(Main::EXIT_ENGINE_NOT_FOUND);
		}
		initScriptEngine(se);
		$nc(Main::engines)->put(lang, se);
	}
	return se;
}

void Main::initScriptEngine($ScriptEngine* se) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc(se)->put("engine"_s, se);
	$var($List, exts, $nc($(se->getFactory()))->getExtensions());
	$var($InputStream, sysIn, nullptr);
	$var($ClassLoader, cl, $($Thread::currentThread())->getContextClassLoader());
	{
		$var($Iterator, i$, $nc(exts)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, ext, $cast($String, i$->next()));
			{
				try {
					$assign(sysIn, $nc($(Main::class$->getModule()))->getResourceAsStream($$str({"com/sun/tools/script/shell/init."_s, ext})));
				} catch ($IOException& ioe) {
					$throwNew($RuntimeException, static_cast<$Throwable*>(ioe));
				}
				if (sysIn != nullptr) {
					break;
				}
			}
		}
	}
	if (sysIn != nullptr) {
		evaluateStream(se, sysIn, "<system-init>"_s, nullptr);
	}
}

void Main::checkClassPath($StringArray* args) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$var($String, classPath, nullptr);
	for (int32_t i = 0; i < $nc(args)->length; ++i) {
		bool var$0 = $nc(args->get(i))->equals("-classpath"_s);
		if (var$0 || $nc(args->get(i))->equals("-cp"_s)) {
			if (++i == args->length) {
				usage(Main::EXIT_CMD_NO_CLASSPATH);
			} else {
				$assign(classPath, args->get(i));
			}
		}
	}
	if (classPath != nullptr) {
		$var($URLArray, urls, pathToURLs(classPath));
		$var($URLClassLoader, loader, $new($URLClassLoader, urls));
		$($Thread::currentThread())->setContextClassLoader(loader);
	}
	$assignStatic(Main::engineManager, $new($ScriptEngineManager));
}

$URLArray* Main::pathToURLs($String* path) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$init($File);
	$var($StringArray, components, $nc(path)->split($File::pathSeparator));
	$var($URLArray, urls, $new($URLArray, components->length));
	int32_t count = 0;
	while (count < components->length) {
		$var($URL, url, fileToURL($$new($File, components->get(count))));
		if (url != nullptr) {
			urls->set(count++, url);
		}
	}
	if (urls->length != count) {
		$var($URLArray, tmp, $new($URLArray, count));
		$System::arraycopy(urls, 0, tmp, 0, count);
		$assign(urls, tmp);
	}
	return urls;
}

$URL* Main::fileToURL($File* file) {
	$init(Main);
	$var($String, name, nullptr);
	try {
		$assign(name, $nc(file)->getCanonicalPath());
	} catch ($IOException& e) {
		$assign(name, $nc(file)->getAbsolutePath());
	}
	$init($File);
	$assign(name, $nc(name)->replace($File::separatorChar, u'/'));
	if (!name->startsWith("/"_s)) {
		$assign(name, $str({"/"_s, name}));
	}
	if (!$nc(file)->isFile()) {
		$assign(name, $str({name, "/"_s}));
	}
	try {
		return $new($URL, "file"_s, ""_s, name);
	} catch ($MalformedURLException& e) {
		$throwNew($IllegalArgumentException, "file"_s);
	}
	$shouldNotReachHere();
}

void Main::setScriptArguments($ScriptEngine* se, $StringArray* args) {
	$init(Main);
	$nc(se)->put("arguments"_s, args);
	se->put($ScriptEngine::ARGV, args);
}

$String* Main::setScriptFilename($ScriptEngine* se, $String* name) {
	$init(Main);
	$init($ScriptEngine);
	$var($String, oldName, $cast($String, $nc(se)->get($ScriptEngine::FILENAME)));
	se->put($ScriptEngine::FILENAME, name);
	return oldName;
}

void clinit$Main($Class* class$) {
	$assignStatic(Main::DEFAULT_LANGUAGE, "js"_s);
	$beforeCallerSensitive();
	$assignStatic(Main::BUNDLE_NAME, "com.sun.tools.script.shell.messages"_s);
	$assignStatic(Main::PROGRAM_NAME, "jrunscript"_s);
	{
		$assignStatic(Main::scripts, $new($ArrayList));
		$assignStatic(Main::engines, $new($HashMap));
		$assignStatic(Main::msgRes, $ResourceBundle::getBundle(Main::BUNDLE_NAME, $($Locale::getDefault())));
	}
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, clinit$Main, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;

				} // shell
			} // script
		} // tools
	} // sun
} // com