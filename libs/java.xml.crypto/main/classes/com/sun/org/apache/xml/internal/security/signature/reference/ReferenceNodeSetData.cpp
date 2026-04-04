#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceNodeSetData.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								namespace reference {

$Class* ReferenceNodeSetData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC | $ABSTRACT, $virtualMethod(ReferenceNodeSetData, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceNodeSetData",
		nullptr,
		"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceData",
		nullptr,
		methodInfos$$
	};
	$loadClass(ReferenceNodeSetData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceNodeSetData);
	});
	return class$;
}

$Class* ReferenceNodeSetData::class$ = nullptr;

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com