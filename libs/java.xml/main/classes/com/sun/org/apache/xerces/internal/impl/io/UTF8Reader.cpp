#include <com/sun/org/apache/xerces/internal/impl/io/UTF8Reader.h>
#include <com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/xml/internal/stream/util/BufferAllocator.h>
#include <com/sun/xml/internal/stream/util/ThreadLocalBufferAllocator.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef DEBUG_READ
#undef DEFAULT_BUFFER_SIZE
#undef XML_DOMAIN

using $MalformedByteSequenceException = ::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $BufferAllocator = ::com::sun::xml::internal::stream::util::BufferAllocator;
using $ThreadLocalBufferAllocator = ::com::sun::xml::internal::stream::util::ThreadLocalBufferAllocator;
using $IOException = ::java::io::IOException;
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

void UTF8Reader::init$($InputStream* inputStream) {
	$useLocalObjectStack();
	$var($MessageFormatter, var$0, $new($XMLMessageFormatter));
	UTF8Reader::init$(inputStream, UTF8Reader::DEFAULT_BUFFER_SIZE, var$0, $($Locale::getDefault()));
}

void UTF8Reader::init$($InputStream* inputStream, $MessageFormatter* messageFormatter, $Locale* locale) {
	UTF8Reader::init$(inputStream, UTF8Reader::DEFAULT_BUFFER_SIZE, messageFormatter, locale);
}

