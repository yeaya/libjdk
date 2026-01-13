#ifndef _sun_security_tools_jarsigner_Main_h_
#define _sun_security_tools_jarsigner_Main_h_
//$ class sun.security.tools.jarsigner.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CERTPATH_DISABLED_CHECK")
#undef CERTPATH_DISABLED_CHECK
#pragma push_macro("DIGEST_PRIMITIVE_SET")
#undef DIGEST_PRIMITIVE_SET
#pragma push_macro("IN_KEYSTORE")
#undef IN_KEYSTORE
#pragma push_macro("JAR_DISABLED_CHECK")
#undef JAR_DISABLED_CHECK
#pragma push_macro("JUZFA")
#undef JUZFA
#pragma push_macro("LEGACY_CHECK")
#undef LEGACY_CHECK
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("NOT_ALIAS")
#undef NOT_ALIAS
#pragma push_macro("ONE_YEAR")
#undef ONE_YEAR
#pragma push_macro("P11KEYSTORE")
#undef P11KEYSTORE
#pragma push_macro("SIGNED_BY_ALIAS")
#undef SIGNED_BY_ALIAS
#pragma push_macro("SIG_PRIMITIVE_SET")
#undef SIG_PRIMITIVE_SET
#pragma push_macro("SIX_MONTHS")
#undef SIX_MONTHS
#pragma push_macro("VERSION")
#undef VERSION

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace security {
		class CodeSigner;
		class KeyStore;
		class PrivateKey;
		class PublicKey;
		class Timestamp;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class Certificate;
			class PKIXBuilderParameters;
			class TrustAnchor;
			class X509Certificate;
		}
	}
}
namespace java {
	namespace text {
		class Collator;
		class MessageFormat;
	}
}
namespace java {
	namespace util {
		class Date;
		class HashMap;
		class Hashtable;
		class List;
		class Map;
		class ResourceBundle;
		class Set;
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
	namespace internal {
		namespace access {
			class JavaUtilZipFileAccess;
		}
	}
}
namespace sun {
	namespace security {
		namespace util {
			class DisabledAlgorithmConstraints;
		}
	}
}

namespace sun {
	namespace security {
		namespace tools {
			namespace jarsigner {

class $import Main : public ::java::lang::Object {
	$class(Main, 0, ::java::lang::Object)
public:
	Main();
	void init$();
	$String* certsAndTSInfo($String* tab1, $String* tab2, ::java::util::List* certs, ::java::security::Timestamp* ts);
	virtual void checkCertUsage(::java::security::cert::X509Certificate* userCert, $booleans* bad);
	static $String* checkWeakAlg($String* alg);
	static $String* checkWeakKey(::java::security::PublicKey* key);
	void checkWeakSign($String* alg, ::java::util::Set* primitiveSet, bool tsa);
	void checkWeakSign(::java::security::PrivateKey* key);
	void displayMessagesAndResult(bool isSigning);
	virtual void error($String* message);
	virtual void error($String* message, $Throwable* e);
	static void fullusage();
	virtual void getAliasInfo($String* alias);
	static $chars* getPass($String* modifier, $String* arg);
	virtual $chars* getPass($String* prompt);
	virtual ::java::security::cert::X509Certificate* getTsaCert($String* alias);
	virtual int32_t inKeyStore($Array<::java::security::CodeSigner>* signers);
	int32_t inKeyStoreForOneSigner(::java::security::CodeSigner* signer);
	static ::java::security::cert::TrustAnchor* lambda$loadKeyStore$3(::java::security::cert::X509Certificate* c);
	static void lambda$loadKeyStore$4($String* t, $ObjectArray* o);
	static bool lambda$parseArgs$0($String* x);
	static void lambda$signJar$1($String* action, $String* file);
	static void lambda$signJar$2($String* t, $ObjectArray* o);
	virtual void loadKeyStore($String* keyStoreName, bool prompt);
	static void main($StringArray* args);
	virtual $StringArray* parseArgs($StringArray* args);
	virtual $String* printCert(bool isTsCert, $String* tab, ::java::security::cert::Certificate* c, ::java::util::Date* timestamp, bool checkUsage);
	$String* printTimestamp($String* tab, ::java::security::Timestamp* timestamp);
	virtual void run($StringArray* args);
	virtual void signJar($String* jarName, $String* alias);
	bool signatureRelated($String* name);
	$String* signerInfo(::java::security::CodeSigner* signer, $String* tab);
	static void usage();
	static void usageNoArg();
	virtual void validateCertChain($String* variant, ::java::util::List* certs, ::java::security::Timestamp* parameter);
	virtual void verifyJar($String* jarName);
	$String* verifyWithWeak($String* alg, ::java::util::Set* primitiveSet, bool tsa);
	$String* verifyWithWeak(::java::security::PublicKey* key);
	static ::java::util::ResourceBundle* rb;
	static ::java::text::Collator* collator;
	static $String* NONE;
	static $String* P11KEYSTORE;
	static const int64_t SIX_MONTHS = 15552000000; // 180 * 24 * 60 * 60 * 1000L
	static const int64_t ONE_YEAR = 31622400000; // 366 * 24 * 60 * 60 * 1000L
	static ::sun::security::util::DisabledAlgorithmConstraints* JAR_DISABLED_CHECK;
	static ::sun::security::util::DisabledAlgorithmConstraints* CERTPATH_DISABLED_CHECK;
	static ::sun::security::util::DisabledAlgorithmConstraints* LEGACY_CHECK;
	static ::java::util::Set* DIGEST_PRIMITIVE_SET;
	static ::java::util::Set* SIG_PRIMITIVE_SET;
	static bool extraAttrsDetected;
	static $String* VERSION;
	static const int32_t IN_KEYSTORE = 1;
	static const int32_t NOT_ALIAS = 4;
	static const int32_t SIGNED_BY_ALIAS = 8;
	static ::jdk::internal::access::JavaUtilZipFileAccess* JUZFA;
	$Array<::java::security::cert::X509Certificate>* certChain = nullptr;
	::java::security::PrivateKey* privateKey = nullptr;
	::java::security::KeyStore* store = nullptr;
	$String* keystore = nullptr;
	bool nullStream = false;
	bool token = false;
	$String* jarfile = nullptr;
	$String* alias = nullptr;
	::java::util::List* ckaliases = nullptr;
	$chars* storepass = nullptr;
	bool protectedPath = false;
	$String* storetype = nullptr;
	$String* providerName = nullptr;
	::java::util::List* providers = nullptr;
	::java::util::List* providerClasses = nullptr;
	::java::util::HashMap* providerArgs = nullptr;
	$chars* keypass = nullptr;
	$String* sigfile = nullptr;
	$String* sigalg = nullptr;
	$String* digestalg = nullptr;
	$String* signedjar = nullptr;
	$String* tsaUrl = nullptr;
	$String* tsaAlias = nullptr;
	$String* altCertChain = nullptr;
	$String* tSAPolicyID = nullptr;
	$String* tSADigestAlg = nullptr;
	bool verify = false;
	$String* verbose = nullptr;
	bool showcerts = false;
	bool debug = false;
	bool signManifest = false;
	bool externalSF = false;
	bool strict = false;
	bool revocationCheck = false;
	$String* altSignerClass = nullptr;
	$String* altSignerClasspath = nullptr;
	::java::util::zip::ZipFile* zipFile = nullptr;
	bool hasExpiringCert = false;
	bool hasExpiringTsaCert = false;
	bool noTimestamp = false;
	::java::util::Date* expireDate = nullptr;
	::java::util::Date* tsaExpireDate = nullptr;
	bool hasTimestampBlock = false;
	::java::security::PublicKey* weakPublicKey = nullptr;
	bool disabledAlgFound = false;
	$String* legacyDigestAlg = nullptr;
	$String* legacyTsaDigestAlg = nullptr;
	$String* legacySigAlg = nullptr;
	int32_t legacyAlg = 0;
	int32_t disabledAlg = 0;
	bool hasExpiredCert = false;
	bool hasExpiredTsaCert = false;
	bool notYetValidCert = false;
	bool chainNotValidated = false;
	bool tsaChainNotValidated = false;
	bool notSignedByAlias = false;
	bool aliasNotInStore = false;
	bool hasUnsignedEntry = false;
	bool badKeyUsage = false;
	bool badExtendedKeyUsage = false;
	bool badNetscapeCertType = false;
	bool signerSelfSigned = false;
	$Throwable* chainNotValidatedReason = nullptr;
	$Throwable* tsaChainNotValidatedReason = nullptr;
	::java::security::cert::PKIXBuilderParameters* pkixParameters = nullptr;
	::java::util::Set* trustedCerts = nullptr;
	static ::java::text::MessageFormat* validityTimeForm;
	static ::java::text::MessageFormat* notYetTimeForm;
	static ::java::text::MessageFormat* expiredTimeForm;
	static ::java::text::MessageFormat* expiringTimeForm;
	static ::java::text::MessageFormat* signTimeForm;
	::java::util::Map* cacheForInKS = nullptr;
	::java::util::Hashtable* storeHash = nullptr;
	::java::util::Map* cacheForSignerInfo = nullptr;
};

			} // jarsigner
		} // tools
	} // security
} // sun

#pragma pop_macro("CERTPATH_DISABLED_CHECK")
#pragma pop_macro("DIGEST_PRIMITIVE_SET")
#pragma pop_macro("IN_KEYSTORE")
#pragma pop_macro("JAR_DISABLED_CHECK")
#pragma pop_macro("JUZFA")
#pragma pop_macro("LEGACY_CHECK")
#pragma pop_macro("NONE")
#pragma pop_macro("NOT_ALIAS")
#pragma pop_macro("ONE_YEAR")
#pragma pop_macro("P11KEYSTORE")
#pragma pop_macro("SIGNED_BY_ALIAS")
#pragma pop_macro("SIG_PRIMITIVE_SET")
#pragma pop_macro("SIX_MONTHS")
#pragma pop_macro("VERSION")

#endif // _sun_security_tools_jarsigner_Main_h_