#include <com/sun/org/apache/xerces/internal/impl/dtd/XMLDTDValidatorFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

$Class* XMLDTDValidatorFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"hasGrammar", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDValidatorFilter, hasGrammar, bool)},
		{"validate", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDValidatorFilter, validate, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDValidatorFilter",
		nullptr,
		"com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter",
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLDTDValidatorFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(XMLDTDValidatorFilter));
	});
	return class$;
}

$Class* XMLDTDValidatorFilter::class$ = nullptr;

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com