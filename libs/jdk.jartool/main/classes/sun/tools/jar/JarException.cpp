#include <sun/tools/jar/JarException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace tools {
		namespace jar {

void JarException::init$() {
	$IOException::init$();
}

void JarException::init$($String* s) {
	$IOException::init$(s);
}

JarException::JarException() {
}

JarException::JarException(const JarException& e) : $IOException(e) {
}

void JarException::throw$() {
	throw *this;
}

$Class* JarException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(JarException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JarException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JarException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.tools.jar.JarException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JarException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarException);
	});
	return class$;
}

$Class* JarException::class$ = nullptr;

		} // jar
	} // tools
} // sun