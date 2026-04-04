#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$MemoryURLStreamHandler.h>
#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader$MemoryURLConnection.h>
#include <com/sun/tools/javac/launcher/Main$MemoryClassLoader.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/net/URLStreamHandler.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef PROTOCOL

using $Main$MemoryClassLoader = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader;
using $Main$MemoryClassLoader$MemoryURLConnection = ::com::sun::tools::javac::launcher::Main$MemoryClassLoader$MemoryURLConnection;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $URLStreamHandler = ::java::net::URLStreamHandler;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace launcher {

void Main$MemoryClassLoader$MemoryURLStreamHandler::init$($Main$MemoryClassLoader* this$0) {
	$set(this, this$0, this$0);
	$URLStreamHandler::init$();
}

$URLConnection* Main$MemoryClassLoader$MemoryURLStreamHandler::openConnection($URL* u) {
	$useLocalObjectStack();
	if (!$$nc($nc(u)->getProtocol())->equalsIgnoreCase(this->this$0->PROTOCOL)) {
		$throwNew($IllegalArgumentException, $(u->toString()));
	}
	return $new($Main$MemoryClassLoader$MemoryURLConnection, u, $$cast($bytes, $nc(this->this$0->sourceFileClasses)->get($(this->this$0->toBinaryName($(u->getPath()))))));
}

Main$MemoryClassLoader$MemoryURLStreamHandler::Main$MemoryClassLoader$MemoryURLStreamHandler() {
}

$Class* Main$MemoryClassLoader$MemoryURLStreamHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/launcher/Main$MemoryClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(Main$MemoryClassLoader$MemoryURLStreamHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/launcher/Main$MemoryClassLoader;)V", nullptr, $PRIVATE, $method(Main$MemoryClassLoader$MemoryURLStreamHandler, init$, void, $Main$MemoryClassLoader*)},
		{"openConnection", "(Ljava/net/URL;)Ljava/net/URLConnection;", nullptr, $PUBLIC, $virtualMethod(Main$MemoryClassLoader$MemoryURLStreamHandler, openConnection, $URLConnection*, $URL*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.launcher.Main$MemoryClassLoader", "com.sun.tools.javac.launcher.Main", "MemoryClassLoader", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLStreamHandler", "com.sun.tools.javac.launcher.Main$MemoryClassLoader", "MemoryURLStreamHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.launcher.Main$MemoryClassLoader$MemoryURLStreamHandler",
		"java.net.URLStreamHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.launcher.Main"
	};
	$loadClass(Main$MemoryClassLoader$MemoryURLStreamHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Main$MemoryClassLoader$MemoryURLStreamHandler);
	});
	return class$;
}

$Class* Main$MemoryClassLoader$MemoryURLStreamHandler::class$ = nullptr;

				} // launcher
			} // javac
		} // tools
	} // sun
} // com