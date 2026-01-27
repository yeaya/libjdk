#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector$XPath.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Step.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPathException.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Selector.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef ATTRIBUTE

using $XPath = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath;
using $XPath$Axis = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Axis;
using $XPathException = ::com::sun::org::apache::xerces::internal::impl::xpath::XPathException;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace identity {

$MethodInfo _Selector$XPath_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, $PUBLIC, $method(Selector$XPath, init$, void, $String*, $SymbolTable*, $NamespaceContext*), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
	{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Selector$XPath, normalize, $String*, $String*)},
	{}
};

$InnerClassInfo _Selector$XPath_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$XPath", "com.sun.org.apache.xerces.internal.impl.xs.identity.Selector", "XPath", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Selector$XPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector$XPath",
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath",
	nullptr,
	nullptr,
	_Selector$XPath_MethodInfo_,
	nullptr,
	nullptr,
	_Selector$XPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.identity.Selector"
};

$Object* allocate$Selector$XPath($Class* clazz) {
	return $of($alloc(Selector$XPath));
}

void Selector$XPath::init$($String* xpath, $SymbolTable* symbolTable, $NamespaceContext* context) {
	$useLocalCurrentObjectStackCache();
	$XPath::init$($(normalize(xpath)), symbolTable, context);
	for (int32_t i = 0; i < $nc(this->fLocationPaths)->length; ++i) {
		$var($XPath$Axis, axis, $nc($nc($nc($nc(this->fLocationPaths)->get(i))->steps)->get($nc($nc($nc(this->fLocationPaths)->get(i))->steps)->length - 1))->axis);
		if ($nc(axis)->type == $XPath$Axis::ATTRIBUTE) {
			$throwNew($XPathException, "c-selector-xpath"_s);
		}
	}
}

$String* Selector$XPath::normalize($String* xpath$renamed) {
	$init(Selector$XPath);
	$useLocalCurrentObjectStackCache();
	$var($String, xpath, xpath$renamed);
	$var($StringBuffer, modifiedXPath, $new($StringBuffer, $nc(xpath)->length() + 5));
	int32_t unionIndex = -1;
	do {
		bool var$0 = $nc($($XMLChar::trim(xpath)))->startsWith("/"_s);
		if (!(var$0 || $nc($($XMLChar::trim(xpath)))->startsWith("."_s))) {
			modifiedXPath->append("./"_s);
		}
		unionIndex = $nc(xpath)->indexOf((int32_t)u'|');
		if (unionIndex == -1) {
			modifiedXPath->append(xpath);
			break;
		}
		modifiedXPath->append($(xpath->substring(0, unionIndex + 1)));
		$assign(xpath, xpath->substring(unionIndex + 1, xpath->length()));
	} while (true);
	return modifiedXPath->toString();
}

Selector$XPath::Selector$XPath() {
}

$Class* Selector$XPath::load$($String* name, bool initialize) {
	$loadClass(Selector$XPath, name, initialize, &_Selector$XPath_ClassInfo_, allocate$Selector$XPath);
	return class$;
}

$Class* Selector$XPath::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com