#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <jcpp.h>

using $XMLDTDHandler = ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler;
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

$Class* XMLDTDSource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDTDHandler", "()Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDSource, getDTDHandler, $XMLDTDHandler*)},
		{"setDTDHandler", "(Lcom/sun/org/apache/xerces/internal/xni/XMLDTDHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDSource, setDTDHandler, void, $XMLDTDHandler*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLDTDSource",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLDTDSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLDTDSource);
	});
	return class$;
}

$Class* XMLDTDSource::class$ = nullptr;

							} // parser
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com