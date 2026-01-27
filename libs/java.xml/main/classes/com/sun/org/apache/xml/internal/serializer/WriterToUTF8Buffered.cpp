#include <com/sun/org/apache/xml/internal/serializer/WriterToUTF8Buffered.h>

#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <jcpp.h>

#undef BYTES_MAX
#undef CHARS_MAX

using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$FieldInfo _WriterToUTF8Buffered_FieldInfo_[] = {
	{"BYTES_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WriterToUTF8Buffered, BYTES_MAX)},
	{"CHARS_MAX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WriterToUTF8Buffered, CHARS_MAX)},
	{"m_os", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $FINAL, $field(WriterToUTF8Buffered, m_os)},
	{"m_outputBytes", "[B", nullptr, $PRIVATE | $FINAL, $field(WriterToUTF8Buffered, m_outputBytes)},
	{"m_inputChars", "[C", nullptr, $PRIVATE | $FINAL, $field(WriterToUTF8Buffered, m_inputChars)},
	{"count", "I", nullptr, $PRIVATE, $field(WriterToUTF8Buffered, count)},
	{}
};

$MethodInfo _WriterToUTF8Buffered_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(WriterToUTF8Buffered, init$, void, $OutputStream*), "java.io.UnsupportedEncodingException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(WriterToUTF8Buffered, close, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(WriterToUTF8Buffered, flush, void), "java.io.IOException"},
	{"flushBuffer", "()V", nullptr, $PUBLIC, $method(WriterToUTF8Buffered, flushBuffer, void), "java.io.IOException"},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(WriterToUTF8Buffered, getOutputStream, $OutputStream*)},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(WriterToUTF8Buffered, getWriter, $Writer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*write", "([C)V", nullptr, $PUBLIC},
	{"*write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(WriterToUTF8Buffered, write, void, int32_t), "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(WriterToUTF8Buffered, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(WriterToUTF8Buffered, write, void, $String*), "java.io.IOException"},
	{}
};

$ClassInfo _WriterToUTF8Buffered_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.WriterToUTF8Buffered",
	"java.io.Writer",
	"com.sun.org.apache.xml.internal.serializer.WriterChain",
	_WriterToUTF8Buffered_FieldInfo_,
	_WriterToUTF8Buffered_MethodInfo_
};

$Object* allocate$WriterToUTF8Buffered($Class* clazz) {
	return $of($alloc(WriterToUTF8Buffered));
}

void WriterToUTF8Buffered::write($chars* arg0) {
	this->$Writer::write(arg0);
}

void WriterToUTF8Buffered::write($String* arg0, int32_t arg1, int32_t arg2) {
	this->$Writer::write(arg0, arg1, arg2);
}

int32_t WriterToUTF8Buffered::hashCode() {
	 return this->$Writer::hashCode();
}

bool WriterToUTF8Buffered::equals(Object$* arg0) {
	 return this->$Writer::equals(arg0);
}

$Object* WriterToUTF8Buffered::clone() {
	 return this->$Writer::clone();
}

$String* WriterToUTF8Buffered::toString() {
	 return this->$Writer::toString();
}

void WriterToUTF8Buffered::finalize() {
	this->$Writer::finalize();
}

void WriterToUTF8Buffered::init$($OutputStream* out) {
	$Writer::init$();
	$set(this, m_os, out);
	$set(this, m_outputBytes, $new($bytes, WriterToUTF8Buffered::BYTES_MAX + 3));
	$set(this, m_inputChars, $new($chars, WriterToUTF8Buffered::CHARS_MAX + 2));
	this->count = 0;
}

void WriterToUTF8Buffered::write(int32_t c) {
	if (this->count >= WriterToUTF8Buffered::BYTES_MAX) {
		flushBuffer();
	}
	if (c < 128) {
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(c));
	} else if (c < 2048) {
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(192 + (c >> 6)));
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(128 + ((int32_t)(c & (uint32_t)63))));
	} else if (c < 0x00010000) {
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(224 + (c >> 12)));
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(128 + ((int32_t)((c >> 6) & (uint32_t)63))));
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(128 + ((int32_t)(c & (uint32_t)63))));
	} else {
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(240 + (c >> 18)));
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(128 + ((int32_t)((c >> 12) & (uint32_t)63))));
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(128 + ((int32_t)((c >> 6) & (uint32_t)63))));
		$nc(this->m_outputBytes)->set(this->count++, (int8_t)(128 + ((int32_t)(c & (uint32_t)63))));
	}
}

