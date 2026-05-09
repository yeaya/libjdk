#include <com/sun/org/apache/xml/internal/serializer/SerializerTraceWriter.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/WriterChain.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <jcpp.h>

#undef EVENTTYPE_OUTPUT_CHARACTERS

using $SerializerTrace = ::com::sun::org::apache::xml::internal::serializer::SerializerTrace;
using $WriterChain = ::com::sun::org::apache::xml::internal::serializer::WriterChain;
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

void SerializerTraceWriter::write($chars* arg0) {
	this->$Writer::write(arg0);
}

void SerializerTraceWriter::write($String* arg0, int32_t arg1, int32_t arg2) {
	this->$Writer::write(arg0, arg1, arg2);
}

int32_t SerializerTraceWriter::hashCode() {
	return this->$Writer::hashCode();
}

bool SerializerTraceWriter::equals(Object$* arg0) {
	return this->$Writer::equals(arg0);
}

$Object* SerializerTraceWriter::clone() {
	return this->$Writer::clone();
}

$String* SerializerTraceWriter::toString() {
	return this->$Writer::toString();
}

void SerializerTraceWriter::finalize() {
	this->$Writer::finalize();
}

void SerializerTraceWriter::setBufferSize(int32_t size) {
	$set(this, buf, $new($bytes, size + 3));
	this->buf_length = size;
	this->count = 0;
}

void SerializerTraceWriter::init$($Writer* out, $SerializerTrace* tracer) {
	$Writer::init$();
	$set(this, m_writer, out);
	$set(this, m_tracer, tracer);
	setBufferSize(1024);
}

void SerializerTraceWriter::flushBuffer() {
	if (this->count > 0) {
		$var($chars, chars, $new($chars, this->count));
		for (int32_t i = 0; i < this->count; ++i) {
			chars->set(i, (char16_t)$nc(this->buf)->get(i));
		}
		if (this->m_tracer != nullptr) {
			this->m_tracer->fireGenerateEvent($SerializerTrace::EVENTTYPE_OUTPUT_CHARACTERS, chars, 0, chars->length);
		}
		this->count = 0;
	}
}

void SerializerTraceWriter::flush() {
	if (this->m_writer != nullptr) {
		this->m_writer->flush();
	}
	flushBuffer();
}

void SerializerTraceWriter::close() {
	if (this->m_writer != nullptr) {
		this->m_writer->close();
	}
	flushBuffer();
}

void SerializerTraceWriter::write(int32_t c) {
	if (this->m_writer != nullptr) {
		this->m_writer->write(c);
	}
	if (this->count >= this->buf_length) {
		flushBuffer();
	}
	if (c < 128) {
		$nc(this->buf)->set(this->count++, (int8_t)(c));
	} else if (c < 2048) {
		$nc(this->buf)->set(this->count++, (int8_t)(192 + (c >> 6)));
		this->buf->set(this->count++, (int8_t)(0x80 + (c & 0x3f)));
	} else {
		$nc(this->buf)->set(this->count++, (int8_t)(224 + (c >> 12)));
		this->buf->set(this->count++, (int8_t)(0x80 + ((c >> 6) & 0x3f)));
		this->buf->set(this->count++, (int8_t)(0x80 + (c & 0x3f)));
	}
}

void SerializerTraceWriter::write($chars* chars, int32_t start, int32_t length) {
	if (this->m_writer != nullptr) {
		this->m_writer->write(chars, start, length);
	}
	int32_t lengthx3 = (length << 1) + length;
	if (lengthx3 >= this->buf_length) {
		flushBuffer();
		setBufferSize(2 * lengthx3);
	}
	if (lengthx3 > this->buf_length - this->count) {
		flushBuffer();
	}
	int32_t n = length + start;
	for (int32_t i = start; i < n; ++i) {
		char16_t c = $nc(chars)->get(i);
		if (c < 128) {
			$nc(this->buf)->set(this->count++, (int8_t)(c));
		} else if (c < 2048) {
			$nc(this->buf)->set(this->count++, (int8_t)(192 + (c >> 6)));
			this->buf->set(this->count++, (int8_t)(0x80 + (c & 0x3f)));
		} else {
			$nc(this->buf)->set(this->count++, (int8_t)(224 + (c >> 12)));
			this->buf->set(this->count++, (int8_t)(0x80 + ((c >> 6) & 0x3f)));
			this->buf->set(this->count++, (int8_t)(0x80 + (c & 0x3f)));
		}
	}
}

