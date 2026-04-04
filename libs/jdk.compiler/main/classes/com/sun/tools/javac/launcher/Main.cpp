#include <com/sun/tools/javac/launcher/Main.h>
#include <com/sun/source/util/JavacTask.h>
#include <com/sun/tools/javac/api/JavacTool.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/file/JavacFileManager.h>
#include <com/sun/tools/javac/launcher/Main$1.h>
#include <com/sun/tools/javac/launcher/Main$Context.h>
#include <com/sun/tools/javac/launcher/Main$Fault.h>
#include <com/sun/tools/javac/launcher/Main$MainClassListener.h>
#include <com/sun/tools/javac/resources/LauncherProperties$Errors.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/PrintWriter.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/Iterable.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/StackTraceElement.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/net/URI.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/InvalidPathException.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/text/MessageFormat.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef PUBLIC
#undef PUBLIC_STATIC
#undef SOURCE
#undef SOURCE_PATH
#undef STATIC
#undef TYPE

using $StackTraceElementArray = $Array<::java::lang::StackTraceElement>;
using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $JavacTask = ::com::sun::source::util::JavacTask;
using $JavacTool = ::com::sun::tools::javac::api::JavacTool;
using $Source = ::com::sun::tools::javac::code::Source;
using $Main$1 = ::com::sun::tools::javac::launcher::Main$1;
using $Main$Context = ::com::sun::tools::javac::launcher::Main$Context;
using $Main$Fault = ::com::sun::tools::javac::launcher::Main$Fault;
using $Main$MainClassListener = ::com::sun::tools::javac::launcher::Main$MainClassListener;
using $LauncherProperties$Errors = ::com::sun::tools::javac::resources::LauncherProperties$Errors;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStreamReader = ::java::io::InputStreamReader;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Void = ::java::lang::Void;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Charset = ::java::nio::charset::Charset;
using $Files = ::java::nio::file::Files;
using $InvalidPathException = ::java::nio::file::InvalidPathException;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $MessageFormat = ::java::text::MessageFormat;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $DiagnosticListener = ::javax::tools::DiagnosticListener;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileObject = ::javax::tools::JavaFileObject;
using $JavaFileObject$Kind = ::javax::tools::JavaFileObject$Kind;
using $StandardJavaFileManager = ::javax::tools::StandardJavaFileManager;
using $StandardLocation = ::javax::tools::StandardLocation;
using $VM = ::jdk::internal::misc::VM;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

$String* Main::bundleName = nullptr;

void Main::main($StringArray* args) {
	$init(Main);
	$useLocalObjectStack();
	try {
		$$new(Main, $System::err)->run($($VM::getRuntimeArguments()), args);
	} catch ($Main$Fault& f) {
		$nc($System::err)->println($(f->getMessage()));
		$System::exit(1);
	} catch ($InvocationTargetException& e) {
		$throw($(e->getCause()));
	}
}

void Main::init$($PrintStream* out) {
	$useLocalObjectStack();
	Main::init$($$new($PrintWriter, $$new($OutputStreamWriter, out), true));
}

void Main::init$($PrintWriter* out) {
	$set(this, resourceBundle, nullptr);
	$set(this, out, out);
}

void Main::run($StringArray* runtimeArgs, $StringArray* args) {
	$useLocalObjectStack();
	$var($Path, file, getFile(args));
	$var($Main$Context, context, $new($Main$Context, $($nc(file)->toAbsolutePath())));
	$var($String, mainClassName, compile(file, $(getJavacOpts(runtimeArgs)), context));
	$var($StringArray, appArgs, $cast($StringArray, $Arrays::copyOfRange(args, 1, $nc(args)->length)));
	execute(mainClassName, appArgs, context);
}

$Path* Main::getFile($StringArray* args) {
	$useLocalObjectStack();
	if ($nc(args)->length == 0) {
		$init($LauncherProperties$Errors);
		$throwNew($Main$Fault, this, $LauncherProperties$Errors::NoArgs);
	}
	$var($Path, file, nullptr);
	try {
		$assign(file, $Paths::get(args->get(0), $$new($StringArray, 0)));
	} catch ($InvalidPathException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::InvalidFilename(args->get(0))));
	}
	if (!$Files::exists(file, $$new($LinkOptionArray, 0))) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::FileNotFound(file)));
	}
	return file;
}

