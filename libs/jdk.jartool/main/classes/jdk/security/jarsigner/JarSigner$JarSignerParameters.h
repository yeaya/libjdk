#ifndef _jdk_security_jarsigner_JarSigner$JarSignerParameters_h_
#define _jdk_security_jarsigner_JarSigner$JarSignerParameters_h_
//$ class jdk.security.jarsigner.JarSigner$JarSignerParameters
//$ extends com.sun.jarsigner.ContentSignerParameters

#include <com/sun/jarsigner/ContentSignerParameters.h>
#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipFile;
		}
	}
}
namespace jdk {
	namespace security {
		namespace jarsigner {
			class JarSigner;
		}
	}
}

namespace jdk {
	namespace security {
		namespace jarsigner {

class $export JarSigner$JarSignerParameters : public ::com::sun::jarsigner::ContentSignerParameters {
	$class(JarSigner$JarSignerParameters, $NO_CLASS_INIT, ::com::sun::jarsigner::ContentSignerParameters)
public:
	JarSigner$JarSignerParameters();
	void init$(::jdk::security::jarsigner::JarSigner* this$0, $StringArray* args, ::java::net::URI* tsa, $String* tSAPolicyID, $String* tSADigestAlg, $bytes* signature, $String* signatureAlgorithm, $Array<::java::security::cert::X509Certificate>* signerCertificateChain, $bytes* content, ::java::util::zip::ZipFile* source);
	virtual $StringArray* getCommandLine() override;
	virtual $bytes* getContent() override;
	virtual $bytes* getSignature() override;
	virtual $String* getSignatureAlgorithm() override;
	virtual $Array<::java::security::cert::X509Certificate>* getSignerCertificateChain() override;
	virtual ::java::util::zip::ZipFile* getSource() override;
	virtual $String* getTSADigestAlg() override;
	virtual $String* getTSAPolicyID() override;
	virtual ::java::net::URI* getTimestampingAuthority() override;
	virtual ::java::security::cert::X509Certificate* getTimestampingAuthorityCertificate() override;
	::jdk::security::jarsigner::JarSigner* this$0 = nullptr;
	$StringArray* args = nullptr;
	::java::net::URI* tsa = nullptr;
	$bytes* signature = nullptr;
	$String* signatureAlgorithm = nullptr;
	$Array<::java::security::cert::X509Certificate>* signerCertificateChain = nullptr;
	$bytes* content = nullptr;
	::java::util::zip::ZipFile* source = nullptr;
	$String* tSAPolicyID = nullptr;
	$String* tSADigestAlg = nullptr;
};

		} // jarsigner
	} // security
} // jdk

#endif // _jdk_security_jarsigner_JarSigner$JarSignerParameters_h_