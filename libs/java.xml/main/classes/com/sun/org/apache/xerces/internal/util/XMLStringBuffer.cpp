#include <com/sun/org/apache/xerces/internal/util/XMLStringBuffer.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <jcpp.h>

#undef DEFAULT_SIZE

using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _XMLStringBuffer_FieldInfo_[] = {
	{"DEFAULT_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLStringBuffer, DEFAULT_SIZE)},
	{}
};

$MethodInfo _XMLStringBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLStringBuffer, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(XMLStringBuffer, init$, void, int32_t)},
	{"<init>", "(C)V", nullptr, $PUBLIC, $method(XMLStringBuffer, init$, void, char16_t)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLStringBuffer, init$, void, $String*)},
	{"<init>", "([CII)V", nullptr, $PUBLIC, $method(XMLStringBuffer, init$, void, $chars*, int32_t, int32_t)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PUBLIC, $method(XMLStringBuffer, init$, void, $XMLString*)},
	{"append", "(C)V", nullptr, $PUBLIC, $virtualMethod(XMLStringBuffer, append, void, char16_t)},
	{"append", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLStringBuffer, append, void, $String*)},
	{"append", "([CII)V", nullptr, $PUBLIC, $virtualMethod(XMLStringBuffer, append, void, $chars*, int32_t, int32_t)},
	{"append", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;)V", nullptr, $PUBLIC, $virtualMethod(XMLStringBuffer, append, void, $XMLString*)},
	{"clear", "()V", nullptr, $PUBLIC, $virtualMethod(XMLStringBuffer, clear, void)},
	{}
};

$ClassInfo _XMLStringBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.XMLStringBuffer",
	"com.sun.org.apache.xerces.internal.xni.XMLString",
	nullptr,
	_XMLStringBuffer_FieldInfo_,
	_XMLStringBuffer_MethodInfo_
};

$Object* allocate$XMLStringBuffer($Class* clazz) {
	return $of($alloc(XMLStringBuffer));
}

void XMLStringBuffer::init$() {
	XMLStringBuffer::init$(XMLStringBuffer::DEFAULT_SIZE);
}

void XMLStringBuffer::init$(int32_t size) {
	$XMLString::init$();
	$set(this, ch, $new($chars, size));
}

void XMLStringBuffer::init$(char16_t c) {
	XMLStringBuffer::init$(1);
	append(c);
}

void XMLStringBuffer::init$($String* s) {
	XMLStringBuffer::init$($nc(s)->length());
	append(s);
}

void XMLStringBuffer::init$($chars* ch, int32_t offset, int32_t length) {
	XMLStringBuffer::init$(length);
	append(ch, offset, length);
}

void XMLStringBuffer::init$($XMLString* s) {
	XMLStringBuffer::init$($nc(s)->length);
	append(s);
}

void XMLStringBuffer::clear() {
	this->offset = 0;
	this->length = 0;
}

void XMLStringBuffer::append(char16_t c) {
	if (this->length + 1 > $nc(this->ch)->length) {
		int32_t newLength = $nc(this->ch)->length * 2;
		if (newLength < $nc(this->ch)->length + XMLStringBuffer::DEFAULT_SIZE) {
			newLength = $nc(this->ch)->length + XMLStringBuffer::DEFAULT_SIZE;
		}
		$var($chars, tmp, $new($chars, newLength));
		$System::arraycopy(this->ch, 0, tmp, 0, this->length);
		$set(this, ch, tmp);
	}
	$nc(this->ch)->set(this->length, c);
	++this->length;
}

void XMLStringBuffer::append($String* s) {
	int32_t length = $nc(s)->length();
	if (this->length + length > $nc(this->ch)->length) {
		int32_t newLength = $nc(this->ch)->length * 2;
		if (newLength < $nc(this->ch)->length + length + XMLStringBuffer::DEFAULT_SIZE) {
			newLength = $nc(this->ch)->length + length + XMLStringBuffer::DEFAULT_SIZE;
		}
		$var($chars, newch, $new($chars, newLength));
		$System::arraycopy(this->ch, 0, newch, 0, this->length);
		$set(this, ch, newch);
	}
	s->getChars(0, length, this->ch, this->length);
	this->length += length;
}

void XMLStringBuffer::append($chars* ch, int32_t offset, int32_t length) {
	if (this->length + length > $nc(this->ch)->length) {
		int32_t newLength = $nc(this->ch)->length * 2;
		if (newLength < $nc(this->ch)->length + length + XMLStringBuffer::DEFAULT_SIZE) {
			newLength = $nc(this->ch)->length + length + XMLStringBuffer::DEFAULT_SIZE;
		}
		$var($chars, newch, $new($chars, newLength));
		$System::arraycopy(this->ch, 0, newch, 0, this->length);
		$set(this, ch, newch);
	}
	if (ch != nullptr && length > 0) {
		$System::arraycopy(ch, offset, this->ch, this->length, length);
		this->length += length;
	}
}

void XMLStringBuffer::append($XMLString* s) {
	append($nc(s)->ch, s->offset, s->length);
}

XMLStringBuffer::XMLStringBuffer() {
}

$Class* XMLStringBuffer::load$($String* name, bool initialize) {
	$loadClass(XMLStringBuffer, name, initialize, &_XMLStringBuffer_ClassInfo_, allocate$XMLStringBuffer);
	return class$;
}

$Class* XMLStringBuffer::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com