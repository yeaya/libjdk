#include <com/sun/org/apache/xerces/internal/impl/io/UTF16Reader.h>

#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DEFAULT_BUFFER_SIZE
#undef XML_DOMAIN

using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _UTF16Reader_FieldInfo_[] = {
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF16Reader, DEFAULT_BUFFER_SIZE)},
	{"fInputStream", "Ljava/io/InputStream;", nullptr, $PROTECTED | $FINAL, $field(UTF16Reader, fInputStream)},
	{"fBuffer", "[B", nullptr, $PROTECTED | $FINAL, $field(UTF16Reader, fBuffer)},
	{"fIsBigEndian", "Z", nullptr, $PROTECTED | $FINAL, $field(UTF16Reader, fIsBigEndian)},
	{"fFormatter", "Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;", nullptr, $PRIVATE | $FINAL, $field(UTF16Reader, fFormatter)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE | $FINAL, $field(UTF16Reader, fLocale)},
	{}
};

$MethodInfo _UTF16Reader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Z)V", nullptr, $PUBLIC, $method(UTF16Reader, init$, void, $InputStream*, bool)},
	{"<init>", "(Ljava/io/InputStream;ZLcom/sun/org/apache/xerces/internal/util/MessageFormatter;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(UTF16Reader, init$, void, $InputStream*, bool, $MessageFormatter*, $Locale*)},
	{"<init>", "(Ljava/io/InputStream;IZLcom/sun/org/apache/xerces/internal/util/MessageFormatter;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(UTF16Reader, init$, void, $InputStream*, int32_t, bool, $MessageFormatter*, $Locale*)},
	{"<init>", "(Ljava/io/InputStream;[BZLcom/sun/org/apache/xerces/internal/util/MessageFormatter;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(UTF16Reader, init$, void, $InputStream*, $bytes*, bool, $MessageFormatter*, $Locale*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(UTF16Reader, close, void), "java.io.IOException"},
	{"expectedTwoBytes", "()V", nullptr, $PRIVATE, $method(UTF16Reader, expectedTwoBytes, void), "com.sun.org.apache.xerces.internal.impl.io.MalformedByteSequenceException"},
	{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(UTF16Reader, mark, void, int32_t), "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(UTF16Reader, markSupported, bool)},
	{"processBE", "([CII)V", nullptr, $PRIVATE, $method(UTF16Reader, processBE, void, $chars*, int32_t, int32_t)},
	{"processLE", "([CII)V", nullptr, $PRIVATE, $method(UTF16Reader, processLE, void, $chars*, int32_t, int32_t)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(UTF16Reader, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(UTF16Reader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(UTF16Reader, ready, bool), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(UTF16Reader, reset, void), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(UTF16Reader, skip, int64_t, int64_t), "java.io.IOException"},
	{}
};

$ClassInfo _UTF16Reader_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.io.UTF16Reader",
	"java.io.Reader",
	nullptr,
	_UTF16Reader_FieldInfo_,
	_UTF16Reader_MethodInfo_
};

$Object* allocate$UTF16Reader($Class* clazz) {
	return $of($alloc(UTF16Reader));
}

void UTF16Reader::init$($InputStream* inputStream, bool isBigEndian) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, var$0, inputStream);
	int32_t var$1 = UTF16Reader::DEFAULT_BUFFER_SIZE;
	bool var$2 = isBigEndian;
	$var($MessageFormatter, var$3, static_cast<$MessageFormatter*>($new($XMLMessageFormatter)));
	UTF16Reader::init$(var$0, var$1, var$2, var$3, $($Locale::getDefault()));
}

void UTF16Reader::init$($InputStream* inputStream, bool isBigEndian, $MessageFormatter* messageFormatter, $Locale* locale) {
	UTF16Reader::init$(inputStream, UTF16Reader::DEFAULT_BUFFER_SIZE, isBigEndian, messageFormatter, locale);
}

void UTF16Reader::init$($InputStream* inputStream, int32_t size, bool isBigEndian, $MessageFormatter* messageFormatter, $Locale* locale) {
	UTF16Reader::init$(inputStream, $$new($bytes, size), isBigEndian, messageFormatter, locale);
}

void UTF16Reader::init$($InputStream* inputStream, $bytes* buffer, bool isBigEndian, $MessageFormatter* messageFormatter, $Locale* locale) {
	$Reader::init$();
	$set(this, fInputStream, inputStream);
	$set(this, fBuffer, buffer);
	this->fIsBigEndian = isBigEndian;
	$set(this, fFormatter, messageFormatter);
	$set(this, fLocale, locale);
}

int32_t UTF16Reader::read() {
	int32_t b0 = $nc(this->fInputStream)->read();
	if (b0 == -1) {
		return -1;
	}
	int32_t b1 = $nc(this->fInputStream)->read();
	if (b1 == -1) {
		expectedTwoBytes();
	}
	if (this->fIsBigEndian) {
		return (b0 << 8) | b1;
	}
	return (b1 << 8) | b0;
}

int32_t UTF16Reader::read($chars* ch, int32_t offset, int32_t length) {
	int32_t byteLength = length << 1;
	if (byteLength > $nc(this->fBuffer)->length) {
		byteLength = $nc(this->fBuffer)->length;
	}
	int32_t byteCount = $nc(this->fInputStream)->read(this->fBuffer, 0, byteLength);
	if (byteCount == -1) {
		return -1;
	}
	if (((int32_t)(byteCount & (uint32_t)1)) != 0) {
		int32_t b = $nc(this->fInputStream)->read();
		if (b == -1) {
			expectedTwoBytes();
		}
		$nc(this->fBuffer)->set(byteCount++, (int8_t)b);
	}
	int32_t charCount = byteCount >> 1;
	if (this->fIsBigEndian) {
		processBE(ch, offset, charCount);
	} else {
		processLE(ch, offset, charCount);
	}
	return charCount;
}

int64_t UTF16Reader::skip(int64_t n) {
	int64_t bytesSkipped = $nc(this->fInputStream)->skip(n << 1);
	if (((int64_t)(bytesSkipped & (uint64_t)(int64_t)1)) != 0) {
		int32_t b = $nc(this->fInputStream)->read();
		if (b == -1) {
			expectedTwoBytes();
		}
		++bytesSkipped;
	}
	return bytesSkipped >> 1;
}

bool UTF16Reader::ready() {
	return false;
}

bool UTF16Reader::markSupported() {
	return false;
}

void UTF16Reader::mark(int32_t readAheadLimit) {
	$useLocalCurrentObjectStackCache();
	$throwNew($IOException, $($nc(this->fFormatter)->formatMessage(this->fLocale, "OperationNotSupported"_s, $$new($ObjectArray, {
		$of("mark()"_s),
		$of("UTF-16"_s)
	}))));
}

void UTF16Reader::reset() {
}

void UTF16Reader::close() {
	$nc(this->fInputStream)->close();
}

void UTF16Reader::processBE($chars* ch, int32_t offset, int32_t count) {
	int32_t curPos = 0;
	for (int32_t i = 0; i < count; ++i) {
		int32_t b0 = (int32_t)($nc(this->fBuffer)->get(curPos++) & (uint32_t)255);
		int32_t b1 = (int32_t)($nc(this->fBuffer)->get(curPos++) & (uint32_t)255);
		$nc(ch)->set(offset++, (char16_t)((b0 << 8) | b1));
	}
}

void UTF16Reader::processLE($chars* ch, int32_t offset, int32_t count) {
	int32_t curPos = 0;
	for (int32_t i = 0; i < count; ++i) {
		int32_t b0 = (int32_t)($nc(this->fBuffer)->get(curPos++) & (uint32_t)255);
		int32_t b1 = (int32_t)($nc(this->fBuffer)->get(curPos++) & (uint32_t)255);
		$nc(ch)->set(offset++, (char16_t)((b1 << 8) | b0));
	}
}

void UTF16Reader::expectedTwoBytes() {
	$init($XMLMessageFormatter);
	$throwNew($MalformedByteSequenceException, this->fFormatter, this->fLocale, $XMLMessageFormatter::XML_DOMAIN, "ExpectedByte"_s, $$new($ObjectArray, {
		$of("2"_s),
		$of("2"_s)
	}));
}

UTF16Reader::UTF16Reader() {
}

$Class* UTF16Reader::load$($String* name, bool initialize) {
	$loadClass(UTF16Reader, name, initialize, &_UTF16Reader_ClassInfo_, allocate$UTF16Reader);
	return class$;
}

$Class* UTF16Reader::class$ = nullptr;

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com