#include <com/sun/org/apache/xerces/internal/dom/DOMErrorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMLocatorImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <org/w3c/dom/DOMError.h>
#include <org/w3c/dom/DOMLocator.h>
#include <jcpp.h>

#undef SEVERITY_WARNING

using $DOMLocatorImpl = ::com::sun::org::apache::xerces::internal::dom::DOMLocatorImpl;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMError = ::org::w3c::dom::DOMError;
using $DOMLocator = ::org::w3c::dom::DOMLocator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

void DOMErrorImpl::init$() {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fMessage, nullptr);
	$set(this, fLocator, $new($DOMLocatorImpl));
	$set(this, fException, nullptr);
}

void DOMErrorImpl::init$(int16_t severity, $XMLParseException* exception) {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fMessage, nullptr);
	$set(this, fLocator, $new($DOMLocatorImpl));
	$set(this, fException, nullptr);
	this->fSeverity = severity;
	$set(this, fException, exception);
	$set(this, fLocator, createDOMLocator(exception));
}

int16_t DOMErrorImpl::getSeverity() {
	return this->fSeverity;
}

$String* DOMErrorImpl::getMessage() {
	return this->fMessage;
}

$DOMLocator* DOMErrorImpl::getLocation() {
	return this->fLocator;
}

$DOMLocatorImpl* DOMErrorImpl::createDOMLocator($XMLParseException* exception) {
	int32_t var$0 = $nc(exception)->getLineNumber();
	int32_t var$1 = exception->getColumnNumber();
	int32_t var$2 = exception->getCharacterOffset();
	return $new($DOMLocatorImpl, var$0, var$1, var$2, $(exception->getExpandedSystemId()));
}

$Object* DOMErrorImpl::getRelatedException() {
	return this->fException;
}

void DOMErrorImpl::reset() {
	this->fSeverity = $DOMError::SEVERITY_WARNING;
	$set(this, fException, nullptr);
}

$String* DOMErrorImpl::getType() {
	return this->fType;
}

$Object* DOMErrorImpl::getRelatedData() {
	return this->fRelatedData;
}

DOMErrorImpl::DOMErrorImpl() {
}

$Class* DOMErrorImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fSeverity", "S", nullptr, $PUBLIC, $field(DOMErrorImpl, fSeverity)},
		{"fMessage", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DOMErrorImpl, fMessage)},
		{"fLocator", "Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;", nullptr, $PUBLIC, $field(DOMErrorImpl, fLocator)},
		{"fException", "Ljava/lang/Exception;", nullptr, $PUBLIC, $field(DOMErrorImpl, fException)},
		{"fType", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DOMErrorImpl, fType)},
		{"fRelatedData", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DOMErrorImpl, fRelatedData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DOMErrorImpl, init$, void)},
		{"<init>", "(SLcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)V", nullptr, $PUBLIC, $method(DOMErrorImpl, init$, void, int16_t, $XMLParseException*)},
		{"createDOMLocator", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;)Lcom/sun/org/apache/xerces/internal/dom/DOMLocatorImpl;", nullptr, $PRIVATE, $method(DOMErrorImpl, createDOMLocator, $DOMLocatorImpl*, $XMLParseException*)},
		{"getLocation", "()Lorg/w3c/dom/DOMLocator;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getLocation, $DOMLocator*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getMessage, $String*)},
		{"getRelatedData", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getRelatedData, $Object*)},
		{"getRelatedException", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getRelatedException, $Object*)},
		{"getSeverity", "()S", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getSeverity, int16_t)},
		{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, getType, $String*)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(DOMErrorImpl, reset, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.DOMErrorImpl",
		"java.lang.Object",
		"org.w3c.dom.DOMError",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DOMErrorImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMErrorImpl);
	});
	return class$;
}

$Class* DOMErrorImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com