void UTF8Reader::init$($InputStream* inputStream, int32_t size, $MessageFormatter* messageFormatter, $Locale* locale) {
	$Reader::init$();
	this->fSurrogate = -1;
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

int32_t UTF8Reader::read() {
	int32_t c = this->fSurrogate;
	if (this->fSurrogate == -1) {
		int32_t index = 0;
		int32_t b0 = index == this->fOffset ? $nc(this->fInputStream)->read() : $nc(this->fBuffer)->get(index++) & 0xff;
		if (b0 == -1) {
			return -1;
		}
		if (b0 < 128) {
			c = (char16_t)b0;
		} else if ((b0 & 0xe0) == 0xc0 && (b0 & 0x1e) != 0) {
			int32_t b1 = index == this->fOffset ? $nc(this->fInputStream)->read() : $nc(this->fBuffer)->get(index++) & 0xff;
			if (b1 == -1) {
				expectedByte(2, 2);
			}
			if ((b1 & 0xc0) != 0x80) {
				invalidByte(2, 2, b1);
			}
			c = ((b0 << 6) & 0x07c0) | (b1 & 0x3f);
		} else if ((b0 & 0xf0) == 0xe0) {
			int32_t b1 = index == this->fOffset ? $nc(this->fInputStream)->read() : $nc(this->fBuffer)->get(index++) & 0xff;
			if (b1 == -1) {
				expectedByte(2, 3);
			}
			if ((b1 & 0xc0) != 0x80 || (b0 == 237 && b1 >= 160) || ((b0 & 0x0f) == 0 && (b1 & 0x20) == 0)) {
				invalidByte(2, 3, b1);
			}
			int32_t b2 = index == this->fOffset ? $nc(this->fInputStream)->read() : $nc(this->fBuffer)->get(index++) & 0xff;
			if (b2 == -1) {
				expectedByte(3, 3);
			}
			if ((b2 & 0xc0) != 0x80) {
				invalidByte(3, 3, b2);
			}
			c = (((b0 << 12) & 0xf000) | ((b1 << 6) & 0x0fc0)) | (b2 & 0x3f);
		} else if ((b0 & 0xf8) == 0xf0) {
			int32_t b1 = index == this->fOffset ? $nc(this->fInputStream)->read() : $nc(this->fBuffer)->get(index++) & 0xff;
			if (b1 == -1) {
				expectedByte(2, 4);
			}
			if ((b1 & 0xc0) != 0x80 || ((b1 & 0x30) == 0 && (b0 & 7) == 0)) {
				invalidByte(2, 3, b1);
			}
			int32_t b2 = index == this->fOffset ? $nc(this->fInputStream)->read() : $nc(this->fBuffer)->get(index++) & 0xff;
			if (b2 == -1) {
				expectedByte(3, 4);
			}
			if ((b2 & 0xc0) != 0x80) {
				invalidByte(3, 3, b2);
			}
			int32_t b3 = index == this->fOffset ? $nc(this->fInputStream)->read() : $nc(this->fBuffer)->get(index++) & 0xff;
			if (b3 == -1) {
				expectedByte(4, 4);
			}
			if ((b3 & 0xc0) != 0x80) {
				invalidByte(4, 4, b3);
			}
			int32_t uuuuu = ((b0 << 2) & 0x1c) | ((b1 >> 4) & 3);
			if (uuuuu > 16) {
				invalidSurrogate(uuuuu);
			}
			int32_t wwww = uuuuu - 1;
			int32_t hs = ((0xd800 | ((wwww << 6) & 0x03c0)) | ((b1 << 2) & 0x3c)) | ((b2 >> 4) & 3);
			int32_t ls = (0xdc00 | ((b2 << 6) & 0x03c0)) | (b3 & 0x3f);
			c = hs;
			this->fSurrogate = ls;
		} else {
			invalidByte(1, 1, b0);
		}
	} else {
		this->fSurrogate = -1;
	}
	;
	return c;
}

int32_t UTF8Reader::read($chars* ch, int32_t offset, int32_t length) {
	int32_t out = offset;
	if (this->fSurrogate != -1) {
		$nc(ch)->set(offset + 1, (char16_t)this->fSurrogate);
		this->fSurrogate = -1;
		--length;
		++out;
	}
	int32_t count = 0;
	if (this->fOffset == 0) {
		if (length > $nc(this->fBuffer)->length) {
			length = this->fBuffer->length;
		}
		count = $nc(this->fInputStream)->read(this->fBuffer, 0, length);
		if (count == -1) {
			return -1;
		}
		count += out - offset;
	} else {
		count = this->fOffset;
		this->fOffset = 0;
	}
	int32_t total = count;
	int32_t in = 0;
	int8_t byte1 = 0;
	int8_t byte0 = 0;
	for (in = 0; in < total; ++in) {
		byte1 = $nc(this->fBuffer)->get(in);
		if (byte1 >= byte0) {
			$nc(ch)->set(out++, (char16_t)byte1);
		} else {
			break;
		}
	}
	for (; in < total; ++in) {
		byte1 = $nc(this->fBuffer)->get(in);
		if (byte1 >= byte0) {
			$nc(ch)->set(out++, (char16_t)byte1);
			continue;
		}
		int32_t b0 = byte1 & 0xff;
		if ((b0 & 0xe0) == 0xc0 && (b0 & 0x1e) != 0) {
			int32_t b1 = -1;
			if (++in < total) {
				b1 = this->fBuffer->get(in) & 0xff;
			} else {
				b1 = $nc(this->fInputStream)->read();
				if (b1 == -1) {
					if (out > offset) {
						this->fBuffer->set(0, (int8_t)b0);
						this->fOffset = 1;
						return out - offset;
					}
					expectedByte(2, 2);
				}
				++count;
			}
			if ((b1 & 0xc0) != 0x80) {
				if (out > offset) {
					$nc(this->fBuffer)->set(0, (int8_t)b0);
					this->fBuffer->set(1, (int8_t)b1);
					this->fOffset = 2;
					return out - offset;
				}
				invalidByte(2, 2, b1);
			}
			int32_t c = ((b0 << 6) & 0x07c0) | (b1 & 0x3f);
			$nc(ch)->set(out++, (char16_t)c);
			count -= 1;
			continue;
		}
		if ((b0 & 0xf0) == 0xe0) {
			int32_t b1 = -1;
			if (++in < total) {
				b1 = $nc(this->fBuffer)->get(in) & 0xff;
			} else {
				b1 = $nc(this->fInputStream)->read();
				if (b1 == -1) {
					if (out > offset) {
						$nc(this->fBuffer)->set(0, (int8_t)b0);
						this->fOffset = 1;
						return out - offset;
					}
					expectedByte(2, 3);
				}
				++count;
			}
			if ((b1 & 0xc0) != 0x80 || (b0 == 237 && b1 >= 160) || ((b0 & 0x0f) == 0 && (b1 & 0x20) == 0)) {
				if (out > offset) {
					$nc(this->fBuffer)->set(0, (int8_t)b0);
					this->fBuffer->set(1, (int8_t)b1);
					this->fOffset = 2;
					return out - offset;
				}
				invalidByte(2, 3, b1);
			}
			int32_t b2 = -1;
			if (++in < total) {
				b2 = $nc(this->fBuffer)->get(in) & 0xff;
			} else {
				b2 = $nc(this->fInputStream)->read();
				if (b2 == -1) {
					if (out > offset) {
						$nc(this->fBuffer)->set(0, (int8_t)b0);
						this->fBuffer->set(1, (int8_t)b1);
						this->fOffset = 2;
						return out - offset;
					}
					expectedByte(3, 3);
				}
				++count;
			}
			if ((b2 & 0xc0) != 0x80) {
				if (out > offset) {
					$nc(this->fBuffer)->set(0, (int8_t)b0);
					this->fBuffer->set(1, (int8_t)b1);
					this->fBuffer->set(2, (int8_t)b2);
					this->fOffset = 3;
					return out - offset;
				}
				invalidByte(3, 3, b2);
			}
			int32_t c = (((b0 << 12) & 0xf000) | ((b1 << 6) & 0x0fc0)) | (b2 & 0x3f);
			$nc(ch)->set(out++, (char16_t)c);
			count -= 2;
			continue;
		}
		if ((b0 & 0xf8) == 0xf0) {
			int32_t b1 = -1;
			if (++in < total) {
				b1 = $nc(this->fBuffer)->get(in) & 0xff;
			} else {
				b1 = $nc(this->fInputStream)->read();
				if (b1 == -1) {
					if (out > offset) {
						$nc(this->fBuffer)->set(0, (int8_t)b0);
						this->fOffset = 1;
						return out - offset;
					}
					expectedByte(2, 4);
				}
				++count;
			}
			if ((b1 & 0xc0) != 0x80 || ((b1 & 0x30) == 0 && (b0 & 7) == 0)) {
				if (out > offset) {
					$nc(this->fBuffer)->set(0, (int8_t)b0);
					this->fBuffer->set(1, (int8_t)b1);
					this->fOffset = 2;
					return out - offset;
				}
				invalidByte(2, 4, b1);
			}
			int32_t b2 = -1;
			if (++in < total) {
				b2 = $nc(this->fBuffer)->get(in) & 0xff;
			} else {
				b2 = $nc(this->fInputStream)->read();
				if (b2 == -1) {
					if (out > offset) {
						$nc(this->fBuffer)->set(0, (int8_t)b0);
						this->fBuffer->set(1, (int8_t)b1);
						this->fOffset = 2;
						return out - offset;
					}
					expectedByte(3, 4);
				}
				++count;
			}
			if ((b2 & 0xc0) != 0x80) {
				if (out > offset) {
					$nc(this->fBuffer)->set(0, (int8_t)b0);
					this->fBuffer->set(1, (int8_t)b1);
					this->fBuffer->set(2, (int8_t)b2);
					this->fOffset = 3;
					return out - offset;
				}
				invalidByte(3, 4, b2);
			}
			int32_t b3 = -1;
			if (++in < total) {
				b3 = $nc(this->fBuffer)->get(in) & 0xff;
			} else {
				b3 = $nc(this->fInputStream)->read();
				if (b3 == -1) {
					if (out > offset) {
						$nc(this->fBuffer)->set(0, (int8_t)b0);
						this->fBuffer->set(1, (int8_t)b1);
						this->fBuffer->set(2, (int8_t)b2);
						this->fOffset = 3;
						return out - offset;
					}
					expectedByte(4, 4);
				}
				++count;
			}
			if ((b3 & 0xc0) != 0x80) {
				if (out > offset) {
					$nc(this->fBuffer)->set(0, (int8_t)b0);
					this->fBuffer->set(1, (int8_t)b1);
					this->fBuffer->set(2, (int8_t)b2);
					this->fBuffer->set(3, (int8_t)b3);
					this->fOffset = 4;
					return out - offset;
				}
				invalidByte(4, 4, b2);
			}
			if (out + 1 >= $nc(ch)->length) {
				$nc(this->fBuffer)->set(0, (int8_t)b0);
				this->fBuffer->set(1, (int8_t)b1);
				this->fBuffer->set(2, (int8_t)b2);
				this->fBuffer->set(3, (int8_t)b3);
				this->fOffset = 4;
				return out - offset;
			}
			int32_t uuuuu = ((b0 << 2) & 0x1c) | ((b1 >> 4) & 3);
			if (uuuuu > 16) {
				invalidSurrogate(uuuuu);
			}
			int32_t wwww = uuuuu - 1;
			int32_t zzzz = b1 & 0x0f;
			int32_t yyyyyy = b2 & 0x3f;
			int32_t xxxxxx = b3 & 0x3f;
			int32_t hs = ((0xd800 | ((wwww << 6) & 0x03c0)) | (zzzz << 2)) | (yyyyyy >> 4);
			int32_t ls = (0xdc00 | ((yyyyyy << 6) & 0x03c0)) | xxxxxx;
			ch->set(out++, (char16_t)hs);
			ch->set(out++, (char16_t)ls);
			count -= 2;
			continue;
		}
		if (out > offset) {
			$nc(this->fBuffer)->set(0, (int8_t)b0);
			this->fOffset = 1;
			return out - offset;
		}
		invalidByte(1, 1, b0);
	}
	;
	return count;
}

int64_t UTF8Reader::skip(int64_t n) {
	int64_t remaining = n;
	$var($chars, ch, $new($chars, $nc(this->fBuffer)->length));
	do {
		int32_t length = ch->length < remaining ? ch->length : (int32_t)remaining;
		int32_t count = read(ch, 0, length);
		if (count > 0) {
			remaining -= count;
		} else {
			break;
		}
	} while (remaining > 0);
	int64_t skipped = n - remaining;
	return skipped;
}

bool UTF8Reader::ready() {
	return false;
}

bool UTF8Reader::markSupported() {
	return false;
}

void UTF8Reader::mark(int32_t readAheadLimit) {
	$useLocalObjectStack();
	$throwNew($IOException, $($nc(this->fFormatter)->formatMessage(this->fLocale, "OperationNotSupported"_s, $$new($ObjectArray, {
		"mark()"_s,
		"UTF-8"_s
	}))));
}

void UTF8Reader::reset() {
	this->fOffset = 0;
	this->fSurrogate = -1;
}

void UTF8Reader::close() {
	$var($BufferAllocator, ba, $ThreadLocalBufferAllocator::getBufferAllocator());
	$nc(ba)->returnByteBuffer(this->fBuffer);
	$set(this, fBuffer, nullptr);
	$nc(this->fInputStream)->close();
}

void UTF8Reader::expectedByte(int32_t position, int32_t count) {
	$useLocalObjectStack();
	$init($XMLMessageFormatter);
	$throwNew($MalformedByteSequenceException, this->fFormatter, this->fLocale, $XMLMessageFormatter::XML_DOMAIN, "ExpectedByte"_s, $$new($ObjectArray, {
		$($Integer::toString(position)),
		$($Integer::toString(count))
	}));
}

void UTF8Reader::invalidByte(int32_t position, int32_t count, int32_t c) {
	$useLocalObjectStack();
	$init($XMLMessageFormatter);
	$throwNew($MalformedByteSequenceException, this->fFormatter, this->fLocale, $XMLMessageFormatter::XML_DOMAIN, "InvalidByte"_s, $$new($ObjectArray, {
		$($Integer::toString(position)),
		$($Integer::toString(count))
	}));
}

void UTF8Reader::invalidSurrogate(int32_t uuuuu) {
	$useLocalObjectStack();
	$init($XMLMessageFormatter);
	$throwNew($MalformedByteSequenceException, this->fFormatter, this->fLocale, $XMLMessageFormatter::XML_DOMAIN, "InvalidHighSurrogate"_s, $$new($ObjectArray, {$($Integer::toHexString(uuuuu))}));
}

UTF8Reader::UTF8Reader() {
}

$Class* UTF8Reader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UTF8Reader, DEFAULT_BUFFER_SIZE)},
		{"DEBUG_READ", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UTF8Reader, DEBUG_READ)},
		{"fInputStream", "Ljava/io/InputStream;", nullptr, $PROTECTED, $field(UTF8Reader, fInputStream)},
		{"fBuffer", "[B", nullptr, $PROTECTED, $field(UTF8Reader, fBuffer)},
		{"fOffset", "I", nullptr, $PROTECTED, $field(UTF8Reader, fOffset)},
		{"fSurrogate", "I", nullptr, $PRIVATE, $field(UTF8Reader, fSurrogate)},
		{"fFormatter", "Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;", nullptr, $PRIVATE, $field(UTF8Reader, fFormatter)},
		{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(UTF8Reader, fLocale)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(UTF8Reader, init$, void, $InputStream*)},
		{"<init>", "(Ljava/io/InputStream;Lcom/sun/org/apache/xerces/internal/util/MessageFormatter;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(UTF8Reader, init$, void, $InputStream*, $MessageFormatter*, $Locale*)},
		{"<init>", "(Ljava/io/InputStream;ILcom/sun/org/apache/xerces/internal/util/MessageFormatter;Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(UTF8Reader, init$, void, $InputStream*, int32_t, $MessageFormatter*, $Locale*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(UTF8Reader, close, void), "java.io.IOException"},
		{"expectedByte", "(II)V", nullptr, $PRIVATE, $method(UTF8Reader, expectedByte, void, int32_t, int32_t), "com.sun.org.apache.xerces.internal.impl.io.MalformedByteSequenceException"},
		{"invalidByte", "(III)V", nullptr, $PRIVATE, $method(UTF8Reader, invalidByte, void, int32_t, int32_t, int32_t), "com.sun.org.apache.xerces.internal.impl.io.MalformedByteSequenceException"},
		{"invalidSurrogate", "(I)V", nullptr, $PRIVATE, $method(UTF8Reader, invalidSurrogate, void, int32_t), "com.sun.org.apache.xerces.internal.impl.io.MalformedByteSequenceException"},
		{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(UTF8Reader, mark, void, int32_t), "java.io.IOException"},
		{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(UTF8Reader, markSupported, bool)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(UTF8Reader, read, int32_t), "java.io.IOException"},
		{"read", "([CII)I", nullptr, $PUBLIC, $virtualMethod(UTF8Reader, read, int32_t, $chars*, int32_t, int32_t), "java.io.IOException"},
		{"ready", "()Z", nullptr, $PUBLIC, $virtualMethod(UTF8Reader, ready, bool), "java.io.IOException"},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(UTF8Reader, reset, void), "java.io.IOException"},
		{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(UTF8Reader, skip, int64_t, int64_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.io.UTF8Reader",
		"java.io.Reader",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UTF8Reader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(UTF8Reader));
	});
	return class$;
}

$Class* UTF8Reader::class$ = nullptr;

							} // io
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com