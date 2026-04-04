#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field$XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Step.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPathException.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/identity/Field.h>
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

void Field$XPath::init$($String* xpath, $SymbolTable* symbolTable, $NamespaceContext* context) {
	$useLocalObjectStack();
	$XPath::init$($(fixupXPath(xpath)), symbolTable, context);
	for (int32_t i = 0; i < $nc(this->fLocationPaths)->length; ++i) {
		for (int32_t j = 0; j < $nc($nc(this->fLocationPaths->get(i))->steps)->length; ++j) {
			$var($XPath$Axis, axis, $nc($nc(this->fLocationPaths->get(i))->steps->get(j))->axis);
			if ($nc(axis)->type == $XPath$Axis::ATTRIBUTE && (j < $nc(this->fLocationPaths->get(i))->steps->length - 1)) {
				$throwNew($XPathException, "c-fields-xpaths"_s);
			}
		}
	}
}

$String* Field$XPath::fixupXPath($String* xpath) {
	$init(Field$XPath);
	int32_t end = $nc(xpath)->length();
	int32_t offset = 0;
	bool whitespace = true;
	char16_t c = 0;
	for (; offset < end; ++offset) {
		c = xpath->charAt(offset);
		if (whitespace) {
			if (!$XMLChar::isSpace(c)) {
				if (c == u'.' || c == u'/') {
					whitespace = false;
				} else if (c != u'|') {
					return fixupXPath2(xpath, offset, end);
				}
			}
		} else if (c == u'|') {
			whitespace = true;
		}
	}
	return xpath;
}

$String* Field$XPath::fixupXPath2($String* xpath, int32_t offset, int32_t end) {
	$init(Field$XPath);
	$var($StringBuffer, buffer, $new($StringBuffer, end + 2));
	for (int32_t i = 0; i < offset; ++i) {
		buffer->append($nc(xpath)->charAt(i));
	}
	buffer->append("./"_s);
	bool whitespace = false;
	char16_t c = 0;
	for (; offset < end; ++offset) {
		c = $nc(xpath)->charAt(offset);
		if (whitespace) {
			if (!$XMLChar::isSpace(c)) {
				if (c == u'.' || c == u'/') {
					whitespace = false;
				} else if (c != u'|') {
					buffer->append("./"_s);
					whitespace = false;
				}
			}
		} else if (c == u'|') {
			whitespace = true;
		}
		buffer->append(c);
	}
	return buffer->toString();
}

Field$XPath::Field$XPath() {
}

$Class* Field$XPath::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/util/SymbolTable;Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, $PUBLIC, $method(Field$XPath, init$, void, $String*, $SymbolTable*, $NamespaceContext*), "com.sun.org.apache.xerces.internal.impl.xpath.XPathException"},
		{"fixupXPath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Field$XPath, fixupXPath, $String*, $String*)},
		{"fixupXPath2", "(Ljava/lang/String;II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Field$XPath, fixupXPath2, $String*, $String*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.identity.Field$XPath", "com.sun.org.apache.xerces.internal.impl.xs.identity.Field", "XPath", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.identity.Field$XPath",
		"com.sun.org.apache.xerces.internal.impl.xpath.XPath",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xs.identity.Field"
	};
	$loadClass(Field$XPath, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Field$XPath);
	});
	return class$;
}

$Class* Field$XPath::class$ = nullptr;

								} // identity
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com