void WriterToUTF8Buffered::write($chars* chars, int32_t start, int32_t length) {
	int32_t lengthx3 = 3 * length;
	if (lengthx3 >= WriterToUTF8Buffered::BYTES_MAX - this->count) {
		flushBuffer();
		if (lengthx3 > WriterToUTF8Buffered::BYTES_MAX) {
			int32_t split = $div(length, WriterToUTF8Buffered::CHARS_MAX);
			int32_t chunks = 0;
			if ($mod(length, WriterToUTF8Buffered::CHARS_MAX) > 0) {
				chunks = split + 1;
			} else {
				chunks = split;
			}
			int32_t end_chunk = start;
			for (int32_t chunk = 1; chunk <= chunks; ++chunk) {
				int32_t start_chunk = end_chunk;
				end_chunk = start + (int32_t)($div((((int64_t)length) * chunk), chunks));
				char16_t c = $nc(chars)->get(end_chunk - 1);
				int32_t ic = chars->get(end_chunk - 1);
				if (c >= 0x0000D800 && c <= 0x0000DBFF) {
					if (end_chunk < start + length) {
						++end_chunk;
					} else {
						--end_chunk;
					}
				}
				int32_t len_chunk = (end_chunk - start_chunk);
				this->write(chars, start_chunk, len_chunk);
			}
			return;
		}
	}
	int32_t n = length + start;
	$var($bytes, buf_loc, this->m_outputBytes);
	int32_t count_loc = this->count;
	int32_t i = start;
	{
		char16_t c = 0;
		for (; i < n && (c = $nc(chars)->get(i)) < 128; ++i) {
			$nc(buf_loc)->set(count_loc++, (int8_t)c);
		}
	}
	for (; i < n; ++i) {
		char16_t c = $nc(chars)->get(i);
		if (c < 128) {
			$nc(buf_loc)->set(count_loc++, (int8_t)(c));
		} else if (c < 2048) {
			$nc(buf_loc)->set(count_loc++, (int8_t)(192 + (c >> 6)));
			buf_loc->set(count_loc++, (int8_t)(128 + ((int32_t)(c & (uint32_t)63))));
		} else if (c >= 0x0000D800 && c <= 0x0000DBFF) {
			char16_t high = 0;
			char16_t low = 0;
			high = c;
			++i;
			low = chars->get(i);
			$nc(buf_loc)->set(count_loc++, (int8_t)(240 | ((int32_t)(((high + 64) >> 8) & (uint32_t)240))));
			buf_loc->set(count_loc++, (int8_t)(128 | ((int32_t)(((high + 64) >> 2) & (uint32_t)63))));
			buf_loc->set(count_loc++, (int8_t)(128 | (((int32_t)((low >> 6) & (uint32_t)15)) + ((int32_t)((high << 4) & (uint32_t)48)))));
			buf_loc->set(count_loc++, (int8_t)(128 | ((int32_t)(low & (uint32_t)63))));
		} else {
			$nc(buf_loc)->set(count_loc++, (int8_t)(224 + (c >> 12)));
			buf_loc->set(count_loc++, (int8_t)(128 + ((int32_t)((c >> 6) & (uint32_t)63))));
			buf_loc->set(count_loc++, (int8_t)(128 + ((int32_t)(c & (uint32_t)63))));
		}
	}
	this->count = count_loc;
}

