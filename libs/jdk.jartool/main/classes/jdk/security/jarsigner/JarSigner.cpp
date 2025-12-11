#include <jdk/security/jarsigner/JarSigner.h>

#include <com/sun/jarsigner/ContentSigner.h>
#include <com/sun/jarsigner/ContentSignerParameters.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/net/SocketTimeoutException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/URLClassLoader.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivateKey.h>
#include <java/security/Provider.h>
#include <java/security/SecureClassLoader.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/security/spec/InvalidParameterSpecException.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Function.h>
#include <java/util/jar/Attributes$Name.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/Manifest.h>
#include <java/util/zip/DeflaterOutputStream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <java/util/zip/ZipOutputStream.h>
#include <jdk/internal/access/JavaUtilZipFileAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/security/jarsigner/JarSigner$Builder.h>
#include <jdk/security/jarsigner/JarSigner$JarSignerParameters.h>
#include <jdk/security/jarsigner/JarSigner$SignatureFile.h>
#include <jdk/security/jarsigner/JarSignerException.h>
#include <sun/security/pkcs/PKCS7.h>
#include <sun/security/pkcs/PKCS9Attribute.h>
#include <sun/security/pkcs/PKCS9Attributes.h>
#include <sun/security/timestamp/HttpTimestamper.h>
#include <sun/security/timestamp/Timestamper.h>
#include <sun/security/tools/PathList.h>
#include <sun/security/util/Event$ReporterCategory.h>
#include <sun/security/util/Event.h>
#include <sun/security/util/ManifestDigester$Entry.h>
#include <sun/security/util/ManifestDigester.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/util/SignatureFileVerifier.h>
#include <sun/security/util/SignatureUtil.h>
#include <sun/security/x509/AlgorithmId.h>
#include <jcpp.h>

#undef ENGLISH
#undef JUZFA
#undef MANIFEST_NAME
#undef MANIFEST_VERSION
#undef META_INF
#undef SIGNATURE_TIMESTAMP_TOKEN_OID
#undef STORED
#undef US
#undef ZIPFILEATTRS

using $URLArray = $Array<::java::net::URL>;
using $MessageDigestArray = $Array<::java::security::MessageDigest>;
using $PKCS9AttributeArray = $Array<::sun::security::pkcs::PKCS9Attribute>;
using $ContentSigner = ::com::sun::jarsigner::ContentSigner;
using $ContentSignerParameters = ::com::sun::jarsigner::ContentSignerParameters;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $URI = ::java::net::URI;
using $URLClassLoader = ::java::net::URLClassLoader;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivateKey = ::java::security::PrivateKey;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $Signature = ::java::security::Signature;
using $SignatureException = ::java::security::SignatureException;
using $CertificateException = ::java::security::cert::CertificateException;
using $InvalidParameterSpecException = ::java::security::spec::InvalidParameterSpecException;
using $Base64 = ::java::util::Base64;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Function = ::java::util::function::Function;
using $Attributes = ::java::util::jar::Attributes;
using $Attributes$Name = ::java::util::jar::Attributes$Name;
using $JarFile = ::java::util::jar::JarFile;
using $Manifest = ::java::util::jar::Manifest;
using $DeflaterOutputStream = ::java::util::zip::DeflaterOutputStream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $ZipOutputStream = ::java::util::zip::ZipOutputStream;
using $JavaUtilZipFileAccess = ::jdk::internal::access::JavaUtilZipFileAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $JarSigner$Builder = ::jdk::security::jarsigner::JarSigner$Builder;
using $JarSigner$JarSignerParameters = ::jdk::security::jarsigner::JarSigner$JarSignerParameters;
using $JarSigner$SignatureFile = ::jdk::security::jarsigner::JarSigner$SignatureFile;
using $JarSignerException = ::jdk::security::jarsigner::JarSignerException;
using $PKCS7 = ::sun::security::pkcs::PKCS7;
using $PKCS9Attribute = ::sun::security::pkcs::PKCS9Attribute;
using $PKCS9Attributes = ::sun::security::pkcs::PKCS9Attributes;
using $HttpTimestamper = ::sun::security::timestamp::HttpTimestamper;
using $Timestamper = ::sun::security::timestamp::Timestamper;
using $PathList = ::sun::security::tools::PathList;
using $Event = ::sun::security::util::Event;
using $Event$ReporterCategory = ::sun::security::util::Event$ReporterCategory;
using $ManifestDigester = ::sun::security::util::ManifestDigester;
using $ManifestDigester$Entry = ::sun::security::util::ManifestDigester$Entry;
using $SignatureFileVerifier = ::sun::security::util::SignatureFileVerifier;
using $SignatureUtil = ::sun::security::util::SignatureUtil;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;

