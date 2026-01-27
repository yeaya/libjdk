#include <com/sun/xml/internal/stream/writers/XMLWriter.h>

#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <jcpp.h>

#undef DEBUG
#undef THRESHHOLD_LENGTH

using $XMLStringBuffer = ::com::sun::org::apache::xerces::internal::util::XMLStringBuffer;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _XMLWriter_FieldInfo_[] = {
	{"writer", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(XMLWriter, writer)},
	{"size", "I", nullptr, $PRIVATE, $field(XMLWriter, size)},
	{"buffer", "Lcom/sun/org/apache/xerces/internal/util/XMLStringBuffer;", nullptr, $PRIVATE, $field(XMLWriter, buffer)},
	{"THRESHHOLD_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLWriter, THRESHHOLD_LENGTH)},
	{"DEBUG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLWriter, DEBUG)},
	{}
};

$MethodInfo _XMLWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(XMLWriter, init$, void, $Writer*)},
	{"<init>", "(Ljava/io/Writer;I)V", nullptr, $PUBLIC, $method(XMLWriter, init$, void, $Writer*, int32_t)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, close, void), "java.io.IOException"},
	{"conditionalWrite", "()V", nullptr, $PRIVATE, $method(XMLWriter, conditionalWrite, void), "java.io.IOException"},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(XMLWriter, ensureOpen, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, flush, void), "java.io.IOException"},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PROTECTED, $virtualMethod(XMLWriter, getWriter, $Writer*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, reset, void)},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, setWriter, void, $Writer*)},
	{"setWriter", "(Ljava/io/Writer;I)V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, setWriter, void, $Writer*, int32_t)},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, write, void, int32_t), "java.io.IOException"},
	{"write", "([C)V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, write, void, $chars*), "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, write, void, $String*, int32_t, int32_t), "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLWriter, write, void, $String*), "java.io.IOException"},
	{"writeBufferedData", "()V", nullptr, $PRIVATE, $method(XMLWriter, writeBufferedData, void), "java.io.IOException"},
	{}
};

$ClassInfo _XMLWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLWriter",
	"java.io.Writer",
	nullptr,
	_XMLWriter_FieldInfo_,
	_XMLWriter_MethodInfo_
};

$Object* allocate$XMLWriter($Class* clazz) {
	return $of($alloc(XMLWriter));
}

void XMLWriter::init$($Writer* writer) {
	XMLWriter::init$(writer, XMLWriter::THRESHHOLD_LENGTH);
}

void XMLWriter::init$($Writer* writer, int32_t size) {
	$Writer::init$();
	$set(this, buffer, $new($XMLStringBuffer, 6 * (1 << 11)));
	$set(this, writer, writer);
	this->size = size;
}

void XMLWriter::write(int32_t c) {
	ensureOpen();
	$nc(this->buffer)->append((char16_t)c);
	conditionalWrite();
}

void XMLWriter::write($chars* cbuf) {
	write(cbuf, 0, $nc(cbuf)->length);
}

void XMLWriter::write($chars* cbuf, int32_t off, int32_t len) {
	ensureOpen();
	if (len > this->size) {
		writeBufferedData();
		$nc(this->writer)->write(cbuf, off, len);
	} else {
		$nc(this->buffer)->append(cbuf, off, len);
		conditionalWrite();
	}
}

void XMLWriter::write($String* str, int32_t off, int32_t len) {
	write($($nc(str)->toCharArray()), off, len);
}

void XMLWriter::write($String* str) {
	if ($nc(str)->length() > this->size) {
		writeBufferedData();
		$nc(this->writer)->write(str);
	} else {
		$nc(this->buffer)->append(str);
		conditionalWrite();
	}
}

void XMLWriter::close() {
	if (this->writer == nullptr) {
		return;
	}
	flush();
	$nc(this->writer)->close();
	$set(this, writer, nullptr);
}

void XMLWriter::flush() {
	ensureOpen();
	writeBufferedData();
	$nc(this->writer)->flush();
}

void XMLWriter::reset() {
	$set(this, writer, nullptr);
	$nc(this->buffer)->clear();
	this->size = XMLWriter::THRESHHOLD_LENGTH;
}

void XMLWriter::setWriter($Writer* writer) {
	$set(this, writer, writer);
	$nc(this->buffer)->clear();
	this->size = XMLWriter::THRESHHOLD_LENGTH;
}

void XMLWriter::setWriter($Writer* writer, int32_t size) {
	$set(this, writer, writer);
	this->size = size;
}

$Writer* XMLWriter::getWriter() {
	return this->writer;
}

void XMLWriter::conditionalWrite() {
	if ($nc(this->buffer)->length > this->size) {
		writeBufferedData();
	}
}

void XMLWriter::writeBufferedData() {
	$nc(this->writer)->write($nc(this->buffer)->ch, $nc(this->buffer)->offset, $nc(this->buffer)->length);
	$nc(this->buffer)->clear();
}

void XMLWriter::ensureOpen() {
	if (this->writer == nullptr) {
		$throwNew($IOException, "Stream closed"_s);
	}
}

XMLWriter::XMLWriter() {
}

$Class* XMLWriter::load$($String* name, bool initialize) {
	$loadClass(XMLWriter, name, initialize, &_XMLWriter_ClassInfo_, allocate$XMLWriter);
	return class$;
}

$Class* XMLWriter::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com