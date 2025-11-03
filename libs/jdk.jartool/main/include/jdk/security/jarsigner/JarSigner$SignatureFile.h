#ifndef _jdk_security_jarsigner_JarSigner$SignatureFile_h_
#define _jdk_security_jarsigner_JarSigner$SignatureFile_h_
//$ class jdk.security.jarsigner.JarSigner$SignatureFile
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
		class PrivateKey;
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Manifest;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class ManifestDigester;
		}
	}
}

namespace jdk {
	namespace security {
		namespace jarsigner {

class $import JarSigner$SignatureFile : public ::java::lang::Object {
	$class(JarSigner$SignatureFile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JarSigner$SignatureFile();
	void init$($Array<::java::security::MessageDigest>* digests, ::java::util::jar::Manifest* mf, ::sun::security::util::ManifestDigester* md, $String* baseName, bool sectionsonly);
	static $String* getBaseSignatureFilesName($String* baseName);
	virtual $String* getBlockName(::java::security::PrivateKey* privateKey);
	virtual $String* getMetaName();
	virtual void write(::java::io::OutputStream* out);
	::java::util::jar::Manifest* sf = nullptr;
	$String* baseName = nullptr;
};

		} // jarsigner
	} // security
} // jdk

#endif // _jdk_security_jarsigner_JarSigner$SignatureFile_h_