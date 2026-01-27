#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMErrorImpl.h>

#include <com/sun/org/apache/xml/internal/serializer/dom3/DOMLocatorImpl.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMLocator.h>
#include <jcpp.h>

#undef SEVERITY_WARNING

using $DOMLocatorImpl = ::com::sun::org::apache::xml::internal::serializer::dom3::DOMLocatorImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMLocator = ::org::w3c::dom::DOMLocator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace dom3 {

$FieldInfo _DOMErrorImpl_FieldInfo_[] = {
	{"fSeverity", "S", nullptr, $PRIVATE, $field(DOMErrorImpl, fSeverity)},
	{"fMessage", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMErrorImpl, fMessage)},
	{"fType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMErrorImpl, fType)},
	{"fException", "Ljava/lang/Exception;", nullptr, $PRIVATE, $field(DOMErrorImpl, fException)},
	{"fRelatedData", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(DOMErrorImpl, fRelatedData)},
	{"fLocation", "Lcom/sun/org/apache/xml/internal/serializer/dom3/DOMLocatorImpl;", nullptr, $PRIVATE, $field(DOMErrorImpl, fLocation)},
	{}
};

$MethodInfo _DOMErrorImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DOMErrorImpl, init$, void)},
	{"<init>", "(SLjava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(DOMErrorImpl, init$, void, int16_t, $String*, $String*)},
	{"<init>", "(SLjava/lang/String;Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, 0, $method(DOMErrorImpl, init$, void, int16_t, $String*, $String*, $Exception*)},
	{"<init>", "(SLjava/lang/String;Ljava/lang/String;Ljava/lang/Exception;Ljava/lang/Object;Lcom/sun/org/apache/xml/internal/serializer/dom3/DOMLocatorImpl;)V", nullptr, 0, $method(DOMErrorImpl, init$, void, int16_t, $String*, $String*, $Exception*, Object$*, $DOMLocatorImpl*)},
	{"getLocation", "()Lorg/w3c/dom/DOMLocator;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getLocation, $DOMLocator*)},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getMessage, $String*)},
	{"getRelatedData", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getRelatedData, $Object*)},
	{"getRelatedException", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getRelatedException, $Object*)},
	{"getSeverity", "()S", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getSeverity, int16_t)},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getType, $String*)},
	{"reset", "()V", nullptr, $PUBLIC, $method(DOMErrorImpl, reset, void)},
	{}
};

$ClassInfo _DOMErrorImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.dom3.DOMErrorImpl",
	"java.lang.Object",
	"org.w3c.dom.DOMError",
	_DOMErrorImpl_FieldInfo_,
	_DOMErrorImpl_MethodInfo_
};

$Object* allocate$DOMErrorImpl($Class* clazz) {
	return $of($alloc(DOMErrorImpl));
}

void DOMErrorImpl::init$() {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fMessage, nullptr);
	$set(this, fException, nullptr);
	$set(this, fLocation, $new($DOMLocatorImpl));
}

void DOMErrorImpl::init$(int16_t severity, $String* message, $String* type) {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fMessage, nullptr);
	$set(this, fException, nullptr);
	$set(this, fLocation, $new($DOMLocatorImpl));
	this->fSeverity = severity;
	$set(this, fMessage, message);
	$set(this, fType, type);
}

void DOMErrorImpl::init$(int16_t severity, $String* message, $String* type, $Exception* exception) {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fMessage, nullptr);
	$set(this, fException, nullptr);
	$set(this, fLocation, $new($DOMLocatorImpl));
	this->fSeverity = severity;
	$set(this, fMessage, message);
	$set(this, fType, type);
	$set(this, fException, exception);
}

void DOMErrorImpl::init$(int16_t severity, $String* message, $String* type, $Exception* exception, Object$* relatedData, $DOMLocatorImpl* location) {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fMessage, nullptr);
	$set(this, fException, nullptr);
	$set(this, fLocation, $new($DOMLocatorImpl));
	this->fSeverity = severity;
	$set(this, fMessage, message);
	$set(this, fType, type);
	$set(this, fException, exception);
	$set(this, fRelatedData, relatedData);
	$set(this, fLocation, location);
}

int16_t DOMErrorImpl::getSeverity() {
	return this->fSeverity;
}

$String* DOMErrorImpl::getMessage() {
	return this->fMessage;
}

$DOMLocator* DOMErrorImpl::getLocation() {
	return this->fLocation;
}

$Object* DOMErrorImpl::getRelatedException() {
	return $of(this->fException);
}

$String* DOMErrorImpl::getType() {
	return this->fType;
}

$Object* DOMErrorImpl::getRelatedData() {
	return $of(this->fRelatedData);
}

void DOMErrorImpl::reset() {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fException, nullptr);
	$set(this, fMessage, nullptr);
	$set(this, fType, nullptr);
	$set(this, fRelatedData, nullptr);
	$set(this, fLocation, nullptr);
}

DOMErrorImpl::DOMErrorImpl() {
}

$Class* DOMErrorImpl::load$($String* name, bool initialize) {
	$loadClass(DOMErrorImpl, name, initialize, &_DOMErrorImpl_ClassInfo_, allocate$DOMErrorImpl);
	return class$;
}

$Class* DOMErrorImpl::class$ = nullptr;

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com