#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

$Class* XMLDTDDescription::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getRootName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDDescription, getRootName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.xni.grammars.XMLDTDDescription",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarDescription",
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLDTDDescription, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLDTDDescription);
	});
	return class$;
}

$Class* XMLDTDDescription::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com