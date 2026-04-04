#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {

$Class* KeyInfoContent::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent"
	};
	$loadClass(KeyInfoContent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyInfoContent);
	});
	return class$;
}

$Class* KeyInfoContent::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com