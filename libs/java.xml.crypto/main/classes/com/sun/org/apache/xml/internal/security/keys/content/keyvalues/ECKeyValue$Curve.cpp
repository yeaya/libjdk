#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue$Curve.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/ECPoint.h>
#include <java/security/spec/EllipticCurve.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $ECPoint = ::java::security::spec::ECPoint;
using $EllipticCurve = ::java::security::spec::EllipticCurve;

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

void ECKeyValue$Curve::init$($String* name, $String* oid, $EllipticCurve* curve, $ECPoint* g, $BigInteger* n, int32_t h) {
	$ECParameterSpec::init$(curve, g, n, h);
	$set(this, name, name);
	$set(this, oid, oid);
}

$String* ECKeyValue$Curve::getName() {
	return this->name;
}

$String* ECKeyValue$Curve::getObjectId() {
	return this->oid;
}

ECKeyValue$Curve::ECKeyValue$Curve() {
}

$Class* ECKeyValue$Curve::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECKeyValue$Curve, name)},
		{"oid", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECKeyValue$Curve, oid)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V", nullptr, 0, $method(ECKeyValue$Curve, init$, void, $String*, $String*, $EllipticCurve*, $ECPoint*, $BigInteger*, int32_t)},
		{"getName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(ECKeyValue$Curve, getName, $String*)},
		{"getObjectId", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(ECKeyValue$Curve, getObjectId, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue$Curve", "com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue", "Curve", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue$Curve",
		"java.security.spec.ECParameterSpec",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue"
	};
	$loadClass(ECKeyValue$Curve, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ECKeyValue$Curve);
	});
	return class$;
}

$Class* ECKeyValue$Curve::class$ = nullptr;

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