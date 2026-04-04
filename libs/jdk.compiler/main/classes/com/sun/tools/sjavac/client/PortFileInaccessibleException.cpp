#include <com/sun/tools/sjavac/client/PortFileInaccessibleException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace client {

void PortFileInaccessibleException::init$($Throwable* cause) {
	$IOException::init$(cause);
}

PortFileInaccessibleException::PortFileInaccessibleException() {
}

PortFileInaccessibleException::PortFileInaccessibleException(const PortFileInaccessibleException& e) : $IOException(e) {
}

void PortFileInaccessibleException::throw$() {
	throw *this;
}

$Class* PortFileInaccessibleException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PortFileInaccessibleException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(PortFileInaccessibleException, init$, void, $Throwable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.client.PortFileInaccessibleException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PortFileInaccessibleException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PortFileInaccessibleException);
	});
	return class$;
}

$Class* PortFileInaccessibleException::class$ = nullptr;

				} // client
			} // sjavac
		} // tools
	} // sun
} // com