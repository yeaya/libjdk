#include <com/sun/org/apache/xerces/internal/impl/io/ASCIIReader.h>

#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/xml/internal/stream/util/BufferAllocator.h>
#include <com/sun/xml/internal/stream/util/ThreadLocalBufferAllocator.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DEFAULT_BUFFER_SIZE
#undef XML_DOMAIN

using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $BufferAllocator = ::com::sun::xml::internal::stream::util::BufferAllocator;
using $ThreadLocalBufferAllocator = ::com::sun::xml::internal::stream::util::ThreadLocalBufferAllocator;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace io {

$FieldInfo _ASCIIReader_FieldInfo_[] = {
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ASCIIReader, DEFAULT_BUFFER_SIZE)},
	{"fInputStream", "Ljava/io/InputStream;", nullptr, $PROTECTED, $field(ASCIIReader, fInputStream)},
	{"fBuffer", "[B", nullptr, $PROTECTED, $field(ASCIIReader, fBuffer)},
	{"fFormatter", "Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;", nullptr, $PRIVATE, $field(ASCIIReader, fFormatter)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(ASCIIReader, fLocale)},
	{}
};

$MethodInfo _ASCIIReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(ASCIIReader, init$, void, $InputStream*, $MessageFormatter*, $Locale*)},
	{"<init>", "(Ljava/io/InputStream;ILcom/sun/org/apache/xerces/internal/util/MessageFormatter;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(ASCIIReader, init$, void, $InputStream*, int32_t, $MessageFormatter*, $Locale*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(ASCIIReader, close, void), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(ASCIIReader, mark, void, int32_t), "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(ASCIIReader, markSupported, bool)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ASCIIReader, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(ASCIIReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(ASCIIReader, ready, bool), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(ASCIIReader, reset, void), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(ASCIIReader, skip, int64_t, int64_t), "java.io.IOException"},
	{}
};

$ClassInfo _ASCIIReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.io.ASCIIReader",
	"java.io.Reader",
	nullptr,
	_ASCIIReader_FieldInfo_,
	_ASCIIReader_MethodInfo_
};

$Object* allocate$ASCIIReader($Class* clazz) {
	return $of($alloc(ASCIIReader));
}

void ASCIIReader::init$($InputStream* inputStream, $MessageFormatter* messageFormatter, $Locale* locale) {
	ASCIIReader::init$(inputStream, ASCIIReader::DEFAULT_BUFFER_SIZE, messageFormatter, locale);
}

void ASCIIReader::init$($InputStream* inputStream, int32_t size, $MessageFormatter* messageFormatter, $Locale* locale) {
	$Reader::init$();
	$set(this, fFormatter, nullptr);
	$set(this, fLocale, nullptr);
	$set(this, fInputStream, inputStream);
	$var($BufferAllocator, ba, $ThreadLocalBufferAllocator::getBufferAllocator());
	$set(this, fBuffer, $nc(ba)->getByteBuffer(size));
	if (this->fBuffer == nullptr) {
		$set(this, fBuffer, $new($bytes, size));
	}
	$set(this, fFormatter, messageFormatter);
	$set(this, fLocale, locale);
}

int32_t ASCIIReader::read() {
	$useLocalCurrentObjectStackCache();
	int32_t b0 = $nc(this->fInputStream)->read();
	if (b0 >= 128) {
		$init($XMLMessageFormatter);
		$throwNew($MalformedByteSequenceException, this->fFormatter, this->fLocale, $XMLMessageFormatter::XML_DOMAIN, "InvalidASCII"_s, $$new($ObjectArray, {$($of($Integer::toString(b0)))}));
	}
	return b0;
}

int32_t ASCIIReader::read($chars* ch, int32_t offset, int32_t length) {
	$useLocalCurrentObjectStackCache();
	if (length > $nc(this->fBuffer)->length) {
		length = $nc(this->fBuffer)->length;
	}
	int32_t count = $nc(this->fInputStream)->read(this->fBuffer, 0, length);
	for (int32_t i = 0; i < count; ++i) {
		int32_t b0 = $nc(this->fBuffer)->get(i);
		if (b0 < 0) {
			$init($XMLMessageFormatter);
			$throwNew($MalformedByteSequenceException, this->fFormatter, this->fLocale, $XMLMessageFormatter::XML_DOMAIN, "InvalidASCII"_s, $$new($ObjectArray, {$($of($Integer::toString((int32_t)(b0 & (uint32_t)255))))}));
		}
		$nc(ch)->set(offset + i, (char16_t)b0);
	}
	return count;
}

int64_t ASCIIReader::skip(int64_t n) {
	return $nc(this->fInputStream)->skip(n);
}

bool ASCIIReader::ready() {
	return false;
}

bool ASCIIReader::markSupported() {
	return $nc(this->fInputStream)->markSupported();
}

void ASCIIReader::mark(int32_t readAheadLimit) {
	$nc(this->fInputStream)->mark(readAheadLimit);
}

void ASCIIReader::reset() {
	$nc(this->fInputStream)->reset();
}

void ASCIIReader::close() {
	$var($BufferAllocator, ba, $ThreadLocalBufferAllocator::getBufferAllocator());
	$nc(ba)->returnByteBuffer(this->fBuffer);
	$set(this, fBuffer, nullptr);
	$nc(this->fInputStream)->close();
}

ASCIIReader::ASCIIReader() {
}

$Class* ASCIIReader::load$($String* name, bool initialize) {
	$loadClass(ASCIIReader, name, initialize, &_ASCIIReader_ClassInfo_, allocate$ASCIIReader);
	return class$;
}

$Class* ASCIIReader::class$ = nullptr;

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com