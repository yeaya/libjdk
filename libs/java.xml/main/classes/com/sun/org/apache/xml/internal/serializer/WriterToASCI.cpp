#include <com/sun/org/apache/xml/internal/serializer/WriterToASCI.h>

#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <jcpp.h>

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

$FieldInfo _WriterToASCI_FieldInfo_[] = {
	{"m_os", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $FINAL, $field(WriterToASCI, m_os)},
	{}
};

$MethodInfo _WriterToASCI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(WriterToASCI, init$, void, $OutputStream*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(WriterToASCI, close, void), "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(WriterToASCI, flush, void), "java.io.IOException"},
	{"getOutputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC, $virtualMethod(WriterToASCI, getOutputStream, $OutputStream*)},
	{"getWriter", "()Ljava/io/Writer;", nullptr, $PUBLIC, $virtualMethod(WriterToASCI, getWriter, $Writer*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*write", "([C)V", nullptr, $PUBLIC},
	{"*write", "(Ljava/lang/String;II)V", nullptr, $PUBLIC},
	{"write", "([CII)V", nullptr, $PUBLIC, $virtualMethod(WriterToASCI, write, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(WriterToASCI, write, void, int32_t), "java.io.IOException"},
	{"write", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(WriterToASCI, write, void, $String*), "java.io.IOException"},
	{}
};

$ClassInfo _WriterToASCI_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.WriterToASCI",
	"java.io.Writer",
	"com.sun.org.apache.xml.internal.serializer.WriterChain",
	_WriterToASCI_FieldInfo_,
	_WriterToASCI_MethodInfo_
};

$Object* allocate$WriterToASCI($Class* clazz) {
	return $of($alloc(WriterToASCI));
}

void WriterToASCI::write($chars* arg0) {
	this->$Writer::write(arg0);
}

void WriterToASCI::write($String* arg0, int32_t arg1, int32_t arg2) {
	this->$Writer::write(arg0, arg1, arg2);
}

int32_t WriterToASCI::hashCode() {
	 return this->$Writer::hashCode();
}

bool WriterToASCI::equals(Object$* arg0) {
	 return this->$Writer::equals(arg0);
}

$Object* WriterToASCI::clone() {
	 return this->$Writer::clone();
}

$String* WriterToASCI::toString() {
	 return this->$Writer::toString();
}

void WriterToASCI::finalize() {
	this->$Writer::finalize();
}

void WriterToASCI::init$($OutputStream* os) {
	$Writer::init$();
	$set(this, m_os, os);
}

void WriterToASCI::write($chars* chars, int32_t start, int32_t length) {
	int32_t n = length + start;
	for (int32_t i = start; i < n; ++i) {
		$nc(this->m_os)->write((int32_t)$nc(chars)->get(i));
	}
}

void WriterToASCI::write(int32_t c) {
	$nc(this->m_os)->write(c);
}

void WriterToASCI::write($String* s) {
	int32_t n = $nc(s)->length();
	for (int32_t i = 0; i < n; ++i) {
		$nc(this->m_os)->write((int32_t)s->charAt(i));
	}
}

void WriterToASCI::flush() {
	$nc(this->m_os)->flush();
}

void WriterToASCI::close() {
	$nc(this->m_os)->close();
}

$OutputStream* WriterToASCI::getOutputStream() {
	return this->m_os;
}

$Writer* WriterToASCI::getWriter() {
	return nullptr;
}

WriterToASCI::WriterToASCI() {
}

$Class* WriterToASCI::load$($String* name, bool initialize) {
	$loadClass(WriterToASCI, name, initialize, &_WriterToASCI_ClassInfo_, allocate$WriterToASCI);
	return class$;
}

$Class* WriterToASCI::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com