#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler$SAX2XNIUtil.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/XSDHandler.h>
#include <com/sun/org/apache/xerces/internal/util/ErrorHandlerWrapper.h>
#include <com/sun/org/apache/xerces/internal/xni/XNIException.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLParseException.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

using $ErrorHandlerWrapper = ::com::sun::org::apache::xerces::internal::util::ErrorHandlerWrapper;
using $XNIException = ::com::sun::org::apache::xerces::internal::xni::XNIException;
using $XMLParseException = ::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SAXException = ::org::xml::sax::SAXException;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

void XSDHandler$SAX2XNIUtil::init$() {
	$ErrorHandlerWrapper::init$();
}

$XMLParseException* XSDHandler$SAX2XNIUtil::createXMLParseException0($SAXParseException* exception) {
	$init(XSDHandler$SAX2XNIUtil);
	return createXMLParseException(exception);
}

$XNIException* XSDHandler$SAX2XNIUtil::createXNIException0($SAXException* exception) {
	$init(XSDHandler$SAX2XNIUtil);
	return createXNIException(exception);
}

XSDHandler$SAX2XNIUtil::XSDHandler$SAX2XNIUtil() {
}

$Class* XSDHandler$SAX2XNIUtil::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XSDHandler$SAX2XNIUtil, init$, void)},
		{"createXMLParseException0", "(Lorg/xml/sax/SAXParseException;)Lcom/sun/org/apache/xerces/internal/xni/parser/XMLParseException;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSDHandler$SAX2XNIUtil, createXMLParseException0, $XMLParseException*, $SAXParseException*)},
		{"createXNIException0", "(Lorg/xml/sax/SAXException;)Lcom/sun/org/apache/xerces/internal/xni/XNIException;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSDHandler$SAX2XNIUtil, createXNIException0, $XNIException*, $SAXException*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$SAX2XNIUtil", "com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler", "SAX2XNIUtil", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler$SAX2XNIUtil",
		"com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDHandler"
	};
	$loadClass(XSDHandler$SAX2XNIUtil, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XSDHandler$SAX2XNIUtil);
	});
	return class$;
}

$Class* XSDHandler$SAX2XNIUtil::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com