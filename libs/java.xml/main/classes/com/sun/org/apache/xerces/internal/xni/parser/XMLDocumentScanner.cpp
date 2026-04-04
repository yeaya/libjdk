#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentScanner.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <jcpp.h>

using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {

$Class* XMLDocumentScanner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"next", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDocumentScanner, next, int32_t), "com.sun.org.apache.xerces.internal.xni.XNIException,java.io.IOException"},
		{"scanDocument", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDocumentScanner, scanDocument, bool, bool), "java.io.IOException,com.sun.org.apache.xerces.internal.xni.XNIException"},
		{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDocumentScanner, setInputSource, void, $XMLInputSource*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentScanner",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentSource",
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLDocumentScanner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLDocumentScanner);
	});
	return class$;
}

$Class* XMLDocumentScanner::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com