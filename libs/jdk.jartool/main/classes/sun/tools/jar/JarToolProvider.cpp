#include <sun/tools/jar/JarToolProvider.h>

#include <java/io/PrintWriter.h>
#include <sun/tools/jar/Main.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ToolProvider = ::java::util::spi::ToolProvider;
using $Main = ::sun::tools::jar::Main;

namespace sun {
	namespace tools {
		namespace jar {

$MethodInfo _JarToolProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JarToolProvider::*)()>(&JarToolProvider::init$))},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"run", "(Ljava/io/PrintWriter;Ljava/io/PrintWriter;[Ljava/lang/String;)I", nullptr, $PUBLIC | $TRANSIENT},
	{}
};

$ClassInfo _JarToolProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.tools.jar.JarToolProvider",
	"java.lang.Object",
	"java.util.spi.ToolProvider",
	nullptr,
	_JarToolProvider_MethodInfo_
};

$Object* allocate$JarToolProvider($Class* clazz) {
	return $of($alloc(JarToolProvider));
}

void JarToolProvider::init$() {
}

$String* JarToolProvider::name() {
	return "jar"_s;
}

int32_t JarToolProvider::run($PrintWriter* out, $PrintWriter* err, $StringArray* args) {
	$useLocalCurrentObjectStackCache();
	bool ok = $$new($Main, out, err, $(name()))->run(args);
	return ok ? 0 : 1;
}

JarToolProvider::JarToolProvider() {
}

$Class* JarToolProvider::load$($String* name, bool initialize) {
	$loadClass(JarToolProvider, name, initialize, &_JarToolProvider_ClassInfo_, allocate$JarToolProvider);
	return class$;
}

$Class* JarToolProvider::class$ = nullptr;

		} // jar
	} // tools
} // sun