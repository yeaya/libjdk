#include <jdk/security/jarsigner/JarSigner$JarSignerParameters.h>
#include <java/net/URI.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Objects.h>
#include <java/util/zip/ZipFile.h>
#include <jdk/security/jarsigner/JarSigner.h>
#include <jcpp.h>

using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $URI = ::java::net::URI;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Objects = ::java::util::Objects;
using $ZipFile = ::java::util::zip::ZipFile;
using $JarSigner = ::jdk::security::jarsigner::JarSigner;

namespace jdk {
	namespace security {
		namespace jarsigner {

void JarSigner$JarSignerParameters::init$($JarSigner* this$0, $StringArray* args, $URI* tsa, $String* tSAPolicyID, $String* tSADigestAlg, $bytes* signature, $String* signatureAlgorithm, $X509CertificateArray* signerCertificateChain, $bytes* content, $ZipFile* source) {
	$set(this, this$0, this$0);
	$Objects::requireNonNull(signature);
	$Objects::requireNonNull(signatureAlgorithm);
	$Objects::requireNonNull(signerCertificateChain);
	$set(this, args, args);
	$set(this, tsa, tsa);
	$set(this, tSAPolicyID, tSAPolicyID);
	$set(this, tSADigestAlg, tSADigestAlg);
	$set(this, signature, signature);
	$set(this, signatureAlgorithm, signatureAlgorithm);
	$set(this, signerCertificateChain, signerCertificateChain);
	$set(this, content, content);
	$set(this, source, source);
}

$StringArray* JarSigner$JarSignerParameters::getCommandLine() {
	return this->args;
}

$URI* JarSigner$JarSignerParameters::getTimestampingAuthority() {
	return this->tsa;
}

$X509Certificate* JarSigner$JarSignerParameters::getTimestampingAuthorityCertificate() {
	return nullptr;
}

$String* JarSigner$JarSignerParameters::getTSAPolicyID() {
	return this->tSAPolicyID;
}

$String* JarSigner$JarSignerParameters::getTSADigestAlg() {
	return this->tSADigestAlg;
}

$bytes* JarSigner$JarSignerParameters::getSignature() {
	return this->signature;
}

$String* JarSigner$JarSignerParameters::getSignatureAlgorithm() {
	return this->signatureAlgorithm;
}

$X509CertificateArray* JarSigner$JarSignerParameters::getSignerCertificateChain() {
	return this->signerCertificateChain;
}

$bytes* JarSigner$JarSignerParameters::getContent() {
	return this->content;
}

$ZipFile* JarSigner$JarSignerParameters::getSource() {
	return this->source;
}

JarSigner$JarSignerParameters::JarSigner$JarSignerParameters() {
}

$Class* JarSigner$JarSignerParameters::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/security/jarsigner/JarSigner;", nullptr, $FINAL | $SYNTHETIC, $field(JarSigner$JarSignerParameters, this$0)},
		{"args", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(JarSigner$JarSignerParameters, args)},
		{"tsa", "Ljava/net/URI;", nullptr, $PRIVATE, $field(JarSigner$JarSignerParameters, tsa)},
		{"signature", "[B", nullptr, $PRIVATE, $field(JarSigner$JarSignerParameters, signature)},
		{"signatureAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JarSigner$JarSignerParameters, signatureAlgorithm)},
		{"signerCertificateChain", "[Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $field(JarSigner$JarSignerParameters, signerCertificateChain)},
		{"content", "[B", nullptr, $PRIVATE, $field(JarSigner$JarSignerParameters, content)},
		{"source", "Ljava/util/zip/ZipFile;", nullptr, $PRIVATE, $field(JarSigner$JarSignerParameters, source)},
		{"tSAPolicyID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JarSigner$JarSignerParameters, tSAPolicyID)},
		{"tSADigestAlg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JarSigner$JarSignerParameters, tSADigestAlg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/security/jarsigner/JarSigner;[Ljava/lang/String;Ljava/net/URI;Ljava/lang/String;Ljava/lang/String;[BLjava/lang/String;[Ljava/security/cert/X509Certificate;[BLjava/util/zip/ZipFile;)V", nullptr, 0, $method(JarSigner$JarSignerParameters, init$, void, $JarSigner*, $StringArray*, $URI*, $String*, $String*, $bytes*, $String*, $X509CertificateArray*, $bytes*, $ZipFile*)},
		{"getCommandLine", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getCommandLine, $StringArray*)},
		{"getContent", "()[B", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getContent, $bytes*)},
		{"getSignature", "()[B", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getSignature, $bytes*)},
		{"getSignatureAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getSignatureAlgorithm, $String*)},
		{"getSignerCertificateChain", "()[Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getSignerCertificateChain, $X509CertificateArray*)},
		{"getSource", "()Ljava/util/zip/ZipFile;", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getSource, $ZipFile*)},
		{"getTSADigestAlg", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getTSADigestAlg, $String*)},
		{"getTSAPolicyID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getTSAPolicyID, $String*)},
		{"getTimestampingAuthority", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getTimestampingAuthority, $URI*)},
		{"getTimestampingAuthorityCertificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, $virtualMethod(JarSigner$JarSignerParameters, getTimestampingAuthorityCertificate, $X509Certificate*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.security.jarsigner.JarSigner$JarSignerParameters", "jdk.security.jarsigner.JarSigner", "JarSignerParameters", 0},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "16"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.security.jarsigner.JarSigner$JarSignerParameters",
		"java.lang.Object",
		"com.sun.jarsigner.ContentSignerParameters",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"jdk.security.jarsigner.JarSigner"
	};
	$loadClass(JarSigner$JarSignerParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JarSigner$JarSignerParameters);
	});
	return class$;
}

$Class* JarSigner$JarSignerParameters::class$ = nullptr;

		} // jarsigner
	} // security
} // jdk