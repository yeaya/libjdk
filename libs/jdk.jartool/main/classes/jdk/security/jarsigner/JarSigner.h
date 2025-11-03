#ifndef _jdk_security_jarsigner_JarSigner_h_
#define _jdk_security_jarsigner_JarSigner_h_
//$ class jdk.security.jarsigner.JarSigner
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("JUZFA")
#undef JUZFA
#pragma push_macro("META_INF")
#undef META_INF

namespace com {
	namespace sun {
		namespace jarsigner {
			class ContentSigner;
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
		class PrivateKey;
		class Provider;
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
		namespace function {
			class BiConsumer;
		}
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Attributes;
			class Manifest;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
			class ZipFile;
			class ZipOutputStream;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace access {
			class JavaUtilZipFileAccess;
		}
	}
}
namespace jdk {
	namespace security {
		namespace jarsigner {
			class JarSigner$Builder;
		}
	}
}
namespace sun {
	namespace security {
		namespace pkcs {
			class PKCS9Attributes;
		}
	}
}

namespace jdk {
	namespace security {
		namespace jarsigner {

class $export JarSigner : public ::java::lang::Object {
	$class(JarSigner, 0, ::java::lang::Object)
public:
	JarSigner();
	void init$(::jdk::security::jarsigner::JarSigner$Builder* builder);
	$String* getDigestAlgorithm();
	::java::util::jar::Attributes* getDigestAttributes(::java::util::zip::ZipEntry* ze, ::java::util::zip::ZipFile* zf, $Array<::java::security::MessageDigest>* digests);
	$StringArray* getDigests(::java::util::zip::ZipEntry* ze, ::java::util::zip::ZipFile* zf, $Array<::java::security::MessageDigest>* digests);
	::java::util::zip::ZipEntry* getManifestFile(::java::util::zip::ZipFile* zf);
	$String* getProperty($String* key);
	$String* getSignatureAlgorithm();
	$String* getSignerName();
	::java::net::URI* getTsa();
	::sun::security::pkcs::PKCS9Attributes* lambda$sign0$0($bytes* s);
	::com::sun::jarsigner::ContentSigner* loadSigningMechanism($String* signerClassName, $String* signerClassPath);
	void sign(::java::util::zip::ZipFile* file, ::java::io::OutputStream* os);
	void sign0(::java::util::zip::ZipFile* zipFile, ::java::io::OutputStream* os);
	void updateDigests(::java::util::zip::ZipEntry* ze, ::java::util::zip::ZipFile* zf, $Array<::java::security::MessageDigest>* digests, ::java::util::jar::Manifest* mf);
	void writeBytes(::java::util::zip::ZipFile* zf, ::java::util::zip::ZipEntry* ze, ::java::util::zip::ZipOutputStream* os);
	void writeEntry(::java::util::zip::ZipFile* zf, ::java::util::zip::ZipOutputStream* os, ::java::util::zip::ZipEntry* ze);
	static ::jdk::internal::access::JavaUtilZipFileAccess* JUZFA;
	static $String* META_INF;
	::java::security::PrivateKey* privateKey = nullptr;
	$Array<::java::security::cert::X509Certificate>* certChain = nullptr;
	$StringArray* digestalg = nullptr;
	$String* sigalg = nullptr;
	::java::security::Provider* digestProvider = nullptr;
	::java::security::Provider* sigProvider = nullptr;
	::java::net::URI* tsaUrl = nullptr;
	$String* signerName = nullptr;
	::java::util::function::BiConsumer* handler = nullptr;
	$String* tSAPolicyID = nullptr;
	$String* tSADigestAlg = nullptr;
	bool sectionsonly = false;
	bool internalsf = false;
	$String* altSignerPath = nullptr;
	$String* altSigner = nullptr;
	bool extraAttrsDetected = false;
};

		} // jarsigner
	} // security
} // jdk

#pragma pop_macro("JUZFA")
#pragma pop_macro("META_INF")

#endif // _jdk_security_jarsigner_JarSigner_h_