namespace jdk {
	namespace security {
		namespace jarsigner {

class JarSigner$$Lambda$lambda$sign0$0 : public $Function {
	$class(JarSigner$$Lambda$lambda$sign0$0, $NO_CLASS_INIT, $Function)
public:
	void init$(JarSigner* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* s) override {
		 return $of($nc(inst$)->lambda$sign0$0($cast($bytes, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JarSigner$$Lambda$lambda$sign0$0>());
	}
	JarSigner* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JarSigner$$Lambda$lambda$sign0$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JarSigner$$Lambda$lambda$sign0$0, inst$)},
	{}
};
$MethodInfo JarSigner$$Lambda$lambda$sign0$0::methodInfos[3] = {
	{"<init>", "(Ljdk/security/jarsigner/JarSigner;)V", nullptr, $PUBLIC, $method(static_cast<void(JarSigner$$Lambda$lambda$sign0$0::*)(JarSigner*)>(&JarSigner$$Lambda$lambda$sign0$0::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo JarSigner$$Lambda$lambda$sign0$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"jdk.security.jarsigner.JarSigner$$Lambda$lambda$sign0$0",
	"java.lang.Object",
	"java.util.function.Function",
	fieldInfos,
	methodInfos
};
$Class* JarSigner$$Lambda$lambda$sign0$0::load$($String* name, bool initialize) {
	$loadClass(JarSigner$$Lambda$lambda$sign0$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JarSigner$$Lambda$lambda$sign0$0::class$ = nullptr;

$NamedAttribute JarSigner_Attribute_var$0[] = {
	{"since", 's', "16"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _JarSigner_FieldAnnotations_altSignerPath[] = {
	{"Ljava/lang/Deprecated;", JarSigner_Attribute_var$0},
	{}
};

$NamedAttribute JarSigner_Attribute_var$1[] = {
	{"since", 's', "16"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _JarSigner_FieldAnnotations_altSigner[] = {
	{"Ljava/lang/Deprecated;", JarSigner_Attribute_var$1},
	{}
};

$FieldInfo _JarSigner_FieldInfo_[] = {
	{"JUZFA", "Ljdk/internal/access/JavaUtilZipFileAccess;", nullptr, $STATIC | $FINAL, $staticField(JarSigner, JUZFA)},
	{"META_INF", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JarSigner, META_INF)},
	{"privateKey", "Ljava/security/PrivateKey;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, privateKey)},
	{"certChain", "[Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, certChain)},
	{"digestalg", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, digestalg)},
	{"sigalg", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, sigalg)},
	{"digestProvider", "Ljava/security/Provider;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, digestProvider)},
	{"sigProvider", "Ljava/security/Provider;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, sigProvider)},
	{"tsaUrl", "Ljava/net/URI;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, tsaUrl)},
	{"signerName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, signerName)},
	{"handler", "Ljava/util/function/BiConsumer;", "Ljava/util/function/BiConsumer<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JarSigner, handler)},
	{"tSAPolicyID", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, tSAPolicyID)},
	{"tSADigestAlg", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JarSigner, tSADigestAlg)},
	{"sectionsonly", "Z", nullptr, $PRIVATE | $FINAL, $field(JarSigner, sectionsonly)},
	{"internalsf", "Z", nullptr, $PRIVATE | $FINAL, $field(JarSigner, internalsf)},
	{"altSignerPath", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL | $DEPRECATED, $field(JarSigner, altSignerPath), _JarSigner_FieldAnnotations_altSignerPath},
	{"altSigner", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL | $DEPRECATED, $field(JarSigner, altSigner), _JarSigner_FieldAnnotations_altSigner},
	{"extraAttrsDetected", "Z", nullptr, $PRIVATE, $field(JarSigner, extraAttrsDetected)},
	{}
};

$MethodInfo _JarSigner_MethodInfo_[] = {
	{"<init>", "(Ljdk/security/jarsigner/JarSigner$Builder;)V", nullptr, $PRIVATE, $method(static_cast<void(JarSigner::*)($JarSigner$Builder*)>(&JarSigner::init$))},
	{"getDigestAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(JarSigner::*)()>(&JarSigner::getDigestAlgorithm))},
	{"getDigestAttributes", "(Ljava/util/zip/ZipEntry;Ljava/util/zip/ZipFile;[Ljava/security/MessageDigest;)Ljava/util/jar/Attributes;", nullptr, $PRIVATE, $method(static_cast<$Attributes*(JarSigner::*)($ZipEntry*,$ZipFile*,$MessageDigestArray*)>(&JarSigner::getDigestAttributes)), "java.io.IOException"},
	{"getDigests", "(Ljava/util/zip/ZipEntry;Ljava/util/zip/ZipFile;[Ljava/security/MessageDigest;)[Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$StringArray*(JarSigner::*)($ZipEntry*,$ZipFile*,$MessageDigestArray*)>(&JarSigner::getDigests)), "java.io.IOException"},
	{"getManifestFile", "(Ljava/util/zip/ZipFile;)Ljava/util/zip/ZipEntry;", nullptr, $PRIVATE, $method(static_cast<$ZipEntry*(JarSigner::*)($ZipFile*)>(&JarSigner::getManifestFile))},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(JarSigner::*)($String*)>(&JarSigner::getProperty))},
	{"getSignatureAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(JarSigner::*)()>(&JarSigner::getSignatureAlgorithm))},
	{"getSignerName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(JarSigner::*)()>(&JarSigner::getSignerName))},
	{"getTsa", "()Ljava/net/URI;", nullptr, $PUBLIC, $method(static_cast<$URI*(JarSigner::*)()>(&JarSigner::getTsa))},
	{"lambda$sign0$0", "([B)Lsun/security/pkcs/PKCS9Attributes;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$PKCS9Attributes*(JarSigner::*)($bytes*)>(&JarSigner::lambda$sign0$0))},
	{"loadSigningMechanism", "(Ljava/lang/String;Ljava/lang/String;)Lcom/sun/jarsigner/ContentSigner;", nullptr, $PRIVATE, $method(static_cast<$ContentSigner*(JarSigner::*)($String*,$String*)>(&JarSigner::loadSigningMechanism))},
	{"sign", "(Ljava/util/zip/ZipFile;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(JarSigner::*)($ZipFile*,$OutputStream*)>(&JarSigner::sign))},
	{"sign0", "(Ljava/util/zip/ZipFile;Ljava/io/OutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JarSigner::*)($ZipFile*,$OutputStream*)>(&JarSigner::sign0)), "java.io.IOException,java.security.cert.CertificateException,java.security.NoSuchAlgorithmException,java.security.SignatureException,java.security.InvalidKeyException,java.security.spec.InvalidParameterSpecException"},
	{"updateDigests", "(Ljava/util/zip/ZipEntry;Ljava/util/zip/ZipFile;[Ljava/security/MessageDigest;Ljava/util/jar/Manifest;)V", nullptr, $PRIVATE, $method(static_cast<void(JarSigner::*)($ZipEntry*,$ZipFile*,$MessageDigestArray*,$Manifest*)>(&JarSigner::updateDigests)), "java.io.IOException"},
	{"writeBytes", "(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipEntry;Ljava/util/zip/ZipOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JarSigner::*)($ZipFile*,$ZipEntry*,$ZipOutputStream*)>(&JarSigner::writeBytes)), "java.io.IOException"},
	{"writeEntry", "(Ljava/util/zip/ZipFile;Ljava/util/zip/ZipOutputStream;Ljava/util/zip/ZipEntry;)V", nullptr, $PRIVATE, $method(static_cast<void(JarSigner::*)($ZipFile*,$ZipOutputStream*,$ZipEntry*)>(&JarSigner::writeEntry)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JarSigner_InnerClassesInfo_[] = {
	{"jdk.security.jarsigner.JarSigner$JarSignerParameters", "jdk.security.jarsigner.JarSigner", "JarSignerParameters", 0},
	{"jdk.security.jarsigner.JarSigner$SignatureFile", "jdk.security.jarsigner.JarSigner", "SignatureFile", $STATIC},
	{"jdk.security.jarsigner.JarSigner$Builder", "jdk.security.jarsigner.JarSigner", "Builder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JarSigner_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.security.jarsigner.JarSigner",
	"java.lang.Object",
	nullptr,
	_JarSigner_FieldInfo_,
	_JarSigner_MethodInfo_,
	nullptr,
	nullptr,
	_JarSigner_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.security.jarsigner.JarSigner$JarSignerParameters,jdk.security.jarsigner.JarSigner$SignatureFile,jdk.security.jarsigner.JarSigner$Builder"
};

$Object* allocate$JarSigner($Class* clazz) {
	return $of($alloc(JarSigner));
}

$JavaUtilZipFileAccess* JarSigner::JUZFA = nullptr;
$String* JarSigner::META_INF = nullptr;

void JarSigner::init$($JarSigner$Builder* builder) {
	$useLocalCurrentObjectStackCache();
	$set(this, privateKey, $nc(builder)->privateKey);
	$set(this, certChain, builder->certChain);
	if (builder->digestalg != nullptr) {
		$set(this, digestalg, builder->digestalg);
	} else {
		$set(this, digestalg, $new($StringArray, {$($JarSigner$Builder::getDefaultDigestAlgorithm())}));
	}
	$set(this, digestProvider, builder->digestProvider);
	if (builder->sigalg != nullptr) {
		$set(this, sigalg, builder->sigalg);
	} else {
		$set(this, sigalg, $JarSigner$Builder::getDefaultSignatureAlgorithm(this->privateKey));
		if (this->sigalg == nullptr) {
			$throwNew($IllegalArgumentException, $$str({"No signature alg for "_s, $($nc(this->privateKey)->getAlgorithm())}));
		}
	}
	$set(this, sigProvider, builder->sigProvider);
	$set(this, tsaUrl, builder->tsaUrl);
	if (builder->signerName$ == nullptr) {
		$set(this, signerName, "SIGNER"_s);
	} else {
		$set(this, signerName, builder->signerName$);
	}
	$set(this, handler, builder->handler);
	if (builder->tSADigestAlg != nullptr) {
		$set(this, tSADigestAlg, builder->tSADigestAlg);
	} else {
		$set(this, tSADigestAlg, $JarSigner$Builder::getDefaultDigestAlgorithm());
	}
	$set(this, tSAPolicyID, builder->tSAPolicyID);
	this->sectionsonly = builder->sectionsonly;
	this->internalsf = builder->internalsf;
	$set(this, altSigner, builder->altSigner);
	$set(this, altSignerPath, builder->altSignerPath);
	$init($Locale);
	if (this->altSigner != nullptr && !$($nc(this->sigalg)->toUpperCase($Locale::ENGLISH))->contains("WITH"_s)) {
		$throwNew($IllegalArgumentException, $$str({"Customized ContentSigner is not supported for "_s, this->sigalg}));
	}
}

void JarSigner::sign($ZipFile* file, $OutputStream* os) {
	try {
		$var($ZipFile, var$0, $cast($ZipFile, $Objects::requireNonNull(file)));
		sign0(var$0, $cast($OutputStream, $Objects::requireNonNull(os)));
	} catch ($SocketTimeoutException& e) {
		$throwNew($JarSignerException, "Error applying timestamp"_s, e);
	} catch ($CertificateException& e) {
		$throwNew($JarSignerException, "Error applying timestamp"_s, e);
	} catch ($IOException& ioe) {
		$throwNew($JarSignerException, "I/O error"_s, ioe);
	} catch ($NoSuchAlgorithmException& e) {
		$throwNew($JarSignerException, "Error in signer materials"_s, e);
	} catch ($InvalidKeyException& e) {
		$throwNew($JarSignerException, "Error in signer materials"_s, e);
	} catch ($InvalidParameterSpecException& e) {
		$throwNew($JarSignerException, "Error in signer materials"_s, e);
	} catch ($SignatureException& se) {
		$throwNew($JarSignerException, "Error creating signature"_s, se);
	}
}

$String* JarSigner::getDigestAlgorithm() {
	return $nc(this->digestalg)->get(0);
}

$String* JarSigner::getSignatureAlgorithm() {
	return this->sigalg;
}

$URI* JarSigner::getTsa() {
	return this->tsaUrl;
}

$String* JarSigner::getSignerName() {
	return this->signerName;
}

$String* JarSigner::getProperty($String* key) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(key);
	{
		$init($Locale);
		$var($String, s26647$, key->toLowerCase($Locale::US));
		int32_t tmp26647$ = -1;
		switch (s26647$->hashCode()) {
		case 0x70ABEDD6:
			{
				if (s26647$->equals("tsadigestalg"_s)) {
					tmp26647$ = 0;
				}
				break;
			}
		case (int32_t)0x83260D8F:
			{
				if (s26647$->equals("tsapolicyid"_s)) {
					tmp26647$ = 1;
				}
				break;
			}
		case (int32_t)0xA12919D0:
			{
				if (s26647$->equals("internalsf"_s)) {
					tmp26647$ = 2;
				}
				break;
			}
		case 0x27DDB6DA:
			{
				if (s26647$->equals("sectionsonly"_s)) {
					tmp26647$ = 3;
				}
				break;
			}
		case (int32_t)0xDCA268B8:
			{
				if (s26647$->equals("altsignerpath"_s)) {
					tmp26647$ = 4;
				}
				break;
			}
		case (int32_t)0xC3754613:
			{
				if (s26647$->equals("altsigner"_s)) {
					tmp26647$ = 5;
				}
				break;
			}
		}
		switch (tmp26647$) {
		case 0:
			{
				return this->tSADigestAlg;
			}
		case 1:
			{
				return this->tSAPolicyID;
			}
		case 2:
			{
				return $Boolean::toString(this->internalsf);
			}
		case 3:
			{
				return $Boolean::toString(this->sectionsonly);
			}
		case 4:
			{
				return this->altSignerPath;
			}
		case 5:
			{
				return this->altSigner;
			}
		default:
			{
				$throwNew($UnsupportedOperationException, $$str({"Unsupported key "_s, key}));
			}
		}
	}
}

void JarSigner::sign0($ZipFile* zipFile, $OutputStream* os) {
	$useLocalCurrentObjectStackCache();
	$var($MessageDigestArray, digests, nullptr);
	try {
		$assign(digests, $new($MessageDigestArray, $nc(this->digestalg)->length));
		for (int32_t i = 0; i < $nc(this->digestalg)->length; ++i) {
			if (this->digestProvider == nullptr) {
				digests->set(i, $($MessageDigest::getInstance($nc(this->digestalg)->get(i))));
			} else {
				digests->set(i, $($MessageDigest::getInstance($nc(this->digestalg)->get(i), this->digestProvider)));
			}
		}
	} catch ($NoSuchAlgorithmException& asae) {
		$throwNew($AssertionError, $of(asae));
	}
	$var($ZipOutputStream, zos, $new($ZipOutputStream, os));
	$var($Manifest, manifest, $new($Manifest));
	$var($bytes, mfRawBytes, nullptr);
	$var($ZipEntry, mfFile, getManifestFile(zipFile));
	bool mfCreated = mfFile == nullptr;
	if (!mfCreated) {
		$assign(mfRawBytes, $nc($($nc(zipFile)->getInputStream(mfFile)))->readAllBytes());
		manifest->read($$new($ByteArrayInputStream, mfRawBytes));
	} else {
		$var($Attributes, mattr, manifest->getMainAttributes());
		$init($Attributes$Name);
		$nc(mattr)->putValue($($nc($Attributes$Name::MANIFEST_VERSION)->toString()), "1.0"_s);
		$var($String, javaVendor, $System::getProperty("java.vendor"_s));
		$var($String, jdkVersion, $System::getProperty("java.version"_s));
		mattr->putValue("Created-By"_s, $$str({jdkVersion, " ("_s, javaVendor, ")"_s}));
		$init($JarFile);
		$assign(mfFile, $new($ZipEntry, $JarFile::MANIFEST_NAME));
	}
	$var($Vector, mfFiles, $new($Vector));
	bool wasSigned = false;
	{
		$var($Enumeration, enum_, $nc(zipFile)->entries());
		for (; $nc(enum_)->hasMoreElements();) {
			$var($ZipEntry, ze, $cast($ZipEntry, enum_->nextElement()));
			if ($nc($($nc(ze)->getName()))->startsWith(JarSigner::META_INF)) {
				mfFiles->addElement(ze);
				$init($Locale);
				$var($String, zeNameUp, $nc($(ze->getName()))->toUpperCase($Locale::ENGLISH));
				bool var$0 = $SignatureFileVerifier::isBlockOrSF(zeNameUp);
				if (var$0 && !zeNameUp->startsWith($($JarSigner$SignatureFile::getBaseSignatureFilesName(this->signerName)))) {
					wasSigned = true;
				}
				if ($SignatureFileVerifier::isSigningRelated($(ze->getName()))) {
					continue;
				}
			}
			if (manifest->getAttributes($($nc(ze)->getName())) != nullptr) {
				updateDigests(ze, zipFile, digests, manifest);
			} else if (!$nc(ze)->isDirectory()) {
				$var($Attributes, attrs, getDigestAttributes(ze, zipFile, digests));
				$nc($(manifest->getEntries()))->put($(ze->getName()), attrs);
			}
		}
	}
	bool mfModified = false;
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	if (mfCreated || !wasSigned) {
		mfModified = true;
		manifest->write(baos);
		$assign(mfRawBytes, baos->toByteArray());
	} else {
		$var($Manifest, oldManifest, $new($Manifest, static_cast<$InputStream*>($$new($ByteArrayInputStream, mfRawBytes))));
		mfModified = !oldManifest->equals(manifest);
		if (!mfModified) {
		} else {
			manifest->write(baos);
			$var($bytes, mfNewRawBytes, baos->toByteArray());
			baos->reset();
			$var($ManifestDigester, oldMd, $new($ManifestDigester, mfRawBytes));
			$var($ManifestDigester, newMd, $new($ManifestDigester, mfNewRawBytes));
			bool var$1 = $nc($(manifest->getMainAttributes()))->equals($(oldManifest->getMainAttributes()));
			if (var$1) {
				bool var$2 = $nc($(manifest->getEntries()))->isEmpty();
				var$1 = (var$2 || $nc($(oldMd->getMainAttsEntry()))->isProperlyDelimited());
			}
			if (var$1) {
				$nc($(oldMd->getMainAttsEntry()))->reproduceRaw(baos);
			} else {
				$nc($(newMd->getMainAttsEntry()))->reproduceRaw(baos);
			}
			{
				$var($Iterator, i$, $nc($($nc($(manifest->getEntries()))->entrySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
					{
						$var($String, sectionName, $cast($String, $nc(entry)->getKey()));
						$var($Attributes, entryAtts, $cast($Attributes, entry->getValue()));
						bool var$3 = $nc(entryAtts)->equals($(oldManifest->getAttributes(sectionName)));
						if (var$3 && $nc($(oldMd->get(sectionName)))->isProperlyDelimited()) {
							$nc($(oldMd->get(sectionName)))->reproduceRaw(baos);
						} else {
							$nc($(newMd->get(sectionName)))->reproduceRaw(baos);
						}
					}
				}
			}
			$assign(mfRawBytes, baos->toByteArray());
		}
	}
	if (mfModified) {
		$init($JarFile);
		$assign(mfFile, $new($ZipEntry, $JarFile::MANIFEST_NAME));
	}
	if (this->handler != nullptr) {
		if (mfCreated || !mfModified) {
			$nc(this->handler)->accept("adding"_s, $($nc(mfFile)->getName()));
		} else {
			$nc(this->handler)->accept("updating"_s, $($nc(mfFile)->getName()));
		}
	}
	zos->putNextEntry(mfFile);
	zos->write(mfRawBytes);
	$var($ManifestDigester, manDig, $new($ManifestDigester, mfRawBytes));
	$var($JarSigner$SignatureFile, sf, $new($JarSigner$SignatureFile, digests, manifest, manDig, this->signerName, this->sectionsonly));
	$var($bytes, block, nullptr);
	baos->reset();
	sf->write(baos);
	$var($bytes, content, baos->toByteArray());
	if (this->altSigner == nullptr) {
		$var($Function, timestamper, nullptr);
		if (this->tsaUrl != nullptr) {
			$assign(timestamper, static_cast<$Function*>($new(JarSigner$$Lambda$lambda$sign0$0, this)));
		}
		$assign(block, $PKCS7::generateNewSignedData(this->sigalg, this->sigProvider, this->privateKey, this->certChain, content, this->internalsf, false, timestamper));
	} else {
		$var($Signature, signer, $SignatureUtil::fromKey(this->sigalg, static_cast<$Key*>(this->privateKey), this->sigProvider));
		$nc(signer)->update(content);
		$var($bytes, signature, signer->sign());
		$var($ContentSignerParameters, params, $new($JarSigner$JarSignerParameters, this, nullptr, this->tsaUrl, this->tSAPolicyID, this->tSADigestAlg, signature, $(signer->getAlgorithm()), this->certChain, content, zipFile));
		$var($ContentSigner, signingMechanism, loadSigningMechanism(this->altSigner, this->altSignerPath));
		bool var$4 = params->getTimestampingAuthority() != nullptr;
		$assign(block, $nc(signingMechanism)->generateSignedData(params, !this->internalsf, var$4 || params->getTimestampingAuthorityCertificate() != nullptr));
	}
	$var($String, sfFilename, sf->getMetaName());
	$var($String, bkFilename, sf->getBlockName(this->privateKey));
	$var($ZipEntry, sfFile, $new($ZipEntry, sfFilename));
	$var($ZipEntry, bkFile, $new($ZipEntry, bkFilename));
	int64_t time = $System::currentTimeMillis();
	sfFile->setTime(time);
	bkFile->setTime(time);
	zos->putNextEntry(sfFile);
	sf->write(zos);
	if (this->handler != nullptr) {
		if (zipFile->getEntry(sfFilename) != nullptr) {
			$nc(this->handler)->accept("updating"_s, sfFilename);
		} else {
			$nc(this->handler)->accept("adding"_s, sfFilename);
		}
	}
	zos->putNextEntry(bkFile);
	zos->write(block);
	if (this->handler != nullptr) {
		if (zipFile->getEntry(bkFilename) != nullptr) {
			$nc(this->handler)->accept("updating"_s, bkFilename);
		} else {
			$nc(this->handler)->accept("adding"_s, bkFilename);
		}
	}
	for (int32_t i = 0; i < mfFiles->size(); ++i) {
		$var($ZipEntry, ze, $cast($ZipEntry, mfFiles->elementAt(i)));
		$init($JarFile);
		bool var$6 = !$nc($($nc(ze)->getName()))->equalsIgnoreCase($JarFile::MANIFEST_NAME);
		bool var$5 = var$6 && !$nc($(ze->getName()))->equalsIgnoreCase(sfFilename);
		if (var$5 && !$nc($(ze->getName()))->equalsIgnoreCase(bkFilename)) {
			bool var$7 = $nc($(ze->getName()))->startsWith($($JarSigner$SignatureFile::getBaseSignatureFilesName(this->signerName)));
			if (var$7 && $SignatureFileVerifier::isBlockOrSF($(ze->getName()))) {
				if (this->handler != nullptr) {
					$nc(this->handler)->accept("updating"_s, $(ze->getName()));
				}
				continue;
			}
			if (this->handler != nullptr) {
				if (manifest->getAttributes($(ze->getName())) != nullptr) {
					$nc(this->handler)->accept("signing"_s, $(ze->getName()));
				} else if (!ze->isDirectory()) {
					$nc(this->handler)->accept("adding"_s, $(ze->getName()));
				}
			}
			writeEntry(zipFile, zos, ze);
		}
	}
	{
		$var($Enumeration, enum_, zipFile->entries());
		for (; $nc(enum_)->hasMoreElements();) {
			$var($ZipEntry, ze, $cast($ZipEntry, enum_->nextElement()));
			if (!$nc($($nc(ze)->getName()))->startsWith(JarSigner::META_INF)) {
				if (this->handler != nullptr) {
					if (manifest->getAttributes($(ze->getName())) != nullptr) {
						$nc(this->handler)->accept("signing"_s, $(ze->getName()));
					} else {
						$nc(this->handler)->accept("adding"_s, $(ze->getName()));
					}
				}
				writeEntry(zipFile, zos, ze);
			}
		}
	}
	zipFile->close();
	zos->close();
}

void JarSigner::writeEntry($ZipFile* zf, $ZipOutputStream* os, $ZipEntry* ze) {
	$useLocalCurrentObjectStackCache();
	$var($ZipEntry, ze2, $new($ZipEntry, $($nc(ze)->getName())));
	ze2->setMethod($nc(ze)->getMethod());
	ze2->setTime($nc(ze)->getTime());
	ze2->setComment($($nc(ze)->getComment()));
	ze2->setExtra($($nc(ze)->getExtra()));
	int32_t extraAttrs = $nc(JarSigner::JUZFA)->getExtraAttributes(ze);
	if (!this->extraAttrsDetected && extraAttrs != -1) {
		this->extraAttrsDetected = true;
		$init($Event$ReporterCategory);
		$Event::report($Event$ReporterCategory::ZIPFILEATTRS, "detected"_s, $$new($ObjectArray, 0));
	}
	$nc(JarSigner::JUZFA)->setExtraAttributes(ze2, extraAttrs);
	if ($nc(ze)->getMethod() == $ZipEntry::STORED) {
		ze2->setSize(ze->getSize());
		ze2->setCrc(ze->getCrc());
	}
	$nc(os)->putNextEntry(ze2);
	writeBytes(zf, ze, os);
}

void JarSigner::writeBytes($ZipFile* zf, $ZipEntry* ze, $ZipOutputStream* os) {
	$useLocalCurrentObjectStackCache();
	{
		$var($InputStream, is, $nc(zf)->getInputStream(ze));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(is)->transferTo(os);
				} catch ($Throwable& t$) {
					if (is != nullptr) {
						try {
							is->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void JarSigner::updateDigests($ZipEntry* ze, $ZipFile* zf, $MessageDigestArray* digests, $Manifest* mf) {
	$useLocalCurrentObjectStackCache();
	$var($Attributes, attrs, $nc(mf)->getAttributes($($nc(ze)->getName())));
	$var($StringArray, base64Digests, getDigests(ze, zf, digests));
	for (int32_t i = 0; i < $nc(digests)->length; ++i) {
		$var($String, name, nullptr);
		try {
			$var($AlgorithmId, aid, $AlgorithmId::get($($nc(digests->get(i))->getAlgorithm())));
			{
				$var($Iterator, i$, $nc($($nc(attrs)->keySet()))->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Object, key, i$->next());
					{
						if ($instanceOf($Attributes$Name, key)) {
							$var($String, n, $nc($of(key))->toString());
							$init($Locale);
							if ($($nc(n)->toUpperCase($Locale::ENGLISH))->endsWith("-DIGEST"_s)) {
								$var($String, tmp, n->substring(0, n->length() - 7));
								if ($nc($($AlgorithmId::get(tmp)))->equals(aid)) {
									$assign(name, n);
									break;
								}
							}
						}
					}
				}
			}
		} catch ($NoSuchAlgorithmException& nsae) {
		}
		if (name == nullptr) {
			$assign(name, $str({$($nc(digests->get(i))->getAlgorithm()), "-Digest"_s}));
		}
		$nc(attrs)->putValue(name, $nc(base64Digests)->get(i));
	}
}

$Attributes* JarSigner::getDigestAttributes($ZipEntry* ze, $ZipFile* zf, $MessageDigestArray* digests) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, base64Digests, getDigests(ze, zf, digests));
	$var($Attributes, attrs, $new($Attributes));
	for (int32_t i = 0; i < $nc(digests)->length; ++i) {
		attrs->putValue($$str({$($nc(digests->get(i))->getAlgorithm()), "-Digest"_s}), $nc(base64Digests)->get(i));
	}
	return attrs;
}

$ZipEntry* JarSigner::getManifestFile($ZipFile* zf) {
	$useLocalCurrentObjectStackCache();
	$init($JarFile);
	$var($ZipEntry, ze, $nc(zf)->getEntry($JarFile::MANIFEST_NAME));
	if (ze == nullptr) {
		$var($Enumeration, enum_, zf->entries());
		while ($nc(enum_)->hasMoreElements() && ze == nullptr) {
			$assign(ze, $cast($ZipEntry, enum_->nextElement()));
			if (!$nc($JarFile::MANIFEST_NAME)->equalsIgnoreCase($($nc(ze)->getName()))) {
				$assign(ze, nullptr);
			}
		}
	}
	return ze;
}

$StringArray* JarSigner::getDigests($ZipEntry* ze, $ZipFile* zf, $MessageDigestArray* digests) {
	$useLocalCurrentObjectStackCache();
	int32_t n = 0;
	int32_t i = 0;
	{
		$var($InputStream, is, $nc(zf)->getInputStream(ze));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					int64_t left = $nc(ze)->getSize();
					$var($bytes, buffer, $new($bytes, 8192));
					while ((left > 0) && (n = $nc(is)->read(buffer, 0, buffer->length)) != -1) {
						for (i = 0; i < $nc(digests)->length; ++i) {
							$nc(digests->get(i))->update(buffer, 0, n);
						}
						left -= n;
					}
				} catch ($Throwable& t$) {
					if (is != nullptr) {
						try {
							is->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	$var($StringArray, base64Digests, $new($StringArray, $nc(digests)->length));
	for (i = 0; i < digests->length; ++i) {
		base64Digests->set(i, $($nc($($Base64::getEncoder()))->encodeToString($($nc(digests->get(i))->digest()))));
	}
	return base64Digests;
}

$ContentSigner* JarSigner::loadSigningMechanism($String* signerClassName, $String* signerClassPath$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, signerClassPath, signerClassPath$renamed);
	$beforeCallerSensitive();
	if (signerClassPath == nullptr) {
		$assign(signerClassPath, "."_s);
	}
	$var($String, cpString, nullptr);
	$assign(cpString, $PathList::appendPath($($System::getProperty("env.class.path"_s)), nullptr));
	$assign(cpString, $PathList::appendPath($($System::getProperty("java.class.path"_s)), cpString));
	$assign(cpString, $PathList::appendPath(signerClassPath, cpString));
	$var($URLArray, urls, $PathList::pathToURLs(cpString));
	$var($ClassLoader, appClassLoader, $new($URLClassLoader, urls));
	try {
		$Class* signerClass = appClassLoader->loadClass(signerClassName);
		$var($Object, signer, $nc($($nc(signerClass)->getDeclaredConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		return $cast($ContentSigner, signer);
	} catch ($ClassNotFoundException& e) {
		$throwNew($IllegalArgumentException, "Invalid altSigner or altSignerPath"_s, e);
	} catch ($InstantiationException& e) {
		$throwNew($IllegalArgumentException, "Invalid altSigner or altSignerPath"_s, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($IllegalArgumentException, "Invalid altSigner or altSignerPath"_s, e);
	} catch ($ClassCastException& e) {
		$throwNew($IllegalArgumentException, "Invalid altSigner or altSignerPath"_s, e);
	} catch ($NoSuchMethodException& e) {
		$throwNew($IllegalArgumentException, "Invalid altSigner or altSignerPath"_s, e);
	} catch ($InvocationTargetException& e) {
		$throwNew($IllegalArgumentException, "Invalid altSigner or altSignerPath"_s, e);
	}
	$shouldNotReachHere();
}

$PKCS9Attributes* JarSigner::lambda$sign0$0($bytes* s) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($HttpTimestamper, tsa, $new($HttpTimestamper, this->tsaUrl));
		$var($bytes, tsToken, $PKCS7::generateTimestampToken(tsa, this->tSAPolicyID, this->tSADigestAlg, s));
		$init($PKCS9Attribute);
		return $new($PKCS9Attributes, $$new($PKCS9AttributeArray, {$$new($PKCS9Attribute, $PKCS9Attribute::SIGNATURE_TIMESTAMP_TOKEN_OID, tsToken)}));
	} catch ($IOException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($CertificateException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void clinit$JarSigner($Class* class$) {
	$assignStatic(JarSigner::META_INF, "META-INF/"_s);
	$assignStatic(JarSigner::JUZFA, $SharedSecrets::getJavaUtilZipFileAccess());
}

JarSigner::JarSigner() {
}

$Class* JarSigner::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JarSigner$$Lambda$lambda$sign0$0::classInfo$.name)) {
			return JarSigner$$Lambda$lambda$sign0$0::load$(name, initialize);
		}
	}
	$loadClass(JarSigner, name, initialize, &_JarSigner_ClassInfo_, clinit$JarSigner, allocate$JarSigner);
	return class$;
}

$Class* JarSigner::class$ = nullptr;

		} // jarsigner
	} // security
} // jdk