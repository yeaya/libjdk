#include <com/sun/jarsigner/ContentSigner.h>
#include <com/sun/jarsigner/ContentSignerParameters.h>
#include <jcpp.h>

using $ContentSignerParameters = ::com::sun::jarsigner::ContentSignerParameters;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace com {
	namespace sun {
		namespace jarsigner {

void ContentSigner::init$() {
}

ContentSigner::ContentSigner() {
}

$Class* ContentSigner::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ContentSigner, init$, void)},
		{"generateSignedData", "(Lcom/sun/jarsigner/ContentSignerParameters;ZZ)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentSigner, generateSignedData, $bytes*, $ContentSignerParameters*, bool, bool), "java.security.NoSuchAlgorithmException,java.security.cert.CertificateException,java.io.IOException"},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.jarsigner.ContentSigner",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(ContentSigner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContentSigner);
	});
	return class$;
}

$Class* ContentSigner::class$ = nullptr;

		} // jarsigner
	} // sun
} // com