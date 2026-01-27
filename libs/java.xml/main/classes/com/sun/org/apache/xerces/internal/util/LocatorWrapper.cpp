#include <com/sun/org/apache/xerces/internal/util/LocatorWrapper.h>

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
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _LocatorWrapper_FieldInfo_[] = {
	{"locator", "Lorg/xml/sax/Locator;", nullptr, $PRIVATE | $FINAL, $field(LocatorWrapper, locator)},
	{}
};

$MethodInfo _LocatorWrapper_MethodInfo_[] = {
	{"<init>", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $method(LocatorWrapper, init$, void, $Locator*)},
	{"getBaseSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorWrapper, getBaseSystemId, $String*)},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC, $virtualMethod(LocatorWrapper, getCharacterOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(LocatorWrapper, getColumnNumber, int32_t)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorWrapper, getEncoding, $String*)},
	{"getExpandedSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorWrapper, getExpandedSystemId, $String*)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(LocatorWrapper, getLineNumber, int32_t)},
	{"getLiteralSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorWrapper, getLiteralSystemId, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorWrapper, getPublicId, $String*)},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorWrapper, getXMLVersion, $String*)},
	{}
};

$ClassInfo _LocatorWrapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.LocatorWrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.XMLLocator",
	_LocatorWrapper_FieldInfo_,
	_LocatorWrapper_MethodInfo_
};

$Object* allocate$LocatorWrapper($Class* clazz) {
	return $of($alloc(LocatorWrapper));
}

void LocatorWrapper::init$($Locator* _loc) {
	$set(this, locator, _loc);
}

int32_t LocatorWrapper::getColumnNumber() {
	return $nc(this->locator)->getColumnNumber();
}

int32_t LocatorWrapper::getLineNumber() {
	return $nc(this->locator)->getLineNumber();
}

$String* LocatorWrapper::getBaseSystemId() {
	return nullptr;
}

$String* LocatorWrapper::getExpandedSystemId() {
	return $nc(this->locator)->getSystemId();
}

$String* LocatorWrapper::getLiteralSystemId() {
	return $nc(this->locator)->getSystemId();
}

$String* LocatorWrapper::getPublicId() {
	return $nc(this->locator)->getPublicId();
}

$String* LocatorWrapper::getEncoding() {
	return nullptr;
}

int32_t LocatorWrapper::getCharacterOffset() {
	return -1;
}

$String* LocatorWrapper::getXMLVersion() {
	return nullptr;
}

LocatorWrapper::LocatorWrapper() {
}

$Class* LocatorWrapper::load$($String* name, bool initialize) {
	$loadClass(LocatorWrapper, name, initialize, &_LocatorWrapper_ClassInfo_, allocate$LocatorWrapper);
	return class$;
}

$Class* LocatorWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com