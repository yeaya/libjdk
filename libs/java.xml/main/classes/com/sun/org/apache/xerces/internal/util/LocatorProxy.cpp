#include <com/sun/org/apache/xerces/internal/util/LocatorProxy.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <jcpp.h>

using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
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

$FieldInfo _LocatorProxy_FieldInfo_[] = {
	{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PRIVATE | $FINAL, $field(LocatorProxy, fLocator)},
	{}
};

$MethodInfo _LocatorProxy_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;)V", nullptr, $PUBLIC, $method(LocatorProxy, init$, void, $XMLLocator*)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(LocatorProxy, getColumnNumber, int32_t)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorProxy, getEncoding, $String*)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(LocatorProxy, getLineNumber, int32_t)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorProxy, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorProxy, getSystemId, $String*)},
	{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocatorProxy, getXMLVersion, $String*)},
	{}
};

$ClassInfo _LocatorProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.LocatorProxy",
	"java.lang.Object",
	"org.xml.sax.ext.Locator2",
	_LocatorProxy_FieldInfo_,
	_LocatorProxy_MethodInfo_
};

$Object* allocate$LocatorProxy($Class* clazz) {
	return $of($alloc(LocatorProxy));
}

void LocatorProxy::init$($XMLLocator* locator) {
	$set(this, fLocator, locator);
}

$String* LocatorProxy::getPublicId() {
	return $nc(this->fLocator)->getPublicId();
}

$String* LocatorProxy::getSystemId() {
	return $nc(this->fLocator)->getExpandedSystemId();
}

int32_t LocatorProxy::getLineNumber() {
	return $nc(this->fLocator)->getLineNumber();
}

int32_t LocatorProxy::getColumnNumber() {
	return $nc(this->fLocator)->getColumnNumber();
}

$String* LocatorProxy::getXMLVersion() {
	return $nc(this->fLocator)->getXMLVersion();
}

$String* LocatorProxy::getEncoding() {
	return $nc(this->fLocator)->getEncoding();
}

LocatorProxy::LocatorProxy() {
}

$Class* LocatorProxy::load$($String* name, bool initialize) {
	$loadClass(LocatorProxy, name, initialize, &_LocatorProxy_ClassInfo_, allocate$LocatorProxy);
	return class$;
}

$Class* LocatorProxy::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com