#include <com/sun/xml/internal/stream/writers/UTF8OutputStreamWriter.h>

#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _UTF8OutputStreamWriter_FieldInfo_[] = {
	{"out", "Ljava/io/OutputStream;", nullptr, 0, $field(UTF8OutputStreamWriter, out)},
	{"lastUTF16CodePoint", "I", nullptr, 0, $field(UTF8OutputStreamWriter, lastUTF16CodePoint)},
	{}
};

$MethodInfo _UTF8OutputStreamWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(UTF8OutputStreamWriter, init$, void, $OutputStream*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(UTF8OutputStreamWriter, close, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(UTF8OutputStreamWriter, flush, void), "java.io.IOException"},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(UTF8OutputStreamWriter, getEncoding, $String*)},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(UTF8OutputStreamWriter, write, void, int32_t), "java.io.IOException"},
	{"write", "([C)V", nullptr, $PUBLIC, $virtualMethod(UTF8OutputStreamWriter, write, void, $chars*), "java.io.IOException"},
	{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(UTF8OutputStreamWriter, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(UTF8OutputStreamWriter, write, void, $String*), "java.io.IOException"},
	{"write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $virtualMethod(UTF8OutputStreamWriter, write, void, $String*, int32_t, int32_t), "java.io.IOException"},
	{}
};

$ClassInfo _UTF8OutputStreamWriter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.xml.internal.stream.writers.UTF8OutputStreamWriter",
	"java.io.Writer",
	nullptr,
	_UTF8OutputStreamWriter_FieldInfo_,
	_UTF8OutputStreamWriter_MethodInfo_
};

$Object* allocate$UTF8OutputStreamWriter($Class* clazz) {
	return $of($alloc(UTF8OutputStreamWriter));
}

void UTF8OutputStreamWriter::init$($OutputStream* out) {
	$Writer::init$();
	this->lastUTF16CodePoint = 0;
	$set(this, out, out);
}

$String* UTF8OutputStreamWriter::getEncoding() {
	return "UTF-8"_s;
}

void UTF8OutputStreamWriter::write(int32_t c) {
	$useLocalCurrentObjectStackCache();
	if (this->lastUTF16CodePoint != 0) {
		int32_t uc = ((((int32_t)(this->lastUTF16CodePoint & (uint32_t)1023)) << 10) | ((int32_t)(c & (uint32_t)1023))) + 0x00010000;
		if (uc < 0 || uc >= 0x00200000) {
			$throwNew($IOException, $$str({"Atttempting to write invalid Unicode code point \'"_s, $$str(uc), "\'"_s}));
		}
		$nc(this->out)->write(240 | (uc >> 18));
		$nc(this->out)->write(128 | ((int32_t)((uc >> 12) & (uint32_t)63)));
		$nc(this->out)->write(128 | ((int32_t)((uc >> 6) & (uint32_t)63)));
		$nc(this->out)->write(128 | ((int32_t)(uc & (uint32_t)63)));
		this->lastUTF16CodePoint = 0;
		return;
	}
	if (c < 128) {
		$nc(this->out)->write(c);
	} else if (c < 2048) {
		$nc(this->out)->write(192 | (c >> 6));
		$nc(this->out)->write(128 | ((int32_t)(c & (uint32_t)63)));
	} else if (c <= (char16_t)0xFFFF) {
		bool var$0 = !$XMLChar::isHighSurrogate(c);
		if (var$0 && !$XMLChar::isLowSurrogate(c)) {
			$nc(this->out)->write(224 | (c >> 12));
			$nc(this->out)->write(128 | ((int32_t)((c >> 6) & (uint32_t)63)));
			$nc(this->out)->write(128 | ((int32_t)(c & (uint32_t)63)));
		} else {
			this->lastUTF16CodePoint = c;
		}
	}
}

void UTF8OutputStreamWriter::write($chars* cbuf) {
	for (int32_t i = 0; i < $nc(cbuf)->length; ++i) {
		write((int32_t)cbuf->get(i));
	}
}

void UTF8OutputStreamWriter::write($chars* cbuf, int32_t off, int32_t len) {
	for (int32_t i = 0; i < len; ++i) {
		write((int32_t)$nc(cbuf)->get(off + i));
	}
}

void UTF8OutputStreamWriter::write($String* str) {
	int32_t len = $nc(str)->length();
	for (int32_t i = 0; i < len; ++i) {
		write((int32_t)str->charAt(i));
	}
}

void UTF8OutputStreamWriter::write($String* str, int32_t off, int32_t len) {
	for (int32_t i = 0; i < len; ++i) {
		write((int32_t)$nc(str)->charAt(off + i));
	}
}

void UTF8OutputStreamWriter::flush() {
	$nc(this->out)->flush();
}

void UTF8OutputStreamWriter::close() {
	if (this->lastUTF16CodePoint != 0) {
		$throwNew($IllegalStateException, "Attempting to close a UTF8OutputStreamWriter while awaiting for a UTF-16 code unit"_s);
	}
	$nc(this->out)->close();
}

UTF8OutputStreamWriter::UTF8OutputStreamWriter() {
}

$Class* UTF8OutputStreamWriter::load$($String* name, bool initialize) {
	$loadClass(UTF8OutputStreamWriter, name, initialize, &_UTF8OutputStreamWriter_ClassInfo_, allocate$UTF8OutputStreamWriter);
	return class$;
}

$Class* UTF8OutputStreamWriter::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com