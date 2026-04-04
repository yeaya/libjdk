#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser$LocatorProxy.h>
#include <com/sun/org/apache/xerces/internal/parsers/AbstractSAXParser.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <jcpp.h>

using $AbstractSAXParser = ::com::sun::org::apache::xerces::internal::parsers::AbstractSAXParser;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace parsers {

void AbstractSAXParser$LocatorProxy::init$($AbstractSAXParser* this$0, $XMLLocator* locator) {
	$set(this, this$0, this$0);
	$set(this, fLocator, locator);
}

$String* AbstractSAXParser$LocatorProxy::getPublicId() {
	return $nc(this->fLocator)->getPublicId();
}

$String* AbstractSAXParser$LocatorProxy::getSystemId() {
	return $nc(this->fLocator)->getExpandedSystemId();
}

int32_t AbstractSAXParser$LocatorProxy::getLineNumber() {
	return $nc(this->fLocator)->getLineNumber();
}

int32_t AbstractSAXParser$LocatorProxy::getColumnNumber() {
	return $nc(this->fLocator)->getColumnNumber();
}

$String* AbstractSAXParser$LocatorProxy::getXMLVersion() {
	return $nc(this->fLocator)->getXMLVersion();
}

$String* AbstractSAXParser$LocatorProxy::getEncoding() {
	return $nc(this->fLocator)->getEncoding();
}

AbstractSAXParser$LocatorProxy::AbstractSAXParser$LocatorProxy() {
}

$Class* AbstractSAXParser$LocatorProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/parsers/AbstractSAXParser;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractSAXParser$LocatorProxy, this$0)},
		{"fLocator", "Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;", nullptr, $PROTECTED, $field(AbstractSAXParser$LocatorProxy, fLocator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/parsers/AbstractSAXParser;Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;)V", nullptr, $PUBLIC, $method(AbstractSAXParser$LocatorProxy, init$, void, $AbstractSAXParser*, $XMLLocator*)},
		{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$LocatorProxy, getColumnNumber, int32_t)},
		{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$LocatorProxy, getEncoding, $String*)},
		{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$LocatorProxy, getLineNumber, int32_t)},
		{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$LocatorProxy, getPublicId, $String*)},
		{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$LocatorProxy, getSystemId, $String*)},
		{"getXMLVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractSAXParser$LocatorProxy, getXMLVersion, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$LocatorProxy", "com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser", "LocatorProxy", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser$LocatorProxy",
		"java.lang.Object",
		"org.xml.sax.ext.Locator2",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.parsers.AbstractSAXParser"
	};
	$loadClass(AbstractSAXParser$LocatorProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractSAXParser$LocatorProxy);
	});
	return class$;
}

$Class* AbstractSAXParser$LocatorProxy::class$ = nullptr;

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com