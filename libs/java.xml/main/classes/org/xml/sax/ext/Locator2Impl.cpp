#include <org/xml/sax/ext/Locator2Impl.h>
#include <org/xml/sax/Locator.h>
#include <org/xml/sax/ext/Locator2.h>
#include <org/xml/sax/helpers/LocatorImpl.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locator = ::org::xml::sax::Locator;
using $Locator2 = ::org::xml::sax::ext::Locator2;
using $LocatorImpl = ::org::xml::sax::helpers::LocatorImpl;

namespace org {
	namespace xml {
		namespace sax {
			namespace ext {

$String* Locator2Impl::getPublicId() {
	 return this->$LocatorImpl::getPublicId();
}

$String* Locator2Impl::getSystemId() {
	 return this->$LocatorImpl::getSystemId();
}

int32_t Locator2Impl::getLineNumber() {
	 return this->$LocatorImpl::getLineNumber();
}

int32_t Locator2Impl::getColumnNumber() {
	 return this->$LocatorImpl::getColumnNumber();
}

int32_t Locator2Impl::hashCode() {
	 return this->$LocatorImpl::hashCode();
}

bool Locator2Impl::equals(Object$* arg0) {
	 return this->$LocatorImpl::equals(arg0);
}

$Object* Locator2Impl::clone() {
	 return this->$LocatorImpl::clone();
}

$String* Locator2Impl::toString() {
	 return this->$LocatorImpl::toString();
}

void Locator2Impl::finalize() {
	this->$LocatorImpl::finalize();
}

void Locator2Impl::init$() {
	$LocatorImpl::init$();
}

void Locator2Impl::init$($Locator* locator) {
	$LocatorImpl::init$(locator);
	if ($instanceOf($Locator2, locator)) {
		$var($Locator2, l2, $cast($Locator2, locator));
		$set(this, version, l2->getXMLVersion());
		$set(this, encoding, l2->getEncoding());
	}
}

$String* Locator2Impl::getXMLVersion() {
	return this->version;
}

$String* Locator2Impl::getEncoding() {
	return this->encoding;
}

void Locator2Impl::setXMLVersion($String* version) {
	$set(this, version, version);
}

void Locator2Impl::setEncoding($String* encoding) {
	$set(this, encoding, encoding);
}

Locator2Impl::Locator2Impl() {
}

$Class* Locator2Impl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"encoding", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Locator2Impl, encoding)},
		{"version", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Locator2Impl, version)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getColumnNumber", "()I", nullptr, $PUBLIC},
		{"*getLineNumber", "()I", nullptr, $PUBLIC},
		{"*getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Locator2Impl, init$, void)},
		{"<init>", "(Lorg/xml/sax/Locator;)V", nullptr, $PUBLIC, $method(Locator2Impl, init$, void, $Locator*)},
		{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Locator2Impl, getEncoding, $String*)},
		{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Locator2Impl, getXMLVersion, $String*)},
		{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Locator2Impl, setEncoding, void, $String*)},
		{"setXMLVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Locator2Impl, setXMLVersion, void, $String*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.xml.sax.ext.Locator2Impl",
		"org.xml.sax.helpers.LocatorImpl",
		"org.xml.sax.ext.Locator2",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Locator2Impl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Locator2Impl));
	});
	return class$;
}

$Class* Locator2Impl::class$ = nullptr;

			} // ext
		} // sax
	} // xml
} // org