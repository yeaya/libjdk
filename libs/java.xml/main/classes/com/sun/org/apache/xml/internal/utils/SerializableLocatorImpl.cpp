#include <com/sun/org/apache/xml/internal/utils/SerializableLocatorImpl.h>

#include <org/xml/sax/Locator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locator = ::org::xml::sax::Locator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

$FieldInfo _SerializableLocatorImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SerializableLocatorImpl, serialVersionUID)},
	{"publicId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SerializableLocatorImpl, publicId)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SerializableLocatorImpl, systemId)},
	{"lineNumber", "I", nullptr, $PRIVATE, $field(SerializableLocatorImpl, lineNumber)},
	{"columnNumber", "I", nullptr, $PRIVATE, $field(SerializableLocatorImpl, columnNumber)},
	{}
};

$MethodInfo _SerializableLocatorImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(SerializableLocatorImpl, init$, void)},
	{"<init>", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $method(SerializableLocatorImpl, init$, void, $Locator*)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(SerializableLocatorImpl, getColumnNumber, int32_t)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(SerializableLocatorImpl, getLineNumber, int32_t)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializableLocatorImpl, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerializableLocatorImpl, getSystemId, $String*)},
	{"setColumnNumber", "(I)V", nullptr, $PUBLIC, $virtualMethod(SerializableLocatorImpl, setColumnNumber, void, int32_t)},
	{"setLineNumber", "(I)V", nullptr, $PUBLIC, $virtualMethod(SerializableLocatorImpl, setLineNumber, void, int32_t)},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializableLocatorImpl, setPublicId, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SerializableLocatorImpl, setSystemId, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SerializableLocatorImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.utils.SerializableLocatorImpl",
	"java.lang.Object",
	"org.xml.sax.Locator,java.io.Serializable",
	_SerializableLocatorImpl_FieldInfo_,
	_SerializableLocatorImpl_MethodInfo_
};

$Object* allocate$SerializableLocatorImpl($Class* clazz) {
	return $of($alloc(SerializableLocatorImpl));
}

int32_t SerializableLocatorImpl::hashCode() {
	 return this->$Locator::hashCode();
}

bool SerializableLocatorImpl::equals(Object$* arg0) {
	 return this->$Locator::equals(arg0);
}

$Object* SerializableLocatorImpl::clone() {
	 return this->$Locator::clone();
}

$String* SerializableLocatorImpl::toString() {
	 return this->$Locator::toString();
}

void SerializableLocatorImpl::finalize() {
	this->$Locator::finalize();
}

void SerializableLocatorImpl::init$() {
}

void SerializableLocatorImpl::init$($Locator* locator) {
	$useLocalCurrentObjectStackCache();
	setPublicId($($nc(locator)->getPublicId()));
	setSystemId($($nc(locator)->getSystemId()));
	setLineNumber($nc(locator)->getLineNumber());
	setColumnNumber($nc(locator)->getColumnNumber());
}

$String* SerializableLocatorImpl::getPublicId() {
	return this->publicId;
}

$String* SerializableLocatorImpl::getSystemId() {
	return this->systemId;
}

int32_t SerializableLocatorImpl::getLineNumber() {
	return this->lineNumber;
}

int32_t SerializableLocatorImpl::getColumnNumber() {
	return this->columnNumber;
}

void SerializableLocatorImpl::setPublicId($String* publicId) {
	$set(this, publicId, publicId);
}

void SerializableLocatorImpl::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

void SerializableLocatorImpl::setLineNumber(int32_t lineNumber) {
	this->lineNumber = lineNumber;
}

void SerializableLocatorImpl::setColumnNumber(int32_t columnNumber) {
	this->columnNumber = columnNumber;
}

SerializableLocatorImpl::SerializableLocatorImpl() {
}

$Class* SerializableLocatorImpl::load$($String* name, bool initialize) {
	$loadClass(SerializableLocatorImpl, name, initialize, &_SerializableLocatorImpl_ClassInfo_, allocate$SerializableLocatorImpl);
	return class$;
}

$Class* SerializableLocatorImpl::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com