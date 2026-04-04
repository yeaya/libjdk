#include <javax/imageio/IIOException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {

void IIOException::init$($String* message) {
	$IOException::init$(message);
}

void IIOException::init$($String* message, $Throwable* cause) {
	$IOException::init$(message);
	initCause(cause);
}

IIOException::IIOException() {
}

IIOException::IIOException(const IIOException& e) : $IOException(e) {
}

void IIOException::throw$() {
	throw *this;
}

$Class* IIOException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IIOException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IIOException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(IIOException, init$, void, $String*, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.imageio.IIOException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IIOException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IIOException);
	});
	return class$;
}

$Class* IIOException::class$ = nullptr;

	} // imageio
} // javax