void WriterToUTF8Buffered::write($String* s) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(s)->length();
	int32_t lengthx3 = 3 * length;
	if (lengthx3 >= WriterToUTF8Buffered::BYTES_MAX - this->count) {
		flushBuffer();
		if (lengthx3 > WriterToUTF8Buffered::BYTES_MAX) {
			int32_t start = 0;
			int32_t split = $div(length, WriterToUTF8Buffered::CHARS_MAX);
			int32_t chunks = 0;
			if ($mod(length, WriterToUTF8Buffered::CHARS_MAX) > 0) {
				chunks = split + 1;
			} else {
				chunks = split;
			}
			int32_t end_chunk = 0;
			for (int32_t chunk = 1; chunk <= chunks; ++chunk) {
				int32_t start_chunk = end_chunk;
				end_chunk = start + (int32_t)($div((((int64_t)length) * chunk), chunks));
				s->getChars(start_chunk, end_chunk, this->m_inputChars, 0);
				int32_t len_chunk = (end_chunk - start_chunk);
				char16_t c = $nc(this->m_inputChars)->get(len_chunk - 1);
				if (c >= 0x0000D800 && c <= 0x0000DBFF) {
					--end_chunk;
					--len_chunk;
					if (chunk == chunks) {
					}
				}
				this->write(this->m_inputChars, 0, len_chunk);
			}
			return;
		}
	}
	s->getChars(0, length, this->m_inputChars, 0);
	$var($chars, chars, this->m_inputChars);
	int32_t n = length;
	$var($bytes, buf_loc, this->m_outputBytes);
	int32_t count_loc = this->count;
	int32_t i = 0;
	{
		char16_t c = 0;
		for (; i < n && (c = $nc(chars)->get(i)) < 128; ++i) {
			$nc(buf_loc)->set(count_loc++, (int8_t)c);
		}
	}
	for (; i < n; ++i) {
		char16_t c = $nc(chars)->get(i);
		if (c < 128) {
			$nc(buf_loc)->set(count_loc++, (int8_t)(c));
		} else if (c < 2048) {
			$nc(buf_loc)->set(count_loc++, (int8_t)(192 + (c >> 6)));
			buf_loc->set(count_loc++, (int8_t)(128 + ((int32_t)(c & (uint32_t)63))));
		} else if (c >= 0x0000D800 && c <= 0x0000DBFF) {
			char16_t high = 0;
			char16_t low = 0;
			high = c;
			++i;
			low = chars->get(i);
			$nc(buf_loc)->set(count_loc++, (int8_t)(240 | ((int32_t)(((high + 64) >> 8) & (uint32_t)240))));
			buf_loc->set(count_loc++, (int8_t)(128 | ((int32_t)(((high + 64) >> 2) & (uint32_t)63))));
			buf_loc->set(count_loc++, (int8_t)(128 | (((int32_t)((low >> 6) & (uint32_t)15)) + ((int32_t)((high << 4) & (uint32_t)48)))));
			buf_loc->set(count_loc++, (int8_t)(128 | ((int32_t)(low & (uint32_t)63))));
		} else {
			$nc(buf_loc)->set(count_loc++, (int8_t)(224 + (c >> 12)));
			buf_loc->set(count_loc++, (int8_t)(128 + ((int32_t)((c >> 6) & (uint32_t)63))));
			buf_loc->set(count_loc++, (int8_t)(128 + ((int32_t)(c & (uint32_t)63))));
		}
	}
	this->count = count_loc;
}

void WriterToUTF8Buffered::flushBuffer() {
	if (this->count > 0) {
		$nc(this->m_os)->write(this->m_outputBytes, 0, this->count);
		this->count = 0;
	}
}

void WriterToUTF8Buffered::flush() {
	flushBuffer();
	$nc(this->m_os)->flush();
}

void WriterToUTF8Buffered::close() {
	flushBuffer();
	$nc(this->m_os)->close();
}

$OutputStream* WriterToUTF8Buffered::getOutputStream() {
	return this->m_os;
}

$Writer* WriterToUTF8Buffered::getWriter() {
	return nullptr;
}

WriterToUTF8Buffered::WriterToUTF8Buffered() {
}

$Class* WriterToUTF8Buffered::load$($String* name, bool initialize) {
	$loadClass(WriterToUTF8Buffered, name, initialize, &_WriterToUTF8Buffered_ClassInfo_, allocate$WriterToUTF8Buffered);
	return class$;
}

$Class* WriterToUTF8Buffered::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com