#include <jdk/security/jarsigner/JarSigner$Builder.h>

#include <java/lang/ArrayStoreException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/net/URI.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/KeyStore$PrivateKeyEntry.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivateKey.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/Signature.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <java/util/function/BiConsumer.h>
#include <jdk/security/jarsigner/JarSigner.h>
#include <sun/security/util/SignatureUtil.h>
#include <jcpp.h>

#undef ENGLISH
#undef US

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $ArrayStoreException = ::java::lang::ArrayStoreException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $URI = ::java::net::URI;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $KeyStore$PrivateKeyEntry = ::java::security::KeyStore$PrivateKeyEntry;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivateKey = ::java::security::PrivateKey;
using $Provider = ::java::security::Provider;
using $PublicKey = ::java::security::PublicKey;
using $Signature = ::java::security::Signature;
using $CertPath = ::java::security::cert::CertPath;
using $Certificate = ::java::security::cert::Certificate;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $BiConsumer = ::java::util::function::BiConsumer;
using $JarSigner = ::jdk::security::jarsigner::JarSigner;
using $SignatureUtil = ::sun::security::util::SignatureUtil;

namespace jdk {
	namespace security {
		namespace jarsigner {

$FieldInfo _JarSigner$Builder_FieldInfo_[] = {
	{"privateKey", "Ljava/security/PrivateKey;", nullptr, $FINAL, $field(JarSigner$Builder, privateKey)},
	{"certChain", "[Ljava/security/cert/X509Certificate;", nullptr, $FINAL, $field(JarSigner$Builder, certChain)},
	{"digestalg", "[Ljava/lang/String;", nullptr, 0, $field(JarSigner$Builder, digestalg)},
	{"sigalg", "Ljava/lang/String;", nullptr, 0, $field(JarSigner$Builder, sigalg)},
	{"digestProvider", "Ljava/security/Provider;", nullptr, 0, $field(JarSigner$Builder, digestProvider)},
	{"sigProvider", "Ljava/security/Provider;", nullptr, 0, $field(JarSigner$Builder, sigProvider)},
	{"tsaUrl", "Ljava/net/URI;", nullptr, 0, $field(JarSigner$Builder, tsaUrl)},
	{"signerName", "Ljava/lang/String;", nullptr, 0, $field(JarSigner$Builder, signerName$)},
	{"handler", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<Ljava/lang/String;Ljava/lang/String;>;", 0, $field(JarSigner$Builder, handler)},
	{"tSAPolicyID", "Ljava/lang/String;", nullptr, 0, $field(JarSigner$Builder, tSAPolicyID)},
	{"tSADigestAlg", "Ljava/lang/String;", nullptr, 0, $field(JarSigner$Builder, tSADigestAlg)},
	{"sectionsonly", "Z", nullptr, 0, $field(JarSigner$Builder, sectionsonly)},
	{"internalsf", "Z", nullptr, 0, $field(JarSigner$Builder, internalsf)},
	{"altSignerPath", "Ljava/lang/String;", nullptr, 0, $field(JarSigner$Builder, altSignerPath)},
	{"altSigner", "Ljava/lang/String;", nullptr, 0, $field(JarSigner$Builder, altSigner)},
	{}
};

$MethodInfo _JarSigner$Builder_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore$PrivateKeyEntry;)V", nullptr, $PUBLIC, $method(static_cast<void(JarSigner$Builder::*)($KeyStore$PrivateKeyEntry*)>(&JarSigner$Builder::init$))},
	{"<init>", "(Ljava/security/PrivateKey;Ljava/security/cert/CertPath;)V", nullptr, $PUBLIC, $method(static_cast<void(JarSigner$Builder::*)($PrivateKey*,$CertPath*)>(&JarSigner$Builder::init$))},
	{"build", "()Ljdk/security/jarsigner/JarSigner;", nullptr, $PUBLIC},
	{"digestAlgorithm", "(Ljava/lang/String;)Ljdk/security/jarsigner/JarSigner$Builder;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException"},
	{"digestAlgorithm", "(Ljava/lang/String;Ljava/security/Provider;)Ljdk/security/jarsigner/JarSigner$Builder;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException"},
	{"eventHandler", "(Ljava/util/function/BiConsumer;)Ljdk/security/jarsigner/JarSigner$Builder;", "(Ljava/util/function/BiConsumer<Ljava/lang/String;Ljava/lang/String;>;)Ljdk/security/jarsigner/JarSigner$Builder;", $PUBLIC},
	{"getDefaultDigestAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&JarSigner$Builder::getDefaultDigestAlgorithm))},
	{"getDefaultSignatureAlgorithm", "(Ljava/security/PrivateKey;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($PrivateKey*)>(&JarSigner$Builder::getDefaultSignatureAlgorithm))},
	{"parseBoolean", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&JarSigner$Builder::parseBoolean))},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljdk/security/jarsigner/JarSigner$Builder;", nullptr, $PUBLIC},
	{"signatureAlgorithm", "(Ljava/lang/String;)Ljdk/security/jarsigner/JarSigner$Builder;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException"},
	{"signatureAlgorithm", "(Ljava/lang/String;Ljava/security/Provider;)Ljdk/security/jarsigner/JarSigner$Builder;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException"},
	{"signerName", "(Ljava/lang/String;)Ljdk/security/jarsigner/JarSigner$Builder;", nullptr, $PUBLIC},
	{"tsa", "(Ljava/net/URI;)Ljdk/security/jarsigner/JarSigner$Builder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JarSigner$Builder_InnerClassesInfo_[] = {
	{"jdk.security.jarsigner.JarSigner$Builder", "jdk.security.jarsigner.JarSigner", "Builder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JarSigner$Builder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.security.jarsigner.JarSigner$Builder",
	"java.lang.Object",
	nullptr,
	_JarSigner$Builder_FieldInfo_,
	_JarSigner$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_JarSigner$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.security.jarsigner.JarSigner"
};

$Object* allocate$JarSigner$Builder($Class* clazz) {
	return $of($alloc(JarSigner$Builder));
}

void JarSigner$Builder::init$($KeyStore$PrivateKeyEntry* entry) {
	this->sectionsonly = false;
	this->internalsf = false;
	$set(this, privateKey, $nc(entry)->getPrivateKey());
	try {
		$var($CertificateArray, certs, entry->getCertificateChain());
		$load($X509CertificateArray);
		$set(this, certChain, $fcast($X509CertificateArray, $Arrays::copyOf(certs, $nc(certs)->length, $getClass($X509CertificateArray))));
	} catch ($ArrayStoreException& ase) {
		$throwNew($IllegalArgumentException, "Entry does not contain X509Certificate"_s);
	}
}

void JarSigner$Builder::init$($PrivateKey* privateKey, $CertPath* certPath) {
	$useLocalCurrentObjectStackCache();
	this->sectionsonly = false;
	this->internalsf = false;
	$var($List, certs, $nc(certPath)->getCertificates());
	if ($nc(certs)->isEmpty()) {
		$throwNew($IllegalArgumentException, "certPath cannot be empty"_s);
	}
	if (!$nc($($nc(privateKey)->getAlgorithm()))->equals($($nc($($nc(($cast($Certificate, $($nc(certs)->get(0)))))->getPublicKey()))->getAlgorithm()))) {
		$throwNew($IllegalArgumentException, "private key algorithm does not match algorithm of public key in end entity certificate (the 1st in certPath)"_s);
	}
	$set(this, privateKey, privateKey);
	try {
		$set(this, certChain, $fcast($X509CertificateArray, $nc(certs)->toArray($$new($X509CertificateArray, certs->size()))));
	} catch ($ArrayStoreException& ase) {
		$throwNew($IllegalArgumentException, "Entry does not contain X509Certificate"_s);
	}
}

JarSigner$Builder* JarSigner$Builder::digestAlgorithm($String* algorithm) {
	$MessageDigest::getInstance($cast($String, $Objects::requireNonNull(algorithm)));
	$set(this, digestalg, $new($StringArray, {algorithm}));
	$set(this, digestProvider, nullptr);
	return this;
}

JarSigner$Builder* JarSigner$Builder::digestAlgorithm($String* algorithm, $Provider* provider) {
	$var($String, var$0, $cast($String, $Objects::requireNonNull(algorithm)));
	$MessageDigest::getInstance(var$0, $cast($Provider, $Objects::requireNonNull(provider)));
	$set(this, digestalg, $new($StringArray, {algorithm}));
	$set(this, digestProvider, provider);
	return this;
}

JarSigner$Builder* JarSigner$Builder::signatureAlgorithm($String* algorithm) {
	$Signature::getInstance($cast($String, $Objects::requireNonNull(algorithm)));
	$SignatureUtil::checkKeyAndSigAlgMatch(this->privateKey, algorithm);
	$set(this, sigalg, algorithm);
	$set(this, sigProvider, nullptr);
	return this;
}

JarSigner$Builder* JarSigner$Builder::signatureAlgorithm($String* algorithm, $Provider* provider) {
	$var($String, var$0, $cast($String, $Objects::requireNonNull(algorithm)));
	$Signature::getInstance(var$0, $cast($Provider, $Objects::requireNonNull(provider)));
	$SignatureUtil::checkKeyAndSigAlgMatch(this->privateKey, algorithm);
	$set(this, sigalg, algorithm);
	$set(this, sigProvider, provider);
	return this;
}

JarSigner$Builder* JarSigner$Builder::tsa($URI* uri) {
	$set(this, tsaUrl, $cast($URI, $Objects::requireNonNull(uri)));
	return this;
}

JarSigner$Builder* JarSigner$Builder::signerName($String* name$renamed) {
	$var($String, name, name$renamed);
	bool var$0 = $nc(name)->isEmpty();
	if (var$0 || $nc(name)->length() > 8) {
		$throwNew($IllegalArgumentException, "Name too long"_s);
	}
	$init($Locale);
	$assign(name, $nc(name)->toUpperCase($Locale::ENGLISH));
	for (int32_t j = 0; j < name->length(); ++j) {
		char16_t c = name->charAt(j);
		if (!((c >= u'A' && c <= u'Z') || (c >= u'0' && c <= u'9') || (c == u'-') || (c == u'_'))) {
			$throwNew($IllegalArgumentException, "Invalid characters in name"_s);
		}
	}
	$set(this, signerName$, name);
	return this;
}

JarSigner$Builder* JarSigner$Builder::eventHandler($BiConsumer* handler) {
	$set(this, handler, $cast($BiConsumer, $Objects::requireNonNull(handler)));
	return this;
}

JarSigner$Builder* JarSigner$Builder::setProperty($String* key, $String* value) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(key);
	$Objects::requireNonNull(value);
	{
		$init($Locale);
		$var($String, s16009$, key->toLowerCase($Locale::US));
		int32_t tmp16009$ = -1;
		switch (s16009$->hashCode()) {
		case 0x70ABEDD6:
			{
				if (s16009$->equals("tsadigestalg"_s)) {
					tmp16009$ = 0;
				}
				break;
			}
		case (int32_t)0x83260D8F:
			{
				if (s16009$->equals("tsapolicyid"_s)) {
					tmp16009$ = 1;
				}
				break;
			}
		case (int32_t)0xA12919D0:
			{
				if (s16009$->equals("internalsf"_s)) {
					tmp16009$ = 2;
				}
				break;
			}
		case 0x27DDB6DA:
			{
				if (s16009$->equals("sectionsonly"_s)) {
					tmp16009$ = 3;
				}
				break;
			}
		case (int32_t)0xDCA268B8:
			{
				if (s16009$->equals("altsignerpath"_s)) {
					tmp16009$ = 4;
				}
				break;
			}
		case (int32_t)0xC3754613:
			{
				if (s16009$->equals("altsigner"_s)) {
					tmp16009$ = 5;
				}
				break;
			}
		}
		switch (tmp16009$) {
		case 0:
			{
				try {
					$MessageDigest::getInstance(value);
				} catch ($NoSuchAlgorithmException& nsae) {
					$throwNew($IllegalArgumentException, "Invalid tsadigestalg"_s, nsae);
				}
				$set(this, tSADigestAlg, value);
				break;
			}
		case 1:
			{
				$set(this, tSAPolicyID, value);
				break;
			}
		case 2:
			{
				this->internalsf = parseBoolean("interalsf"_s, value);
				break;
			}
		case 3:
			{
				this->sectionsonly = parseBoolean("sectionsonly"_s, value);
				break;
			}
		case 4:
			{
				$set(this, altSignerPath, value);
				break;
			}
		case 5:
			{
				$set(this, altSigner, value);
				break;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"Unsupported key "_s, key}));
			}
		}
	}
	return this;
}

