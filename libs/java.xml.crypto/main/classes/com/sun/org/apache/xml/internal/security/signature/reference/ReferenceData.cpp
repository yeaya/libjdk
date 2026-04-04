#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								namespace reference {

$Class* ReferenceData::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceData"
	};
	$loadClass(ReferenceData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceData);
	});
	return class$;
}

$Class* ReferenceData::class$ = nullptr;

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com