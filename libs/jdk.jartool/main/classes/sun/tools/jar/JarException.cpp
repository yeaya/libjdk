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

$FieldInfo _JarException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(JarException, serialVersionUID)},
	{}
};

$MethodInfo _JarException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JarException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JarException, init$, void, $String*)},
	{}
};

$ClassInfo _JarException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.tools.jar.JarException",
	"java.io.IOException",
	nullptr,
	_JarException_FieldInfo_,
	_JarException_MethodInfo_
};

$Object* allocate$JarException($Class* clazz) {
	return $of($alloc(JarException));
}

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
	$loadClass(JarException, name, initialize, &_JarException_ClassInfo_, allocate$JarException);
	return class$;
}

$Class* JarException::class$ = nullptr;

		} // jar
	} // tools
} // sun