#include <com/sun/jarsigner/ContentSignerParameters.h>

#include <java/net/URI.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/zip/ZipFile.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $URI = ::java::net::URI;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $ZipFile = ::java::util::zip::ZipFile;

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
	{"getCommandLine", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentSignerParameters, getCommandLine, $StringArray*)},
	{"getContent", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentSignerParameters, getContent, $bytes*)},
	{"getSignature", "()[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentSignerParameters, getSignature, $bytes*)},
	{"getSignatureAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentSignerParameters, getSignatureAlgorithm, $String*)},
	{"getSignerCertificateChain", "()[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentSignerParameters, getSignerCertificateChain, $X509CertificateArray*)},
	{"getSource", "()Ljava/util/zip/ZipFile;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentSignerParameters, getSource, $ZipFile*)},
	{"getTSADigestAlg", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ContentSignerParameters, getTSADigestAlg, $String*)},
	{"getTSAPolicyID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ContentSignerParameters, getTSAPolicyID, $String*)},
	{"getTimestampingAuthority", "()Ljava/net/URI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentSignerParameters, getTimestampingAuthority, $URI*)},
	{"getTimestampingAuthorityCertificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ContentSignerParameters, getTimestampingAuthorityCertificate, $X509Certificate*)},
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