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

$FieldInfo _StreamClosedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StreamClosedException, serialVersionUID)},
	{}
};

$MethodInfo _StreamClosedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StreamClosedException::*)()>(&StreamClosedException::init$))},
	{}
};

$ClassInfo _StreamClosedException_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.StreamClosedException",
	"java.io.IOException",
	nullptr,
	_StreamClosedException_FieldInfo_,
	_StreamClosedException_MethodInfo_
};

$Object* allocate$StreamClosedException($Class* clazz) {
	return $of($alloc(StreamClosedException));
}

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
	$loadClass(StreamClosedException, name, initialize, &_StreamClosedException_ClassInfo_, allocate$StreamClosedException);
	return class$;
}

$Class* StreamClosedException::class$ = nullptr;

		} // httpserver
	} // net
} // sun