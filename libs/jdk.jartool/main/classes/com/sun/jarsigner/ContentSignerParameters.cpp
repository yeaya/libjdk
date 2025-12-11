#include <com/sun/jarsigner/ContentSignerParameters.h>

#include <java/net/URI.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/zip/ZipFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace com {
	namespace sun {
		namespace jarsigner {

$NamedAttribute ContentSignerParameters_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _ContentSignerParameters_Annotations_[] = {
	{"Ljava/lang/Deprecated;", ContentSignerParameters_Attribute_var$0},
	{}
};

$MethodInfo _ContentSignerParameters_MethodInfo_[] = {
	{"getCommandLine", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getContent", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignature", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignatureAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignerCertificateChain", "()[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSource", "()Ljava/util/zip/ZipFile;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTSADigestAlg", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTSAPolicyID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTimestampingAuthority", "()Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTimestampingAuthorityCertificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ContentSignerParameters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.jarsigner.ContentSignerParameters",
	nullptr,
	nullptr,
	nullptr,
	_ContentSignerParameters_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ContentSignerParameters_Annotations_
};

$Object* allocate$ContentSignerParameters($Class* clazz) {
	return $of($alloc(ContentSignerParameters));
}

$String* ContentSignerParameters::getTSAPolicyID() {
	return nullptr;
}

$String* ContentSignerParameters::getTSADigestAlg() {
	return "SHA-256"_s;
}

$Class* ContentSignerParameters::load$($String* name, bool initialize) {
	$loadClass(ContentSignerParameters, name, initialize, &_ContentSignerParameters_ClassInfo_, allocate$ContentSignerParameters);
	return class$;
}

$Class* ContentSignerParameters::class$ = nullptr;

		} // jarsigner
	} // sun
} // com