bool JarSigner$Builder::parseBoolean($String* name, $String* value) {
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s17317$, value);
		int32_t tmp17317$ = -1;
		switch ($nc(s17317$)->hashCode()) {
		case 0x0036758E:
			{
				if (s17317$->equals("true"_s)) {
					tmp17317$ = 0;
				}
				break;
			}
		case 0x05CB1923:
			{
				if (s17317$->equals("false"_s)) {
					tmp17317$ = 1;
				}
				break;
			}
		}
		switch (tmp17317$) {
		case 0:
			{
				return true;
			}
		case 1:
			{
				return false;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"Invalid "_s, name, " value"_s}));
			}
		}
	}
}

$String* JarSigner$Builder::getDefaultDigestAlgorithm() {
	return "SHA-256"_s;
}

$String* JarSigner$Builder::getDefaultSignatureAlgorithm($PrivateKey* key) {
	return $SignatureUtil::getDefaultSigAlgForKey($cast($PrivateKey, $Objects::requireNonNull(key)));
}

$JarSigner* JarSigner$Builder::build() {
	return $new($JarSigner, this);
}

JarSigner$Builder::JarSigner$Builder() {
}

$Class* JarSigner$Builder::load$($String* name, bool initialize) {
	$loadClass(JarSigner$Builder, name, initialize, &_JarSigner$Builder_ClassInfo_, allocate$JarSigner$Builder);
	return class$;
}

$Class* JarSigner$Builder::class$ = nullptr;

		} // jarsigner
	} // security
} // jdk