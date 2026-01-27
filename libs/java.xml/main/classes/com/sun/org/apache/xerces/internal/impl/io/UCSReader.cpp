#include <com/sun/org/apache/xerces/internal/impl/io/UCSReader.h>

#include <com/sun/xml/internal/stream/util/BufferAllocator.h>
#include <com/sun/xml/internal/stream/util/ThreadLocalBufferAllocator.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <jcpp.h>

#undef DEFAULT_BUFFER_SIZE
#undef UCS2BE
#undef UCS2LE
#undef UCS4BE
#undef UCS4LE

using $BufferAllocator = ::com::sun::xml::internal::stream::util::BufferAllocator;
using $ThreadLocalBufferAllocator = ::com::sun::xml::internal::stream::util::ThreadLocalBufferAllocator;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
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

$FieldInfo _UCSReader_FieldInfo_[] = {
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCSReader, DEFAULT_BUFFER_SIZE)},
	{"UCS2LE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCSReader, UCS2LE)},
	{"UCS2BE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCSReader, UCS2BE)},
	{"UCS4LE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCSReader, UCS4LE)},
	{"UCS4BE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCSReader, UCS4BE)},
	{"fInputStream", "Ljava/io/InputStream;", nullptr, $PROTECTED, $field(UCSReader, fInputStream)},
	{"fBuffer", "[B", nullptr, $PROTECTED, $field(UCSReader, fBuffer)},
	{"fEncoding", "S", nullptr, $PROTECTED, $field(UCSReader, fEncoding)},
	{}
};

$MethodInfo _UCSReader_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;S)V", nullptr, $PUBLIC, $method(UCSReader, init$, void, $InputStream*, int16_t)},
	{"<init>", "(Ljava/io/InputStream;IS)V", nullptr, $PUBLIC, $method(UCSReader, init$, void, $InputStream*, int32_t, int16_t)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(UCSReader, close, void), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(UCSReader, mark, void, int32_t), "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(UCSReader, markSupported, bool)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(UCSReader, read, int32_t), "java.io.IOException"},
	{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(UCSReader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(UCSReader, ready, bool), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(UCSReader, reset, void), "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(UCSReader, skip, int64_t, int64_t), "java.io.IOException"},
	{}
};

$ClassInfo _UCSReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.io.UCSReader",
	"java.io.Reader",
	nullptr,
	_UCSReader_FieldInfo_,
	_UCSReader_MethodInfo_
};

$Object* allocate$UCSReader($Class* clazz) {
	return $of($alloc(UCSReader));
}

void UCSReader::init$($InputStream* inputStream, int16_t encoding) {
	UCSReader::init$(inputStream, UCSReader::DEFAULT_BUFFER_SIZE, encoding);
}

void UCSReader::init$($InputStream* inputStream, int32_t size, int16_t encoding) {
	$Reader::init$();
	$set(this, fInputStream, inputStream);
	$var($BufferAllocator, ba, $ThreadLocalBufferAllocator::getBufferAllocator());
	$set(this, fBuffer, $nc(ba)->getByteBuffer(size));
	if (this->fBuffer == nullptr) {
		$set(this, fBuffer, $new($bytes, size));
	}
	this->fEncoding = encoding;
}

int32_t UCSReader::read() {
	$useLocalCurrentObjectStackCache();
	int32_t b0 = (int32_t)($nc(this->fInputStream)->read() & (uint32_t)255);
	if (b0 == 255) {
		return -1;
	}
	int32_t b1 = (int32_t)($nc(this->fInputStream)->read() & (uint32_t)255);
	if (b1 == 255) {
		return -1;
	}
	if (this->fEncoding >= 4) {
		int32_t b2 = (int32_t)($nc(this->fInputStream)->read() & (uint32_t)255);
		if (b2 == 255) {
			return -1;
		}
		int32_t b3 = (int32_t)($nc(this->fInputStream)->read() & (uint32_t)255);
		if (b3 == 255) {
			return -1;
		}
		$nc($System::err)->println($$str({"b0 is "_s, $$str(((int32_t)(b0 & (uint32_t)255))), " b1 "_s, $$str(((int32_t)(b1 & (uint32_t)255))), " b2 "_s, $$str(((int32_t)(b2 & (uint32_t)255))), " b3 "_s, $$str(((int32_t)(b3 & (uint32_t)255)))}));
		if (this->fEncoding == UCSReader::UCS4BE) {
			return (b0 << 24) + (b1 << 16) + (b2 << 8) + b3;
		} else {
			return (b3 << 24) + (b2 << 16) + (b1 << 8) + b0;
		}
	} else if (this->fEncoding == UCSReader::UCS2BE) {
		return (b0 << 8) + b1;
	} else {
		return (b1 << 8) + b0;
	}
}

int32_t UCSReader::read($chars* ch, int32_t offset, int32_t length) {
	int32_t byteLength = $sl(length, (this->fEncoding >= 4) ? 2 : 1);
	if (byteLength > $nc(this->fBuffer)->length) {
		byteLength = $nc(this->fBuffer)->length;
	}
	int32_t count = $nc(this->fInputStream)->read(this->fBuffer, 0, byteLength);
	if (count == -1) {
		return -1;
	}
	if (this->fEncoding >= 4) {
		int32_t numToRead = ((int32_t)((4 - ((int32_t)(count & (uint32_t)3))) & (uint32_t)3));
		for (int32_t i = 0; i < numToRead; ++i) {
			int32_t charRead = $nc(this->fInputStream)->read();
			if (charRead == -1) {
				for (int32_t j = i; j < numToRead; ++j) {
					$nc(this->fBuffer)->set(count + j, (int8_t)0);
				}
				break;
			} else {
				$nc(this->fBuffer)->set(count + i, (int8_t)charRead);
			}
		}
		count += numToRead;
	} else {
		int32_t numToRead = (int32_t)(count & (uint32_t)1);
		if (numToRead != 0) {
			++count;
			int32_t charRead = $nc(this->fInputStream)->read();
			if (charRead == -1) {
				$nc(this->fBuffer)->set(count, (int8_t)0);
			} else {
				$nc(this->fBuffer)->set(count, (int8_t)charRead);
			}
		}
	}
	int32_t numChars = $sr(count, (this->fEncoding >= 4) ? 2 : 1);
	int32_t curPos = 0;
	for (int32_t i = 0; i < numChars; ++i) {
		int32_t b0 = (int32_t)($nc(this->fBuffer)->get(curPos++) & (uint32_t)255);
		int32_t b1 = (int32_t)($nc(this->fBuffer)->get(curPos++) & (uint32_t)255);
		if (this->fEncoding >= 4) {
			int32_t b2 = (int32_t)($nc(this->fBuffer)->get(curPos++) & (uint32_t)255);
			int32_t b3 = (int32_t)($nc(this->fBuffer)->get(curPos++) & (uint32_t)255);
			if (this->fEncoding == UCSReader::UCS4BE) {
				$nc(ch)->set(offset + i, (char16_t)((b0 << 24) + (b1 << 16) + (b2 << 8) + b3));
			} else {
				$nc(ch)->set(offset + i, (char16_t)((b3 << 24) + (b2 << 16) + (b1 << 8) + b0));
			}
		} else if (this->fEncoding == UCSReader::UCS2BE) {
			$nc(ch)->set(offset + i, (char16_t)((b0 << 8) + b1));
		} else {
			$nc(ch)->set(offset + i, (char16_t)((b1 << 8) + b0));
		}
	}
	return numChars;
}

int64_t UCSReader::skip(int64_t n) {
	int32_t charWidth = (this->fEncoding >= 4) ? 2 : 1;
	int64_t bytesSkipped = $nc(this->fInputStream)->skip($sl(n, charWidth));
	if (((int64_t)(bytesSkipped & (uint64_t)(int64_t)(charWidth | 1))) == 0) {
		return $sr(bytesSkipped, charWidth);
	}
	return ($sr(bytesSkipped, charWidth)) + 1;
}

bool UCSReader::ready() {
	return false;
}

bool UCSReader::markSupported() {
	return $nc(this->fInputStream)->markSupported();
}

void UCSReader::mark(int32_t readAheadLimit) {
	$nc(this->fInputStream)->mark(readAheadLimit);
}

void UCSReader::reset() {
	$nc(this->fInputStream)->reset();
}

void UCSReader::close() {
	$var($BufferAllocator, ba, $ThreadLocalBufferAllocator::getBufferAllocator());
	$nc(ba)->returnByteBuffer(this->fBuffer);
	$set(this, fBuffer, nullptr);
	$nc(this->fInputStream)->close();
}

UCSReader::UCSReader() {
}

$Class* UCSReader::load$($String* name, bool initialize) {
	$loadClass(UCSReader, name, initialize, &_UCSReader_ClassInfo_, allocate$UCSReader);
	return class$;
}

$Class* UCSReader::class$ = nullptr;

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com