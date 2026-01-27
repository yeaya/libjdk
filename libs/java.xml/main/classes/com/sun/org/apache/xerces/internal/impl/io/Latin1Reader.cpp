#include <com/sun/org/apache/xerces/internal/impl/io/Latin1Reader.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <jcpp.h>

#undef DEFAULT_BUFFER_SIZE

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace io {

$FieldInfo _Latin1Reader_FieldInfo_[] = {
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Latin1Reader, DEFAULT_BUFFER_SIZE)},
	{"fInputStream", "Ljava/io/InputStream;", nullptr, $PROTECTED | $FINAL, $field(Latin1Reader, fInputStream)},
	{"fBuffer", "[B", nullptr, $PROTECTED | $FINAL, $field(Latin1Reader, fBuffer)},
	{}
};

$MethodInfo _Latin1Reader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(Latin1Reader, init$, void, $InputStream*)},
	{"<init>", "(Ljava/io/InputStream;I)V", nullptr, $PUBLIC, $method(Latin1Reader, init$, void, $InputStream*, int32_t)},
	{"<init>", "(Ljava/io/InputStream;[B)V", nullptr, $PUBLIC, $method(Latin1Reader, init$, void, $InputStream*, $bytes*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Latin1Reader, close, void), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(Latin1Reader, mark, void, int32_t), "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(Latin1Reader, markSupported, bool)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(Latin1Reader, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(Latin1Reader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(Latin1Reader, ready, bool), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(Latin1Reader, reset, void), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(Latin1Reader, skip, int64_t, int64_t), "java.io.IOException"},
	{}
};

$ClassInfo _Latin1Reader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.io.Latin1Reader",
	"java.io.Reader",
	nullptr,
	_Latin1Reader_FieldInfo_,
	_Latin1Reader_MethodInfo_
};

$Object* allocate$Latin1Reader($Class* clazz) {
	return $of($alloc(Latin1Reader));
}

void Latin1Reader::init$($InputStream* inputStream) {
	Latin1Reader::init$(inputStream, Latin1Reader::DEFAULT_BUFFER_SIZE);
}

void Latin1Reader::init$($InputStream* inputStream, int32_t size) {
	Latin1Reader::init$(inputStream, $$new($bytes, size));
}

void Latin1Reader::init$($InputStream* inputStream, $bytes* buffer) {
	$Reader::init$();
	$set(this, fInputStream, inputStream);
	$set(this, fBuffer, buffer);
}

int32_t Latin1Reader::read() {
	return $nc(this->fInputStream)->read();
}

int32_t Latin1Reader::read($chars* ch, int32_t offset, int32_t length) {
	if (length > $nc(this->fBuffer)->length) {
		length = $nc(this->fBuffer)->length;
	}
	int32_t count = $nc(this->fInputStream)->read(this->fBuffer, 0, length);
	for (int32_t i = 0; i < count; ++i) {
		$nc(ch)->set(offset + i, (char16_t)((int32_t)($nc(this->fBuffer)->get(i) & (uint32_t)255)));
	}
	return count;
}

int64_t Latin1Reader::skip(int64_t n) {
	return $nc(this->fInputStream)->skip(n);
}

bool Latin1Reader::ready() {
	return false;
}

bool Latin1Reader::markSupported() {
	return $nc(this->fInputStream)->markSupported();
}

void Latin1Reader::mark(int32_t readAheadLimit) {
	$nc(this->fInputStream)->mark(readAheadLimit);
}

void Latin1Reader::reset() {
	$nc(this->fInputStream)->reset();
}

void Latin1Reader::close() {
	$nc(this->fInputStream)->close();
}

Latin1Reader::Latin1Reader() {
}

$Class* Latin1Reader::load$($String* name, bool initialize) {
	$loadClass(Latin1Reader, name, initialize, &_Latin1Reader_ClassInfo_, allocate$Latin1Reader);
	return class$;
}

$Class* Latin1Reader::class$ = nullptr;

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com