$JavaFileObject* Main::readFile($Path* file) {
	$useLocalObjectStack();
	try {
		$var($BufferedInputStream, in, $new($BufferedInputStream, $($Files::newInputStream(file, $$new($OpenOptionArray, 0)))));
		$var($Throwable, var$0, nullptr);
		$var($JavaFileObject, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				bool ignoreFirstLine = false;
				if ($$nc($$nc($nc(file)->getFileName())->toString())->endsWith(".java"_s)) {
					ignoreFirstLine = false;
				} else {
					in->mark(2);
					bool var$3 = in->read() == u'#';
					ignoreFirstLine = var$3 && (in->read() == u'!');
					if (!ignoreFirstLine) {
						in->reset();
					}
				}
				{
					$var($BufferedReader, r, $new($BufferedReader, $$new($InputStreamReader, in, $($Charset::defaultCharset()))));
					$var($Throwable, var$4, nullptr);
					$var($JavaFileObject, var$6, nullptr);
					bool return$5 = false;
					try {
						try {
							$var($StringBuilder, sb, $new($StringBuilder));
							if (ignoreFirstLine) {
								r->readLine();
								sb->append("\n"_s);
							}
							$var($chars, buf, $new($chars, 1024));
							int32_t n = 0;
							while ((n = r->read(buf, 0, buf->length)) != -1) {
								sb->append(buf, 0, n);
							}
							$init($JavaFileObject$Kind);
							$assign(var$6, $new($Main$1, this, $(file->toUri()), $JavaFileObject$Kind::SOURCE, file, sb));
							return$5 = true;
							goto $finally1;
						} catch ($Throwable& t$) {
							try {
								r->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$7) {
						$assign(var$4, var$7);
					} $finally1: {
						r->close();
					}
					if (var$4 != nullptr) {
						$throw(var$4);
					}
					if (return$5) {
						$assign(var$2, var$6);
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($Throwable& t$) {
				try {
					in->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$8) {
			$assign(var$0, var$8);
		} $finally: {
			in->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	} catch ($IOException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::CantReadFile(file, e)));
	}
	$shouldNotReachHere();
}

$List* Main::getJavacOpts($StringArray* runtimeArgs) {
	$useLocalObjectStack();
	$var($List, javacOpts, $new($ArrayList));
	$var($String, sourceOpt, $System::getProperty("jdk.internal.javac.source"_s));
	if (sourceOpt != nullptr) {
		$Source* source = $Source::lookup(sourceOpt);
		if (source == nullptr) {
			$throwNew($Main$Fault, this, $($LauncherProperties$Errors::InvalidValueForSource(sourceOpt)));
		}
		javacOpts->addAll($($List::of("--release"_s, sourceOpt)));
	}
	for (int32_t i = 0; i < $nc(runtimeArgs)->length; ++i) {
		$var($String, arg, runtimeArgs->get(i));
		$var($String, opt, arg);
		$var($String, value, nullptr);
		if ($nc(arg)->startsWith("--"_s)) {
			int32_t eq = arg->indexOf(u'=');
			if (eq > 0) {
				$assign(opt, arg->substring(0, eq));
				$assign(value, arg->substring(eq + 1));
			}
		}
		{
			$var($String, s12177$, opt);
			int32_t tmp12177$ = -1;
			switch ($nc(s12177$)->hashCode()) {
			case 0x725d84fa:
				if (s12177$->equals("--class-path"_s)) {
					tmp12177$ = 0;
				}
				break;
			case (int32_t)0xf0617410:
				if (s12177$->equals("-classpath"_s)) {
					tmp12177$ = 1;
				}
				break;
			case 0x0000b55a:
				if (s12177$->equals("-cp"_s)) {
					tmp12177$ = 2;
				}
				break;
			case (int32_t)0xfd483946:
				if (s12177$->equals("--module-path"_s)) {
					tmp12177$ = 3;
				}
				break;
			case 1507:
				if (s12177$->equals("-p"_s)) {
					tmp12177$ = 4;
				}
				break;
			case (int32_t)0xfde3c473:
				if (s12177$->equals("--add-exports"_s)) {
					tmp12177$ = 5;
				}
				break;
			case (int32_t)0x951388bb:
				if (s12177$->equals("--add-modules"_s)) {
					tmp12177$ = 6;
				}
				break;
			case (int32_t)0x98f189d5:
				if (s12177$->equals("--limit-modules"_s)) {
					tmp12177$ = 7;
				}
				break;
			case (int32_t)0xb1612531:
				if (s12177$->equals("--patch-module"_s)) {
					tmp12177$ = 8;
				}
				break;
			case 0x450c3b15:
				if (s12177$->equals("--upgrade-module-path"_s)) {
					tmp12177$ = 9;
				}
				break;
			case (int32_t)0xb278671e:
				if (s12177$->equals("--enable-preview"_s)) {
					tmp12177$ = 10;
				}
				break;
			}
			switch (tmp12177$) {
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				{
					if (value == nullptr) {
						if (i == runtimeArgs->length - 1) {
							$throwNew($Main$Fault, this, $($LauncherProperties$Errors::NoValueForOption(opt)));
						}
						$assign(value, runtimeArgs->get(++i));
					}
					bool var$0 = $nc(opt)->equals("--add-modules"_s);
					if (var$0 && $nc(value)->equals("ALL-DEFAULT"_s)) {
						break;
					}
					javacOpts->add(opt);
					javacOpts->add(value);
					break;
				}
			case 10:
				javacOpts->add(opt);
				if (sourceOpt == nullptr) {
					$init($LauncherProperties$Errors);
					$throwNew($Main$Fault, this, $LauncherProperties$Errors::EnablePreviewRequiresSource);
				}
				break;
			default:
				{
					bool var$1 = $nc(opt)->startsWith("-agentlib:jdwp="_s);
					if (var$1 || opt->startsWith("-Xrunjdwp:"_s)) {
						javacOpts->add("-g"_s);
					}
				}
			}
		}
	}
	javacOpts->add("-proc:none"_s);
	javacOpts->add("-Xdiags:verbose"_s);
	return javacOpts;
}

$String* Main::compile($Path* file, $List* javacOpts, $Main$Context* context) {
	$useLocalObjectStack();
	$var($JavaFileObject, fo, readFile(file));
	$var($JavacTool, javaCompiler, $JavacTool::create());
	$var($StandardJavaFileManager, stdFileMgr, $nc(javaCompiler)->getStandardFileManager(nullptr, nullptr, nullptr));
	try {
		$init($StandardLocation);
		$nc(stdFileMgr)->setLocation($StandardLocation::SOURCE_PATH, $($Collections::emptyList()));
	} catch ($IOException& e) {
		$throwNew($Error, "unexpected exception from file manager"_s, e);
	}
	$var($JavaFileManager, fm, $nc(context)->getFileManager(stdFileMgr));
	$var($JavacTask, t, $cast($JavacTask, javaCompiler->getTask(this->out, fm, nullptr, javacOpts, nullptr, $($List::of(fo)))));
	$var($Main$MainClassListener, l, $new($Main$MainClassListener, t));
	$var($Boolean, ok, $cast($Boolean, $nc(t)->call()));
	if (!$nc(ok)->booleanValue()) {
		$init($LauncherProperties$Errors);
		$throwNew($Main$Fault, this, $LauncherProperties$Errors::CompilationFailed);
	}
	if (l->mainClass == nullptr) {
		$init($LauncherProperties$Errors);
		$throwNew($Main$Fault, this, $LauncherProperties$Errors::NoClass);
	}
	$var($String, mainClassName, $$nc($nc(l->mainClass)->getQualifiedName())->toString());
	return mainClassName;
}

void Main::execute($String* mainClassName, $StringArray* appArgs, $Main$Context* context) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$System::setProperty("jdk.launcher.sourcefile"_s, $($nc($nc(context)->file)->toString()));
	$var($ClassLoader, cl, context->getClassLoader($($ClassLoader::getSystemClassLoader())));
	try {
		$Class* appClass = $Class::forName(mainClassName, true, cl);
		$var($Method, main, appClass->getDeclaredMethod("main"_s, $$new($ClassArray, {$getClass($StringArray)})));
		int32_t PUBLIC_STATIC = $Modifier::PUBLIC | $Modifier::STATIC;
		if (($nc(main)->getModifiers() & PUBLIC_STATIC) != PUBLIC_STATIC) {
			$init($LauncherProperties$Errors);
			$throwNew($Main$Fault, this, $LauncherProperties$Errors::MainNotPublicStatic);
		}
		if (!$nc(main->getReturnType())->equals($Void::TYPE)) {
			$init($LauncherProperties$Errors);
			$throwNew($Main$Fault, this, $LauncherProperties$Errors::MainNotVoid);
		}
		main->setAccessible(true);
		main->invoke($($Integer::valueOf(0)), $$new($ObjectArray, {$of(appArgs)}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::CantFindClass(mainClassName)));
	} catch ($NoSuchMethodException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::CantFindMainMethod(mainClassName)));
	} catch ($IllegalAccessException& e) {
		$throwNew($Main$Fault, this, $($LauncherProperties$Errors::CantAccessMainMethod(mainClassName)));
	} catch ($InvocationTargetException& e) {
		int32_t invocationFrames = $nc($(e->getStackTrace()))->length;
		$var($Throwable, target, e->getCause());
		$var($StackTraceElementArray, targetTrace, $nc(target)->getStackTrace());
		target->setStackTrace($$cast($StackTraceElementArray, $Arrays::copyOfRange(targetTrace, 0, $nc(targetTrace)->length - invocationFrames)));
		$throw(e);
	}
}

$String* Main::getMessage($JCDiagnostic$Error* error) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, key, $nc(error)->key());
	$var($ObjectArray, args, error->getArgs());
	try {
		if (this->resourceBundle == nullptr) {
			$set(this, resourceBundle, $ResourceBundle::getBundle(Main::bundleName));
			$set(this, errorPrefix, $nc(this->resourceBundle)->getString("launcher.error"_s));
		}
		$var($String, resource, $nc(this->resourceBundle)->getString(key));
		$var($String, message, $MessageFormat::format(resource, args));
		return $str({this->errorPrefix, message});
	} catch ($MissingResourceException& e) {
		return $str({"Cannot access resource; "_s, key, $($Arrays::toString(args))});
	}
	$shouldNotReachHere();
}

