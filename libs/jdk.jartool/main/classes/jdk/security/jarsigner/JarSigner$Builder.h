#ifndef _jdk_security_jarsigner_JarSigner$Builder_h_
#define _jdk_security_jarsigner_JarSigner$Builder_h_
//$ class jdk.security.jarsigner.JarSigner$Builder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		class KeyStore$PrivateKeyEntry;
		class PrivateKey;
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class CertPath;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
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

class $export JarSigner$Builder : public ::java::lang::Object {
	$class(JarSigner$Builder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JarSigner$Builder();
	void init$(::java::security::KeyStore$PrivateKeyEntry* entry);
	void init$(::java::security::PrivateKey* privateKey, ::java::security::cert::CertPath* certPath);
	virtual ::jdk::security::jarsigner::JarSigner* build();
	virtual ::jdk::security::jarsigner::JarSigner$Builder* digestAlgorithm($String* algorithm);
	virtual ::jdk::security::jarsigner::JarSigner$Builder* digestAlgorithm($String* algorithm, ::java::security::Provider* provider);
	virtual ::jdk::security::jarsigner::JarSigner$Builder* eventHandler(::java::util::function::BiConsumer* handler);
	static $String* getDefaultDigestAlgorithm();
	static $String* getDefaultSignatureAlgorithm(::java::security::PrivateKey* key);
	static bool parseBoolean($String* name, $String* value);
	virtual ::jdk::security::jarsigner::JarSigner$Builder* setProperty($String* key, $String* value);
	virtual ::jdk::security::jarsigner::JarSigner$Builder* signatureAlgorithm($String* algorithm);
	virtual ::jdk::security::jarsigner::JarSigner$Builder* signatureAlgorithm($String* algorithm, ::java::security::Provider* provider);
	virtual ::jdk::security::jarsigner::JarSigner$Builder* signerName($String* name);
	virtual ::jdk::security::jarsigner::JarSigner$Builder* tsa(::java::net::URI* uri);
	::java::security::PrivateKey* privateKey = nullptr;
	$Array<::java::security::cert::X509Certificate>* certChain = nullptr;
	$StringArray* digestalg = nullptr;
	$String* sigalg = nullptr;
	::java::security::Provider* digestProvider = nullptr;
	::java::security::Provider* sigProvider = nullptr;
	::java::net::URI* tsaUrl = nullptr;
	$String* signerName$ = nullptr;
	::java::util::function::BiConsumer* handler = nullptr;
	$String* tSAPolicyID = nullptr;
	$String* tSADigestAlg = nullptr;
	bool sectionsonly = false;
	bool internalsf = false;
	$String* altSignerPath = nullptr;
	$String* altSigner = nullptr;
};

		} // jarsigner
	} // security
} // jdk

#endif // _jdk_security_jarsigner_JarSigner$Builder_h_