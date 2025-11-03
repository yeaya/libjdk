#ifndef _com_sun_jarsigner_ContentSignerParameters_h_
#define _com_sun_jarsigner_ContentSignerParameters_h_
//$ interface com.sun.jarsigner.ContentSignerParameters
//$ extends java.lang.Object

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

namespace com {
	namespace sun {
		namespace jarsigner {

class $import ContentSignerParameters : public ::java::lang::Object {
	$interface(ContentSignerParameters, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $StringArray* getCommandLine() {return nullptr;}
	virtual $bytes* getContent() {return nullptr;}
	virtual $bytes* getSignature() {return nullptr;}
	virtual $String* getSignatureAlgorithm() {return nullptr;}
	virtual $Array<::java::security::cert::X509Certificate>* getSignerCertificateChain() {return nullptr;}
	virtual ::java::util::zip::ZipFile* getSource() {return nullptr;}
	virtual $String* getTSADigestAlg();
	virtual $String* getTSAPolicyID();
	virtual ::java::net::URI* getTimestampingAuthority() {return nullptr;}
	virtual ::java::security::cert::X509Certificate* getTimestampingAuthorityCertificate() {return nullptr;}
};

		} // jarsigner
	} // sun
} // com

#endif // _com_sun_jarsigner_ContentSignerParameters_h_