Main::Main() {
}

void Main::clinit$($Class* clazz) {
	$assignStatic(Main::bundleName, "com.sun.tools.javac.resources.launcher"_s);
}

$Class* Main::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"out", "Ljava/io/PrintWriter;", nullptr, $PRIVATE, $field(Main, out)},
		{"bundleName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, bundleName)},
		{"resourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(Main, resourceBundle)},
		{"errorPrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Main, errorPrefix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(Main, init$, void, $PrintStream*)},
		{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC, $method(Main, init$, void, $PrintWriter*)},
		{"compile", "(Ljava/nio/file/Path;Ljava/util/List;Lcom/sun/tools/javac/launcher/Main$Context;)Ljava/lang/String;", "(Ljava/nio/file/Path;Ljava/util/List<Ljava/lang/String;>;Lcom/sun/tools/javac/launcher/Main$Context;)Ljava/lang/String;", $PRIVATE, $method(Main, compile, $String*, $Path*, $List*, $Main$Context*), "com.sun.tools.javac.launcher.Main$Fault"},
		{"execute", "(Ljava/lang/String;[Ljava/lang/String;Lcom/sun/tools/javac/launcher/Main$Context;)V", nullptr, $PRIVATE, $method(Main, execute, void, $String*, $StringArray*, $Main$Context*), "com.sun.tools.javac.launcher.Main$Fault,java.lang.reflect.InvocationTargetException"},
		{"getFile", "([Ljava/lang/String;)Ljava/nio/file/Path;", nullptr, $PRIVATE, $method(Main, getFile, $Path*, $StringArray*), "com.sun.tools.javac.launcher.Main$Fault"},
		{"getJavacOpts", "([Ljava/lang/String;)Ljava/util/List;", "([Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $TRANSIENT, $method(Main, getJavacOpts, $List*, $StringArray*), "com.sun.tools.javac.launcher.Main$Fault"},
		{"getMessage", "(Lcom/sun/tools/javac/util/JCDiagnostic$Error;)Ljava/lang/String;", nullptr, $PRIVATE, $method(Main, getMessage, $String*, $JCDiagnostic$Error*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Main, main, void, $StringArray*), "java.lang.Throwable"},
		{"readFile", "(Ljava/nio/file/Path;)Ljavax/tools/JavaFileObject;", nullptr, $PRIVATE, $method(Main, readFile, $JavaFileObject*, $Path*), "com.sun.tools.javac.launcher.Main$Fault"},
		{"run", "([Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Main, run, void, $StringArray*, $StringArray*), "com.sun.tools.javac.launcher.Main$Fault,java.lang.reflect.InvocationTargetException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.launcher.Main$MemoryClassLoader", "com.sun.tools.javac.launcher.Main", "MemoryClassLoader", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$MemoryFileManager", "com.sun.tools.javac.launcher.Main", "MemoryFileManager", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$Context", "com.sun.tools.javac.launcher.Main", "Context", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$MainClassListener", "com.sun.tools.javac.launcher.Main", "MainClassListener", $STATIC},
		{"com.sun.tools.javac.launcher.Main$Fault", "com.sun.tools.javac.launcher.Main", "Fault", $PUBLIC},
		{"com.sun.tools.javac.launcher.Main$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.launcher.Main",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.javac.launcher.Main$MemoryClassLoader,com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLConnection,com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLStreamHandler,com.sun.tools.javac.launcher.Main$MemoryClassLoader$1,com.sun.tools.javac.launcher.Main$MemoryFileManager,com.sun.tools.javac.launcher.Main$MemoryFileManager$1,com.sun.tools.javac.launcher.Main$MemoryFileManager$1$1,com.sun.tools.javac.launcher.Main$Context,com.sun.tools.javac.launcher.Main$MainClassListener,com.sun.tools.javac.launcher.Main$Fault,com.sun.tools.javac.launcher.Main$1"
	};
	$loadClass(Main, name, initialize, &classInfo$$, Main::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Main);
	});
	return class$;
}

$Class* Main::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com