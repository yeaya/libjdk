#include <sun/net/httpserver/StreamClosedException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace httpserver {

void StreamClosedException::init$() {
	$IOException::init$();
}

StreamClosedException::StreamClosedException() {
}

StreamClosedException::StreamClosedException(const StreamClosedException& e) : $IOException(e) {
}

void StreamClosedException::throw$() {
	throw *this;
}

$Class* StreamClosedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamClosedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StreamClosedException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.StreamClosedException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(StreamClosedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamClosedException);
	});
	return class$;
}

$Class* StreamClosedException::class$ = nullptr;

		} // httpserver
	} // net
} // sun