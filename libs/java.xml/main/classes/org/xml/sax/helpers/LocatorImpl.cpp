#include <org/xml/sax/helpers/LocatorImpl.h>
#include <org/xml/sax/Locator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locator = ::org::xml::sax::Locator;

namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {

void LocatorImpl::init$() {
}

void LocatorImpl::init$($Locator* locator) {
	$useLocalObjectStack();
	setPublicId($($nc(locator)->getPublicId()));
	setSystemId($(locator->getSystemId()));
	setLineNumber(locator->getLineNumber());
	setColumnNumber(locator->getColumnNumber());
}

$String* LocatorImpl::getPublicId() {
	return this->publicId;
}

$String* LocatorImpl::getSystemId() {
	return this->systemId;
}

int32_t LocatorImpl::getLineNumber() {
	return this->lineNumber;
}

int32_t LocatorImpl::getColumnNumber() {
	return this->columnNumber;
}

void LocatorImpl::setPublicId($String* publicId) {
	$set(this, publicId, publicId);
}

void LocatorImpl::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

void LocatorImpl::setLineNumber(int32_t lineNumber) {
	this->lineNumber = lineNumber;
}

void LocatorImpl::setColumnNumber(int32_t columnNumber) {
	this->columnNumber = columnNumber;
}

LocatorImpl::LocatorImpl() {
}

$Class* LocatorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"publicId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LocatorImpl, publicId)},
		{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LocatorImpl, systemId)},
		{"lineNumber", "I", nullptr, $PRIVATE, $field(LocatorImpl, lineNumber)},
		{"columnNumber", "I", nullptr, $PRIVATE, $field(LocatorImpl, columnNumber)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocatorImpl, init$, void)},
		{"<init>", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $method(LocatorImpl, init$, void, $Locator*)},
		{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(LocatorImpl, getColumnNumber, int32_t)},
		{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(LocatorImpl, getLineNumber, int32_t)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorImpl, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorImpl, getSystemId, $String*)},
		{"setColumnNumber", "(I)V", nullptr, $PUBLIC, $virtualMethod(LocatorImpl, setColumnNumber, void, int32_t)},
		{"setLineNumber", "(I)V", nullptr, $PUBLIC, $virtualMethod(LocatorImpl, setLineNumber, void, int32_t)},
		{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LocatorImpl, setPublicId, void, $String*)},
		{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(LocatorImpl, setSystemId, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.xml.sax.helpers.LocatorImpl",
		"java.lang.Object",
		"org.xml.sax.Locator",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LocatorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocatorImpl);
	});
	return class$;
}

$Class* LocatorImpl::class$ = nullptr;

			} // helpers
		} // sax
	} // xml
} // org