void SerializerTraceWriter::write($String* s) {
	if (this->m_writer != nullptr) {
		this->m_writer->write(s);
	}
	int32_t length = $nc(s)->length();
	int32_t lengthx3 = (length << 1) + length;
	if (lengthx3 >= this->buf_length) {
		flushBuffer();
		setBufferSize(2 * lengthx3);
	}
	if (lengthx3 > this->buf_length - this->count) {
		flushBuffer();
	}
	for (int32_t i = 0; i < length; ++i) {
		char16_t c = s->charAt(i);
		if (c < 128) {
			$nc(this->buf)->set(this->count++, (int8_t)(c));
		} else if (c < 2048) {
			$nc(this->buf)->set(this->count++, (int8_t)(192 + (c >> 6)));
			this->buf->set(this->count++, (int8_t)(0x80 + (c & 0x3f)));
		} else {
			$nc(this->buf)->set(this->count++, (int8_t)(224 + (c >> 12)));
			this->buf->set(this->count++, (int8_t)(0x80 + ((c >> 6) & 0x3f)));
			this->buf->set(this->count++, (int8_t)(0x80 + (c & 0x3f)));
		}
	}
}

$Writer* SerializerTraceWriter::getWriter() {
	return this->m_writer;
}

$OutputStream* SerializerTraceWriter::getOutputStream() {
	$var($OutputStream, retval, nullptr);
	if ($instanceOf($WriterChain, this->m_writer)) {
		$assign(retval, $cast($WriterChain, this->m_writer)->getOutputStream());
	}
	return retval;
}

SerializerTraceWriter::SerializerTraceWriter() {
}

$Class* SerializerTraceWriter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m_writer", "Ljava/io/Writer;", nullptr, $PRIVATE | $FINAL, $field(SerializerTraceWriter, m_writer)},
		{"m_tracer", "Lcom/sun/org/apache/xml/internal/serializer/SerializerTrace;", nullptr, $PRIVATE | $FINAL, $field(SerializerTraceWriter, m_tracer)},
		{"buf_length", "I", nullptr, $PRIVATE, $field(SerializerTraceWriter, buf_length)},
		{"buf", "[B", nullptr, $PRIVATE, $field(SerializerTraceWriter, buf)},
		{"count", "I", nullptr, $PRIVATE, $field(SerializerTraceWriter, count)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/io/Writer;Lcom/sun/org/apache/xml/internal/serializer/SerializerTrace;)V", nullptr, $PUBLIC, $method(SerializerTraceWriter, init$, void, $Writer*, $SerializerTrace*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SerializerTraceWriter, close, void), "java.io.IOException"},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(SerializerTraceWriter, flush, void), "java.io.IOException"},
		{"flushBuffer", "()V", nullptr, $PRIVATE, $method(SerializerTraceWriter, flushBuffer, void), "java.io.IOException"},
		{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(SerializerTraceWriter, getOutputStream, $OutputStream*)},
		{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(SerializerTraceWriter, getWriter, $Writer*)},
		{"setBufferSize", "(I)V", nullptr, $PRIVATE, $method(SerializerTraceWriter, setBufferSize, void, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*write", "([C)V", nullptr, $PUBLIC},
		{"*write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(SerializerTraceWriter, write, void, int32_t), "java.io.IOException"},
		{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(SerializerTraceWriter, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
		{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializerTraceWriter, write, void, $String*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.SerializerTraceWriter",
		"java.io.Writer",
		"com.sun.org.apache.xml.internal.serializer.WriterChain",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SerializerTraceWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SerializerTraceWriter));
	});
	return class$;
}

$Class* SerializerTraceWriter::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com