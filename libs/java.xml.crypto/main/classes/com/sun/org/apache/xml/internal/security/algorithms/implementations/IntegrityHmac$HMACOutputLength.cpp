#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$HMACOutputLength.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <jcpp.h>

#undef LOG
#undef MAX_LENGTH
#undef MIN_LENGTH

using $IntegrityHmac = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

void IntegrityHmac$HMACOutputLength::init$(int32_t length) {
	$useLocalObjectStack();
	this->length = length;
	if (length < IntegrityHmac$HMACOutputLength::MIN_LENGTH) {
		$init($IntegrityHmac);
		$nc($IntegrityHmac::LOG)->debug("HMACOutputLength must not be less than {}"_s, $$new($ObjectArray, {$($Integer::valueOf(IntegrityHmac$HMACOutputLength::MIN_LENGTH))}));
		$var($ObjectArray, exArgs, $new($ObjectArray, {$($String::valueOf(IntegrityHmac$HMACOutputLength::MIN_LENGTH))}));
		$throwNew($XMLSignatureException, "algorithms.HMACOutputLengthMin"_s, exArgs);
	}
	if (length > IntegrityHmac$HMACOutputLength::MAX_LENGTH) {
		$init($IntegrityHmac);
		$nc($IntegrityHmac::LOG)->debug("HMACOutputLength must not be more than {}"_s, $$new($ObjectArray, {$($Integer::valueOf(IntegrityHmac$HMACOutputLength::MAX_LENGTH))}));
		$var($ObjectArray, exArgs, $new($ObjectArray, {$($String::valueOf(IntegrityHmac$HMACOutputLength::MAX_LENGTH))}));
		$throwNew($XMLSignatureException, "algorithms.HMACOutputLengthMax"_s, exArgs);
	}
}

IntegrityHmac$HMACOutputLength::IntegrityHmac$HMACOutputLength() {
}

$Class* IntegrityHmac$HMACOutputLength::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MIN_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegrityHmac$HMACOutputLength, MIN_LENGTH)},
		{"MAX_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegrityHmac$HMACOutputLength, MAX_LENGTH)},
		{"length", "I", nullptr, $PRIVATE | $FINAL, $field(IntegrityHmac$HMACOutputLength, length)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(IntegrityHmac$HMACOutputLength, init$, void, int32_t), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$HMACOutputLength", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "HMACOutputLength", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$HMACOutputLength",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac"
	};
	$loadClass(IntegrityHmac$HMACOutputLength, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IntegrityHmac$HMACOutputLength);
	});
	return class$;
}

$Class* IntegrityHmac$HMACOutputLength::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com