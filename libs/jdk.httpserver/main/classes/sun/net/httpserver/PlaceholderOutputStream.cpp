#include <sun/net/httpserver/PlaceholderOutputStream.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _PlaceholderOutputStream_FieldInfo_[] = {
	{"wrapped", "Ljava/io/OutputStream;", nullptr, 0, $field(PlaceholderOutputStream, wrapped)},
	{}
};

$MethodInfo _PlaceholderOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(PlaceholderOutputStream::*)($OutputStream*)>(&PlaceholderOutputStream::init$))},
	{"checkWrap", "()V", nullptr, $PRIVATE, $method(static_cast<void(PlaceholderOutputStream::*)()>(&PlaceholderOutputStream::checkWrap)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isWrapped", "()Z", nullptr, 0},
	{"setWrappedStream", "(Ljava/io/OutputStream;)V", nullptr, 0},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _PlaceholderOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.PlaceholderOutputStream",
	"java.io.OutputStream",
	nullptr,
	_PlaceholderOutputStream_FieldInfo_,
	_PlaceholderOutputStream_MethodInfo_
};

$Object* allocate$PlaceholderOutputStream($Class* clazz) {
	return $of($alloc(PlaceholderOutputStream));
}

void PlaceholderOutputStream::init$($OutputStream* os) {
	$OutputStream::init$();
	$set(this, wrapped, os);
}

void PlaceholderOutputStream::setWrappedStream($OutputStream* os) {
	$set(this, wrapped, os);
}

bool PlaceholderOutputStream::isWrapped() {
	return this->wrapped != nullptr;
}

void PlaceholderOutputStream::checkWrap() {
	if (this->wrapped == nullptr) {
		$throwNew($IOException, "response headers not sent yet"_s);
	}
}

void PlaceholderOutputStream::write(int32_t b) {
	checkWrap();
	$nc(this->wrapped)->write(b);
}

void PlaceholderOutputStream::write($bytes* b) {
	checkWrap();
	$nc(this->wrapped)->write(b);
}

void PlaceholderOutputStream::write($bytes* b, int32_t off, int32_t len) {
	checkWrap();
	$nc(this->wrapped)->write(b, off, len);
}

void PlaceholderOutputStream::flush() {
	checkWrap();
	$nc(this->wrapped)->flush();
}

void PlaceholderOutputStream::close() {
	checkWrap();
	$nc(this->wrapped)->close();
}

PlaceholderOutputStream::PlaceholderOutputStream() {
}

$Class* PlaceholderOutputStream::load$($String* name, bool initialize) {
	$loadClass(PlaceholderOutputStream, name, initialize, &_PlaceholderOutputStream_ClassInfo_, allocate$PlaceholderOutputStream);
	return class$;
}

$Class* PlaceholderOutputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun