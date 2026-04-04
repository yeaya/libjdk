#include <com/sun/org/apache/xml/internal/security/transforms/TransformParam.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {

$Class* TransformParam::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.transforms.TransformParam"
	};
	$loadClass(TransformParam, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransformParam);
	});
	return class$;
}

$Class* TransformParam::class$ = nullptr;

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com