#include <sun/tools/jar/JarToolProvider.h>
#include <java/io/PrintWriter.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

void JarToolProvider::init$() {
}

$String* JarToolProvider::name() {
	return "jar"_s;
}

int32_t JarToolProvider::run($PrintWriter* out, $PrintWriter* err, $StringArray* args) {
	$useLocalObjectStack();
	bool ok = $$new($Main, out, err, $(name()))->run(args);
	return ok ? 0 : 1;
}

JarToolProvider::JarToolProvider() {
}

$Class* JarToolProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JarToolProvider, init$, void)},
		{"name", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarToolProvider, name, $String*)},
		{"run", "(Ljava/io/PrintWriter;Ljava/io/PrintWriter;[Ljava/lang/String;)I", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(JarToolProvider, run, int32_t, $PrintWriter*, $PrintWriter*, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.tools.jar.JarToolProvider",
		"java.lang.Object",
		"java.util.spi.ToolProvider",
		nullptr,
		methodInfos$$
	};
	$loadClass(JarToolProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarToolProvider);
	});
	return class$;
}

$Class* JarToolProvider::class$ = nullptr;

		} // jar
	} // tools
} // sun