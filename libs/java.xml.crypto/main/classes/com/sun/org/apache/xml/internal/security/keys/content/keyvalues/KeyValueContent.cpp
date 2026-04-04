#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/KeyValueContent.h>
#include <java/security/PublicKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {
									namespace keyvalues {

$Class* KeyValueContent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(KeyValueContent, getPublicKey, $PublicKey*), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.KeyValueContent",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(KeyValueContent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyValueContent);
	});
	return class$;
}

$Class* KeyValueContent::class$ = nullptr;

									} // keyvalues
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com