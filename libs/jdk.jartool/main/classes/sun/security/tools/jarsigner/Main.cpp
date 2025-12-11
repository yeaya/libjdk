#include <sun/security/tools/jarsigner/Main.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FileOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Enum.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/MalformedURLException.h>
#include <java/net/SocketTimeoutException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/net/UnknownHostException.h>
#include <java/security/AlgorithmParameters.h>
#include <java/security/CodeSigner.h>
#include <java/security/CryptoPrimitive.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/Key.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/Security.h>
#include <java/security/Timestamp.h>
#include <java/security/UnrecoverableKeyException.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/CertPathValidatorException.h>
#include <java/security/cert/CertSelector.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateExpiredException.h>
#include <java/security/cert/CertificateFactory.h>
#include <java/security/cert/CertificateNotYetValidException.h>
#include <java/security/cert/CertificateParsingException.h>
#include <java/security/cert/PKIXBuilderParameters.h>
#include <java/security/cert/TrustAnchor.h>
#include <java/security/cert/X509Certificate.h>
#include <java/text/Collator.h>
#include <java/text/MessageFormat.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Calendar.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Date.h>
#include <java/util/EnumSet.h>
#include <java/util/Enumeration.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Locale$Category.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <java/util/TimeZone.h>
#include <java/util/Vector.h>
#include <java/util/function/BiConsumer.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/Manifest.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <java/util/zip/ZipEntry.h>
#include <java/util/zip/ZipFile.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <jdk/internal/access/JavaUtilZipFileAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/security/jarsigner/JarSigner$Builder.h>
#include <jdk/security/jarsigner/JarSigner.h>
#include <jdk/security/jarsigner/JarSignerException.h>
#include <sun/security/pkcs/ContentInfo.h>
#include <sun/security/pkcs/PKCS7.h>
#include <sun/security/pkcs/PKCS9Attributes.h>
#include <sun/security/pkcs/SignerInfo.h>
#include <sun/security/timestamp/TimestampToken.h>
#include <sun/security/tools/KeyStoreUtil.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/DisabledAlgorithmConstraints.h>
#include <sun/security/util/Event$Reporter.h>
#include <sun/security/util/Event$ReporterCategory.h>
#include <sun/security/util/Event.h>
#include <sun/security/util/KeyUtil.h>
#include <sun/security/util/ManifestDigester.h>
#include <sun/security/util/Password.h>
#include <sun/security/util/SignatureFileVerifier.h>
#include <sun/security/validator/Validator.h>
#include <sun/security/validator/ValidatorException.h>
#include <sun/security/x509/AlgorithmId.h>
#include <sun/security/x509/NetscapeCertTypeExtension.h>
#include <jcpp.h>

#undef CERTPATH_DISABLED_CHECK
#undef CRLCHECK
#undef DIGEST_PRIMITIVE_SET
#undef ENGLISH
#undef FORMAT
#undef IN_KEYSTORE
#undef JAR_DISABLED_CHECK
#undef JUZFA
#undef LEGACY_CHECK
#undef MESSAGE_DIGEST
#undef MF_MAIN_ATTRS
#undef NONE
#undef NOT_ALIAS
#undef OBJECT_SIGNING
#undef ONE_YEAR
#undef P11KEYSTORE
#undef PRIMARY
#undef PROPERTY_CERTPATH_DISABLED_ALGS
#undef PROPERTY_JAR_DISABLED_ALGS
#undef PROPERTY_SECURITY_LEGACY_ALGS
#undef SIGNATURE
#undef SIGNED_BY_ALIAS
#undef SIG_PRIMITIVE_SET
#undef SIX_MONTHS
#undef TYPE_PKIX
#undef T_EE_EXTENSIONS
#undef VAR_CODE_SIGNING
#undef VAR_TSA_SERVER
#undef VERSION
#undef ZIPFILEATTRS

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $X509CertificateArray = $Array<::java::security::cert::X509Certificate>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FileOutputStream = ::java::io::FileOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MalformedURLException = ::java::net::MalformedURLException;
using $SocketTimeoutException = ::java::net::SocketTimeoutException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $UnknownHostException = ::java::net::UnknownHostException;
using $AlgorithmParameters = ::java::security::AlgorithmParameters;
using $CodeSigner = ::java::security::CodeSigner;
using $CryptoPrimitive = ::java::security::CryptoPrimitive;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Key = ::java::security::Key;
using $KeyStore = ::java::security::KeyStore;
using $KeyStoreException = ::java::security::KeyStoreException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $Security = ::java::security::Security;
using $Timestamp = ::java::security::Timestamp;
using $UnrecoverableKeyException = ::java::security::UnrecoverableKeyException;
using $CertPath = ::java::security::cert::CertPath;
using $CertPathValidatorException = ::java::security::cert::CertPathValidatorException;
using $CertSelector = ::java::security::cert::CertSelector;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateExpiredException = ::java::security::cert::CertificateExpiredException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $CertificateNotYetValidException = ::java::security::cert::CertificateNotYetValidException;
using $CertificateParsingException = ::java::security::cert::CertificateParsingException;
using $PKIXBuilderParameters = ::java::security::cert::PKIXBuilderParameters;
using $TrustAnchor = ::java::security::cert::TrustAnchor;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Collator = ::java::text::Collator;
using $MessageFormat = ::java::text::MessageFormat;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Calendar = ::java::util::Calendar;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Date = ::java::util::Date;
using $EnumSet = ::java::util::EnumSet;
using $Enumeration = ::java::util::Enumeration;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Locale$Category = ::java::util::Locale$Category;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;
using $TimeZone = ::java::util::TimeZone;
using $Vector = ::java::util::Vector;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Attributes = ::java::util::jar::Attributes;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Manifest = ::java::util::jar::Manifest;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $ZipFile = ::java::util::zip::ZipFile;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $JavaUtilZipFileAccess = ::jdk::internal::access::JavaUtilZipFileAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $JarSigner = ::jdk::security::jarsigner::JarSigner;
using $JarSigner$Builder = ::jdk::security::jarsigner::JarSigner$Builder;
using $JarSignerException = ::jdk::security::jarsigner::JarSignerException;
using $ContentInfo = ::sun::security::pkcs::ContentInfo;
using $PKCS7 = ::sun::security::pkcs::PKCS7;
using $SignerInfo = ::sun::security::pkcs::SignerInfo;
using $TimestampToken = ::sun::security::timestamp::TimestampToken;
using $KeyStoreUtil = ::sun::security::tools::KeyStoreUtil;
using $BitArray = ::sun::security::util::BitArray;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerValue = ::sun::security::util::DerValue;
using $DisabledAlgorithmConstraints = ::sun::security::util::DisabledAlgorithmConstraints;
using $Event = ::sun::security::util::Event;
using $Event$Reporter = ::sun::security::util::Event$Reporter;
using $Event$ReporterCategory = ::sun::security::util::Event$ReporterCategory;
using $KeyUtil = ::sun::security::util::KeyUtil;
using $ManifestDigester = ::sun::security::util::ManifestDigester;
using $Password = ::sun::security::util::Password;
using $SignatureFileVerifier = ::sun::security::util::SignatureFileVerifier;
using $Validator = ::sun::security::validator::Validator;
using $ValidatorException = ::sun::security::validator::ValidatorException;
using $AlgorithmId = ::sun::security::x509::AlgorithmId;
using $NetscapeCertTypeExtension = ::sun::security::x509::NetscapeCertTypeExtension;

namespace sun {
	namespace security {
		namespace tools {
			namespace jarsigner {

class Main$$Lambda$lambda$parseArgs$0 : public $Predicate {
	$class(Main$$Lambda$lambda$parseArgs$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* x) override {
		 return Main::lambda$parseArgs$0($cast($String, x));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$parseArgs$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$parseArgs$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$parseArgs$0::*)()>(&Main$$Lambda$lambda$parseArgs$0::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$parseArgs$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.tools.jarsigner.Main$$Lambda$lambda$parseArgs$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$parseArgs$0::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$parseArgs$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$parseArgs$0::class$ = nullptr;

class Main$$Lambda$println$1 : public $Consumer {
	$class(Main$$Lambda$println$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->println($cast($String, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$println$1>());
	}
	$PrintStream* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Main$$Lambda$println$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Main$$Lambda$println$1, inst$)},
	{}
};
$MethodInfo Main$$Lambda$println$1::methodInfos[3] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$println$1::*)($PrintStream*)>(&Main$$Lambda$println$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$println$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.tools.jarsigner.Main$$Lambda$println$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* Main$$Lambda$println$1::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$println$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$println$1::class$ = nullptr;

class Main$$Lambda$lambda$signJar$1$2 : public $BiConsumer {
	$class(Main$$Lambda$lambda$signJar$1$2, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$() {
	}
	virtual void accept(Object$* action, Object$* file) override {
		Main::lambda$signJar$1($cast($String, action), $cast($String, file));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$signJar$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$signJar$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$signJar$1$2::*)()>(&Main$$Lambda$lambda$signJar$1$2::init$))},
	{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$signJar$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.tools.jarsigner.Main$$Lambda$lambda$signJar$1$2",
	"java.lang.Object",
	"java.util.function.BiConsumer",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$signJar$1$2::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$signJar$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$signJar$1$2::class$ = nullptr;

class Main$$Lambda$lambda$signJar$2$3 : public $Event$Reporter {
	$class(Main$$Lambda$lambda$signJar$2$3, $NO_CLASS_INIT, $Event$Reporter)
public:
	void init$() {
	}
	virtual void handle($String* t, $ObjectArray* o) override {
		Main::lambda$signJar$2(t, o);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$signJar$2$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$signJar$2$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$signJar$2$3::*)()>(&Main$$Lambda$lambda$signJar$2$3::init$))},
	{"handle", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$signJar$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.tools.jarsigner.Main$$Lambda$lambda$signJar$2$3",
	"java.lang.Object",
	"sun.security.util.Event$Reporter",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$signJar$2$3::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$signJar$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$signJar$2$3::class$ = nullptr;

class Main$$Lambda$lambda$loadKeyStore$3$4 : public $Function {
	$class(Main$$Lambda$lambda$loadKeyStore$3$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* c) override {
		 return $of(Main::lambda$loadKeyStore$3($cast($X509Certificate, c)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$loadKeyStore$3$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$loadKeyStore$3$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$loadKeyStore$3$4::*)()>(&Main$$Lambda$lambda$loadKeyStore$3$4::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$loadKeyStore$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.tools.jarsigner.Main$$Lambda$lambda$loadKeyStore$3$4",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$loadKeyStore$3$4::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$loadKeyStore$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$loadKeyStore$3$4::class$ = nullptr;

class Main$$Lambda$lambda$loadKeyStore$4$5 : public $Event$Reporter {
	$class(Main$$Lambda$lambda$loadKeyStore$4$5, $NO_CLASS_INIT, $Event$Reporter)
public:
	void init$() {
	}
	virtual void handle($String* t, $ObjectArray* o) override {
		Main::lambda$loadKeyStore$4(t, o);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Main$$Lambda$lambda$loadKeyStore$4$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Main$$Lambda$lambda$loadKeyStore$4$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main$$Lambda$lambda$loadKeyStore$4$5::*)()>(&Main$$Lambda$lambda$loadKeyStore$4$5::init$))},
	{"handle", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Main$$Lambda$lambda$loadKeyStore$4$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.security.tools.jarsigner.Main$$Lambda$lambda$loadKeyStore$4$5",
	"java.lang.Object",
	"sun.security.util.Event$Reporter",
	nullptr,
	methodInfos
};
$Class* Main$$Lambda$lambda$loadKeyStore$4$5::load$($String* name, bool initialize) {
	$loadClass(Main$$Lambda$lambda$loadKeyStore$4$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Main$$Lambda$lambda$loadKeyStore$4$5::class$ = nullptr;

$FieldInfo _Main_FieldInfo_[] = {
	{"rb", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, rb)},
	{"collator", "Ljava/text/Collator;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, collator)},
	{"NONE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, NONE)},
	{"P11KEYSTORE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, P11KEYSTORE)},
	{"SIX_MONTHS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, SIX_MONTHS)},
	{"ONE_YEAR", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Main, ONE_YEAR)},
	{"JAR_DISABLED_CHECK", "Lsun/security/util/DisabledAlgorithmConstraints;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, JAR_DISABLED_CHECK)},
	{"CERTPATH_DISABLED_CHECK", "Lsun/security/util/DisabledAlgorithmConstraints;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, CERTPATH_DISABLED_CHECK)},
	{"LEGACY_CHECK", "Lsun/security/util/DisabledAlgorithmConstraints;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Main, LEGACY_CHECK)},
	{"DIGEST_PRIMITIVE_SET", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Main, DIGEST_PRIMITIVE_SET)},
	{"SIG_PRIMITIVE_SET", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/CryptoPrimitive;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Main, SIG_PRIMITIVE_SET)},
	{"extraAttrsDetected", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Main, extraAttrsDetected)},
	{"VERSION", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Main, VERSION)},
	{"IN_KEYSTORE", "I", nullptr, $STATIC | $FINAL, $constField(Main, IN_KEYSTORE)},
	{"NOT_ALIAS", "I", nullptr, $STATIC | $FINAL, $constField(Main, NOT_ALIAS)},
	{"SIGNED_BY_ALIAS", "I", nullptr, $STATIC | $FINAL, $constField(Main, SIGNED_BY_ALIAS)},
	{"JUZFA", "Ljdk/internal/access/JavaUtilZipFileAccess;", nullptr, $STATIC | $FINAL, $staticField(Main, JUZFA)},
	{"certChain", "[Ljava/security/cert/X509Certificate;", nullptr, 0, $field(Main, certChain)},
	{"privateKey", "Ljava/security/PrivateKey;", nullptr, 0, $field(Main, privateKey)},
	{"store", "Ljava/security/KeyStore;", nullptr, 0, $field(Main, store)},
	{"keystore", "Ljava/lang/String;", nullptr, 0, $field(Main, keystore)},
	{"nullStream", "Z", nullptr, 0, $field(Main, nullStream)},
	{"token", "Z", nullptr, 0, $field(Main, token)},
	{"jarfile", "Ljava/lang/String;", nullptr, 0, $field(Main, jarfile)},
	{"alias", "Ljava/lang/String;", nullptr, 0, $field(Main, alias)},
	{"ckaliases", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(Main, ckaliases)},
	{"storepass", "[C", nullptr, 0, $field(Main, storepass)},
	{"protectedPath", "Z", nullptr, 0, $field(Main, protectedPath)},
	{"storetype", "Ljava/lang/String;", nullptr, 0, $field(Main, storetype)},
	{"providerName", "Ljava/lang/String;", nullptr, 0, $field(Main, providerName)},
	{"providers", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(Main, providers)},
	{"providerClasses", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(Main, providerClasses)},
	{"providerArgs", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", 0, $field(Main, providerArgs)},
	{"keypass", "[C", nullptr, 0, $field(Main, keypass)},
	{"sigfile", "Ljava/lang/String;", nullptr, 0, $field(Main, sigfile)},
	{"sigalg", "Ljava/lang/String;", nullptr, 0, $field(Main, sigalg)},
	{"digestalg", "Ljava/lang/String;", nullptr, 0, $field(Main, digestalg)},
	{"signedjar", "Ljava/lang/String;", nullptr, 0, $field(Main, signedjar)},
	{"tsaUrl", "Ljava/lang/String;", nullptr, 0, $field(Main, tsaUrl)},
	{"tsaAlias", "Ljava/lang/String;", nullptr, 0, $field(Main, tsaAlias)},
	{"altCertChain", "Ljava/lang/String;", nullptr, 0, $field(Main, altCertChain)},
	{"tSAPolicyID", "Ljava/lang/String;", nullptr, 0, $field(Main, tSAPolicyID)},
	{"tSADigestAlg", "Ljava/lang/String;", nullptr, 0, $field(Main, tSADigestAlg)},
	{"verify", "Z", nullptr, 0, $field(Main, verify)},
	{"verbose", "Ljava/lang/String;", nullptr, 0, $field(Main, verbose)},
	{"showcerts", "Z", nullptr, 0, $field(Main, showcerts)},
	{"debug", "Z", nullptr, 0, $field(Main, debug)},
	{"signManifest", "Z", nullptr, 0, $field(Main, signManifest)},
	{"externalSF", "Z", nullptr, 0, $field(Main, externalSF)},
	{"strict", "Z", nullptr, 0, $field(Main, strict)},
	{"revocationCheck", "Z", nullptr, 0, $field(Main, revocationCheck)},
	{"altSignerClass", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Main, altSignerClass)},
	{"altSignerClasspath", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Main, altSignerClasspath)},
	{"zipFile", "Ljava/util/zip/ZipFile;", nullptr, $PRIVATE, $field(Main, zipFile)},
	{"hasExpiringCert", "Z", nullptr, $PRIVATE, $field(Main, hasExpiringCert)},
	{"hasExpiringTsaCert", "Z", nullptr, $PRIVATE, $field(Main, hasExpiringTsaCert)},
	{"noTimestamp", "Z", nullptr, $PRIVATE, $field(Main, noTimestamp)},
	{"expireDate", "Ljava/util/Date;", nullptr, $PRIVATE, $field(Main, expireDate)},
	{"tsaExpireDate", "Ljava/util/Date;", nullptr, $PRIVATE, $field(Main, tsaExpireDate)},
	{"hasTimestampBlock", "Z", nullptr, 0, $field(Main, hasTimestampBlock)},
	{"weakPublicKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE, $field(Main, weakPublicKey)},
	{"disabledAlgFound", "Z", nullptr, $PRIVATE, $field(Main, disabledAlgFound)},
	{"legacyDigestAlg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Main, legacyDigestAlg)},
	{"legacyTsaDigestAlg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Main, legacyTsaDigestAlg)},
	{"legacySigAlg", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Main, legacySigAlg)},
	{"legacyAlg", "I", nullptr, $PRIVATE, $field(Main, legacyAlg)},
	{"disabledAlg", "I", nullptr, $PRIVATE, $field(Main, disabledAlg)},
	{"hasExpiredCert", "Z", nullptr, $PRIVATE, $field(Main, hasExpiredCert)},
	{"hasExpiredTsaCert", "Z", nullptr, $PRIVATE, $field(Main, hasExpiredTsaCert)},
	{"notYetValidCert", "Z", nullptr, $PRIVATE, $field(Main, notYetValidCert)},
	{"chainNotValidated", "Z", nullptr, $PRIVATE, $field(Main, chainNotValidated)},
	{"tsaChainNotValidated", "Z", nullptr, $PRIVATE, $field(Main, tsaChainNotValidated)},
	{"notSignedByAlias", "Z", nullptr, $PRIVATE, $field(Main, notSignedByAlias)},
	{"aliasNotInStore", "Z", nullptr, $PRIVATE, $field(Main, aliasNotInStore)},
	{"hasUnsignedEntry", "Z", nullptr, $PRIVATE, $field(Main, hasUnsignedEntry)},
	{"badKeyUsage", "Z", nullptr, $PRIVATE, $field(Main, badKeyUsage)},
	{"badExtendedKeyUsage", "Z", nullptr, $PRIVATE, $field(Main, badExtendedKeyUsage)},
	{"badNetscapeCertType", "Z", nullptr, $PRIVATE, $field(Main, badNetscapeCertType)},
	{"signerSelfSigned", "Z", nullptr, $PRIVATE, $field(Main, signerSelfSigned)},
	{"chainNotValidatedReason", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(Main, chainNotValidatedReason)},
	{"tsaChainNotValidatedReason", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(Main, tsaChainNotValidatedReason)},
	{"pkixParameters", "Ljava/security/cert/PKIXBuilderParameters;", nullptr, 0, $field(Main, pkixParameters)},
	{"trustedCerts", "Ljava/util/Set;", "Ljava/util/Set<Ljava/security/cert/X509Certificate;>;", 0, $field(Main, trustedCerts)},
	{"validityTimeForm", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC, $staticField(Main, validityTimeForm)},
	{"notYetTimeForm", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC, $staticField(Main, notYetTimeForm)},
	{"expiredTimeForm", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC, $staticField(Main, expiredTimeForm)},
	{"expiringTimeForm", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC, $staticField(Main, expiringTimeForm)},
	{"signTimeForm", "Ljava/text/MessageFormat;", nullptr, $PRIVATE | $STATIC, $staticField(Main, signTimeForm)},
	{"cacheForInKS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/security/CodeSigner;Ljava/lang/Integer;>;", $PRIVATE, $field(Main, cacheForInKS)},
	{"storeHash", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/security/cert/Certificate;Ljava/lang/String;>;", 0, $field(Main, storeHash)},
	{"cacheForSignerInfo", "Ljava/util/Map;", "Ljava/util/Map<Ljava/security/CodeSigner;Ljava/lang/String;>;", 0, $field(Main, cacheForSignerInfo)},
	{}
};

$MethodInfo _Main_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Main::*)()>(&Main::init$))},
	{"certsAndTSInfo", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/security/Timestamp;)Ljava/lang/String;", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<+Ljava/security/cert/Certificate;>;Ljava/security/Timestamp;)Ljava/lang/String;", $PRIVATE, $method(static_cast<$String*(Main::*)($String*,$String*,$List*,$Timestamp*)>(&Main::certsAndTSInfo)), "java.lang.Exception"},
	{"checkCertUsage", "(Ljava/security/cert/X509Certificate;[Z)V", nullptr, 0},
	{"checkWeakAlg", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Main::checkWeakAlg))},
	{"checkWeakKey", "(Ljava/security/PublicKey;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($PublicKey*)>(&Main::checkWeakKey))},
	{"checkWeakSign", "(Ljava/lang/String;Ljava/util/Set;Z)V", "(Ljava/lang/String;Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Z)V", $PRIVATE, $method(static_cast<void(Main::*)($String*,$Set*,bool)>(&Main::checkWeakSign))},
	{"checkWeakSign", "(Ljava/security/PrivateKey;)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)($PrivateKey*)>(&Main::checkWeakSign))},
	{"displayMessagesAndResult", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(Main::*)(bool)>(&Main::displayMessagesAndResult))},
	{"error", "(Ljava/lang/String;)V", nullptr, 0},
	{"error", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, 0},
	{"fullusage", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Main::fullusage))},
	{"getAliasInfo", "(Ljava/lang/String;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"getPass", "(Ljava/lang/String;Ljava/lang/String;)[C", nullptr, $STATIC, $method(static_cast<$chars*(*)($String*,$String*)>(&Main::getPass))},
	{"getPass", "(Ljava/lang/String;)[C", nullptr, 0},
	{"getTsaCert", "(Ljava/lang/String;)Ljava/security/cert/X509Certificate;", nullptr, 0},
	{"inKeyStore", "([Ljava/security/CodeSigner;)I", nullptr, 0},
	{"inKeyStoreForOneSigner", "(Ljava/security/CodeSigner;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Main::*)($CodeSigner*)>(&Main::inKeyStoreForOneSigner))},
	{"lambda$loadKeyStore$3", "(Ljava/security/cert/X509Certificate;)Ljava/security/cert/TrustAnchor;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$TrustAnchor*(*)($X509Certificate*)>(&Main::lambda$loadKeyStore$3))},
	{"lambda$loadKeyStore$4", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$ObjectArray*)>(&Main::lambda$loadKeyStore$4))},
	{"lambda$parseArgs$0", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*)>(&Main::lambda$parseArgs$0))},
	{"lambda$signJar$1", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*)>(&Main::lambda$signJar$1))},
	{"lambda$signJar$2", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$ObjectArray*)>(&Main::lambda$signJar$2))},
	{"loadKeyStore", "(Ljava/lang/String;Z)V", nullptr, 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Main::main)), "java.lang.Exception"},
	{"parseArgs", "([Ljava/lang/String;)[Ljava/lang/String;", nullptr, 0, nullptr, "java.lang.Exception"},
	{"printCert", "(ZLjava/lang/String;Ljava/security/cert/Certificate;Ljava/util/Date;Z)Ljava/lang/String;", nullptr, 0, nullptr, "java.lang.Exception"},
	{"printTimestamp", "(Ljava/lang/String;Ljava/security/Timestamp;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Main::*)($String*,$Timestamp*)>(&Main::printTimestamp))},
	{"run", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"signJar", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"signatureRelated", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Main::*)($String*)>(&Main::signatureRelated))},
	{"signerInfo", "(Ljava/security/CodeSigner;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Main::*)($CodeSigner*,$String*)>(&Main::signerInfo)), "java.lang.Exception"},
	{"usage", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Main::usage))},
	{"usageNoArg", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Main::usageNoArg))},
	{"validateCertChain", "(Ljava/lang/String;Ljava/util/List;Ljava/security/Timestamp;)V", "(Ljava/lang/String;Ljava/util/List<+Ljava/security/cert/Certificate;>;Ljava/security/Timestamp;)V", 0, nullptr, "java.lang.Exception"},
	{"verifyJar", "(Ljava/lang/String;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"verifyWithWeak", "(Ljava/lang/String;Ljava/util/Set;Z)Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/Set<Ljava/security/CryptoPrimitive;>;Z)Ljava/lang/String;", $PRIVATE, $method(static_cast<$String*(Main::*)($String*,$Set*,bool)>(&Main::verifyWithWeak))},
	{"verifyWithWeak", "(Ljava/security/PublicKey;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Main::*)($PublicKey*)>(&Main::verifyWithWeak))},
	{}
};

$ClassInfo _Main_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.tools.jarsigner.Main",
	"java.lang.Object",
	nullptr,
	_Main_FieldInfo_,
	_Main_MethodInfo_
};

$Object* allocate$Main($Class* clazz) {
	return $of($alloc(Main));
}

$ResourceBundle* Main::rb = nullptr;
$Collator* Main::collator = nullptr;
$String* Main::NONE = nullptr;
$String* Main::P11KEYSTORE = nullptr;
$DisabledAlgorithmConstraints* Main::JAR_DISABLED_CHECK = nullptr;
$DisabledAlgorithmConstraints* Main::CERTPATH_DISABLED_CHECK = nullptr;
$DisabledAlgorithmConstraints* Main::LEGACY_CHECK = nullptr;
$Set* Main::DIGEST_PRIMITIVE_SET = nullptr;
$Set* Main::SIG_PRIMITIVE_SET = nullptr;
bool Main::extraAttrsDetected = false;
$String* Main::VERSION = nullptr;
$JavaUtilZipFileAccess* Main::JUZFA = nullptr;
$MessageFormat* Main::validityTimeForm = nullptr;
$MessageFormat* Main::notYetTimeForm = nullptr;
$MessageFormat* Main::expiredTimeForm = nullptr;
$MessageFormat* Main::expiringTimeForm = nullptr;
$MessageFormat* Main::signTimeForm = nullptr;

void Main::init$() {
	this->nullStream = false;
	this->token = false;
	$set(this, ckaliases, $new($ArrayList));
	$set(this, providers, nullptr);
	$set(this, providerClasses, nullptr);
	$set(this, providerArgs, $new($HashMap));
	this->verify = false;
	$set(this, verbose, nullptr);
	this->showcerts = false;
	this->debug = false;
	this->signManifest = true;
	this->externalSF = true;
	this->strict = false;
	this->revocationCheck = false;
	$set(this, altSignerClass, nullptr);
	$set(this, altSignerClasspath, nullptr);
	$set(this, zipFile, nullptr);
	this->hasExpiringCert = false;
	this->hasExpiringTsaCert = false;
	this->noTimestamp = true;
	$set(this, expireDate, nullptr);
	$set(this, tsaExpireDate, nullptr);
	this->hasTimestampBlock = false;
	$set(this, weakPublicKey, nullptr);
	this->disabledAlgFound = false;
	$set(this, legacyDigestAlg, nullptr);
	$set(this, legacyTsaDigestAlg, nullptr);
	$set(this, legacySigAlg, nullptr);
	this->legacyAlg = 0;
	this->disabledAlg = 0;
	this->hasExpiredCert = false;
	this->hasExpiredTsaCert = false;
	this->notYetValidCert = false;
	this->chainNotValidated = false;
	this->tsaChainNotValidated = false;
	this->notSignedByAlias = false;
	this->aliasNotInStore = false;
	this->hasUnsignedEntry = false;
	this->badKeyUsage = false;
	this->badExtendedKeyUsage = false;
	this->badNetscapeCertType = false;
	this->signerSelfSigned = false;
	$set(this, chainNotValidatedReason, nullptr);
	$set(this, tsaChainNotValidatedReason, nullptr);
	$set(this, trustedCerts, $new($HashSet));
	$set(this, cacheForInKS, $new($IdentityHashMap));
	$set(this, storeHash, $new($Hashtable));
	$set(this, cacheForSignerInfo, $new($IdentityHashMap));
}

void Main::main($StringArray* args) {
	$init(Main);
	$var(Main, js, $new(Main));
	js->run(args);
}

void Main::run($StringArray* args$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, args, args$renamed);
	$beforeCallerSensitive();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$assign(args, parseArgs(args));
				if (this->providers != nullptr) {
					{
						$var($Iterator, i$, $nc(this->providers)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, provName, $cast($String, i$->next()));
							{
								try {
									$KeyStoreUtil::loadProviderByName(provName, $cast($String, $($nc(this->providerArgs)->get(provName))));
									if (this->debug) {
										$nc($System::out)->println($$str({"loadProviderByName: "_s, provName}));
									}
								} catch ($IllegalArgumentException& e) {
									$throwNew($Exception, $($String::format($($nc(Main::rb)->getString("provider.name.not.found"_s)), $$new($ObjectArray, {$of(provName)}))));
								}
							}
						}
					}
				}
				if (this->providerClasses != nullptr) {
					$var($ClassLoader, cl, $ClassLoader::getSystemClassLoader());
					{
						$var($Iterator, i$, $nc(this->providerClasses)->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, provClass, $cast($String, i$->next()));
							{
								try {
									$KeyStoreUtil::loadProviderByClass(provClass, $cast($String, $($nc(this->providerArgs)->get(provClass))), cl);
									if (this->debug) {
										$nc($System::out)->println($$str({"loadProviderByClass: "_s, provClass}));
									}
								} catch ($ClassCastException& cce) {
									$throwNew($Exception, $($String::format($($nc(Main::rb)->getString("provclass.not.a.provider"_s)), $$new($ObjectArray, {$of(provClass)}))));
								} catch ($IllegalArgumentException& e) {
									$var($String, var$1, $String::format($($nc(Main::rb)->getString("provider.class.not.found"_s)), $$new($ObjectArray, {$of(provClass)})));
									$throwNew($Exception, var$1, $(e->getCause()));
								}
							}
						}
					}
				}
				if (this->verify) {
					try {
						loadKeyStore(this->keystore, false);
					} catch ($Exception& e) {
						if ((this->keystore != nullptr) || (this->storepass != nullptr)) {
							$var($String, var$2, $($nc(Main::rb)->getString("jarsigner.error."_s)));
							$nc($System::out)->println($$concat(var$2, $(e->getMessage())));
							if (this->debug) {
								e->printStackTrace();
							}
							$System::exit(1);
						}
					}
					verifyJar(this->jarfile);
				} else {
					loadKeyStore(this->keystore, true);
					getAliasInfo(this->alias);
					signJar(this->jarfile, this->alias);
				}
			} catch ($Exception& e) {
				$nc($System::out)->println($$str({$($nc(Main::rb)->getString("jarsigner.error."_s)), e}));
				if (this->debug) {
					e->printStackTrace();
				}
				$System::exit(1);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			if (this->keypass != nullptr) {
				$Arrays::fill(this->keypass, u' ');
				$set(this, keypass, nullptr);
			}
			if (this->storepass != nullptr) {
				$Arrays::fill(this->storepass, u' ');
				$set(this, storepass, nullptr);
			}
			$init($Event$ReporterCategory);
			$Event::clearReportListener($Event$ReporterCategory::CRLCHECK);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (this->strict) {
		int32_t exitCode = 0;
		if (this->disabledAlg != 0 || this->chainNotValidated || this->hasExpiredCert || this->hasExpiredTsaCert || this->notYetValidCert || this->signerSelfSigned) {
			exitCode |= 4;
		}
		if (this->badKeyUsage || this->badExtendedKeyUsage || this->badNetscapeCertType) {
			exitCode |= 8;
		}
		if (this->hasUnsignedEntry) {
			exitCode |= 16;
		}
		if (this->notSignedByAlias || this->aliasNotInStore) {
			exitCode |= 32;
		}
		if (this->tsaChainNotValidated) {
			exitCode |= 64;
		}
		if (exitCode != 0) {
			$System::exit(exitCode);
		}
	}
}

$StringArray* Main::parseArgs($StringArray* args$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, args, args$renamed);
	int32_t n = 0;
	if ($nc(args)->length == 0) {
		fullusage();
	}
	$var($String, confFile, nullptr);
	$var($String, command, "-sign"_s);
	for (n = 0; n < $nc(args)->length; ++n) {
		if ($nc(Main::collator)->compare(args->get(n), "-verify"_s) == 0) {
			$assign(command, "-verify"_s);
		} else if ($nc(Main::collator)->compare(args->get(n), "-conf"_s) == 0) {
			if (n == args->length - 1) {
				usageNoArg();
			}
			$assign(confFile, args->get(++n));
		}
	}
	if (confFile != nullptr) {
		$assign(args, $KeyStoreUtil::expandArgs("jarsigner"_s, confFile, command, nullptr, args));
	}
	this->debug = $nc($($Arrays::stream(args)))->anyMatch(static_cast<$Predicate*>($$new(Main$$Lambda$lambda$parseArgs$0)));
	if (this->debug) {
		$nc($System::out)->println($$str({"Command line args: "_s, $($Arrays::toString(args))}));
	}
	for (n = 0; n < $nc(args)->length; ++n) {
		$var($String, flags, args->get(n));
		$var($String, modifier, nullptr);
		if ($nc(flags)->startsWith("-"_s)) {
			int32_t pos = flags->indexOf((int32_t)u':');
			if (pos > 0) {
				$assign(modifier, flags->substring(pos + 1));
				$assign(flags, flags->substring(0, pos));
			}
		}
		if (!$nc(flags)->startsWith("-"_s)) {
			if (this->jarfile == nullptr) {
				$set(this, jarfile, flags);
			} else {
				$set(this, alias, flags);
				$nc(this->ckaliases)->add(this->alias);
			}
		} else if ($nc(Main::collator)->compare(flags, "-conf"_s) == 0) {
			if (++n == args->length) {
				usageNoArg();
			}
		} else if ($nc(Main::collator)->compare(flags, "-keystore"_s) == 0) {
			if (++n == args->length) {
				usageNoArg();
			}
			$set(this, keystore, args->get(n));
		} else if ($nc(Main::collator)->compare(flags, "-storepass"_s) == 0) {
			if (++n == args->length) {
				usageNoArg();
			}
			$set(this, storepass, getPass(modifier, args->get(n)));
		} else if ($nc(Main::collator)->compare(flags, "-storetype"_s) == 0) {
			if (++n == args->length) {
				usageNoArg();
			}
			$set(this, storetype, args->get(n));
		} else if ($nc(Main::collator)->compare(flags, "-providerName"_s) == 0) {
			if (++n == args->length) {
				usageNoArg();
			}
			$set(this, providerName, args->get(n));
		} else {
			bool var$1 = $nc(Main::collator)->compare(flags, "-provider"_s) == 0;
			if (var$1 || $nc(Main::collator)->compare(flags, "-providerClass"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				if (this->providerClasses == nullptr) {
					$set(this, providerClasses, $new($ArrayList, 3));
				}
				$nc(this->providerClasses)->add(args->get(n));
				if (args->length > (n + 1)) {
					$assign(flags, args->get(n + 1));
					if ($nc(Main::collator)->compare(flags, "-providerArg"_s) == 0) {
						if (args->length == (n + 2)) {
							usageNoArg();
						}
						$nc(this->providerArgs)->put(args->get(n), args->get(n + 2));
						n += 2;
					}
				}
			} else if ($nc(Main::collator)->compare(flags, "-addprovider"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				if (this->providers == nullptr) {
					$set(this, providers, $new($ArrayList, 3));
				}
				$nc(this->providers)->add(args->get(n));
				if (args->length > (n + 1)) {
					$assign(flags, args->get(n + 1));
					if ($nc(Main::collator)->compare(flags, "-providerArg"_s) == 0) {
						if (args->length == (n + 2)) {
							usageNoArg();
						}
						$nc(this->providerArgs)->put(args->get(n), args->get(n + 2));
						n += 2;
					}
				}
			} else if ($nc(Main::collator)->compare(flags, "-protected"_s) == 0) {
				this->protectedPath = true;
			} else if ($nc(Main::collator)->compare(flags, "-certchain"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, altCertChain, args->get(n));
			} else if ($nc(Main::collator)->compare(flags, "-tsapolicyid"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, tSAPolicyID, args->get(n));
			} else if ($nc(Main::collator)->compare(flags, "-tsadigestalg"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, tSADigestAlg, args->get(n));
			} else if ($nc(Main::collator)->compare(flags, "-debug"_s) == 0) {
			} else if ($nc(Main::collator)->compare(flags, "-keypass"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, keypass, getPass(modifier, args->get(n)));
			} else if ($nc(Main::collator)->compare(flags, "-sigfile"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, sigfile, args->get(n));
			} else if ($nc(Main::collator)->compare(flags, "-signedjar"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, signedjar, args->get(n));
			} else if ($nc(Main::collator)->compare(flags, "-tsa"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, tsaUrl, args->get(n));
			} else if ($nc(Main::collator)->compare(flags, "-tsacert"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, tsaAlias, args->get(n));
			} else if ($nc(Main::collator)->compare(flags, "-altsigner"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, altSignerClass, args->get(n));
				$nc($System::err)->println($$str({$($nc(Main::rb)->getString("This.option.is.forremoval"_s)), "-altsigner"_s}));
			} else if ($nc(Main::collator)->compare(flags, "-altsignerpath"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, altSignerClasspath, args->get(n));
				$nc($System::err)->println($$str({$($nc(Main::rb)->getString("This.option.is.forremoval"_s)), "-altsignerpath"_s}));
			} else if ($nc(Main::collator)->compare(flags, "-sectionsonly"_s) == 0) {
				this->signManifest = false;
			} else if ($nc(Main::collator)->compare(flags, "-internalsf"_s) == 0) {
				this->externalSF = false;
			} else if ($nc(Main::collator)->compare(flags, "-verify"_s) == 0) {
				this->verify = true;
			} else if ($nc(Main::collator)->compare(flags, "-verbose"_s) == 0) {
				$set(this, verbose, (modifier != nullptr) ? modifier : "all"_s);
			} else if ($nc(Main::collator)->compare(flags, "-sigalg"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, sigalg, args->get(n));
			} else if ($nc(Main::collator)->compare(flags, "-digestalg"_s) == 0) {
				if (++n == args->length) {
					usageNoArg();
				}
				$set(this, digestalg, args->get(n));
			} else if ($nc(Main::collator)->compare(flags, "-certs"_s) == 0) {
				this->showcerts = true;
			} else if ($nc(Main::collator)->compare(flags, "-strict"_s) == 0) {
				this->strict = true;
			} else {
				bool var$7 = $nc(Main::collator)->compare(flags, "-?"_s) == 0;
				bool var$6 = var$7 || $nc(Main::collator)->compare(flags, "-h"_s) == 0;
				bool var$5 = var$6 || $nc(Main::collator)->compare(flags, "--help"_s) == 0;
				if (var$5 || $nc(Main::collator)->compare(flags, "-help"_s) == 0) {
					fullusage();
				} else if ($nc(Main::collator)->compare(flags, "-revCheck"_s) == 0) {
					this->revocationCheck = true;
				} else {
					$nc($System::err)->println($$str({$($nc(Main::rb)->getString("Illegal.option."_s)), flags}));
					usage();
				}
			}
		}
	}
	if (this->verbose == nullptr) {
		this->showcerts = false;
	}
	if (this->jarfile == nullptr) {
		$nc($System::err)->println($($nc(Main::rb)->getString("Please.specify.jarfile.name"_s)));
		usage();
	}
	if (!this->verify && this->alias == nullptr) {
		$nc($System::err)->println($($nc(Main::rb)->getString("Please.specify.alias.name"_s)));
		usage();
	}
	if (!this->verify && $nc(this->ckaliases)->size() > 1) {
		$nc($System::err)->println($($nc(Main::rb)->getString("Only.one.alias.can.be.specified"_s)));
		usage();
	}
	if (this->storetype == nullptr) {
		$set(this, storetype, $KeyStore::getDefaultType());
	}
	$set(this, storetype, $KeyStoreUtil::niceStoreTypeName(this->storetype));
	try {
		if (this->signedjar != nullptr && $nc($($$new($File, this->signedjar)->getCanonicalPath()))->equals($($$new($File, this->jarfile)->getCanonicalPath()))) {
			$set(this, signedjar, nullptr);
		}
	} catch ($IOException& ioe) {
	}
	bool var$8 = $nc(Main::P11KEYSTORE)->equalsIgnoreCase(this->storetype);
	if (var$8 || $KeyStoreUtil::isWindowsKeyStore(this->storetype)) {
		this->token = true;
		if (this->keystore == nullptr) {
			$set(this, keystore, Main::NONE);
		}
	}
	if ($nc(Main::NONE)->equals(this->keystore)) {
		this->nullStream = true;
	}
	if (this->token && !this->nullStream) {
		$nc($System::err)->println($($MessageFormat::format($($nc(Main::rb)->getString(".keystore.must.be.NONE.if.storetype.is.{0}"_s)), $$new($ObjectArray, {$of(this->storetype)}))));
		usage();
	}
	if (this->token && this->keypass != nullptr) {
		$nc($System::err)->println($($MessageFormat::format($($nc(Main::rb)->getString(".keypass.can.not.be.specified.if.storetype.is.{0}"_s)), $$new($ObjectArray, {$of(this->storetype)}))));
		usage();
	}
	if (this->protectedPath) {
		if (this->storepass != nullptr || this->keypass != nullptr) {
			$nc($System::err)->println($($nc(Main::rb)->getString("If.protected.is.specified.then.storepass.and.keypass.must.not.be.specified"_s)));
			usage();
		}
	}
	if ($KeyStoreUtil::isWindowsKeyStore(this->storetype)) {
		if (this->storepass != nullptr || this->keypass != nullptr) {
			$nc($System::err)->println($($nc(Main::rb)->getString("If.keystore.is.not.password.protected.then.storepass.and.keypass.must.not.be.specified"_s)));
			usage();
		}
	}
	return args;
}

$chars* Main::getPass($String* modifier, $String* arg) {
	$init(Main);
	$var($chars, output, $KeyStoreUtil::getPassWithModifier(modifier, arg, Main::rb, Main::collator));
	if (output != nullptr) {
		return output;
	}
	usage();
	return nullptr;
}

void Main::usageNoArg() {
	$init(Main);
	$nc($System::out)->println($($nc(Main::rb)->getString("Option.lacks.argument"_s)));
	usage();
}

void Main::usage() {
	$init(Main);
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString("Please.type.jarsigner.help.for.usage"_s)));
	$System::exit(1);
}

void Main::fullusage() {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($($nc(Main::rb)->getString("Usage.jarsigner.options.jar.file.alias"_s)));
	$nc($System::out)->println($($nc(Main::rb)->getString(".jarsigner.verify.options.jar.file.alias."_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".keystore.url.keystore.location"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".storepass.password.password.for.keystore.integrity"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".storetype.type.keystore.type"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".keypass.password.password.for.private.key.if.different."_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".certchain.file.name.of.alternative.certchain.file"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".sigfile.file.name.of.SF.DSA.file"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".signedjar.file.name.of.signed.JAR.file"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".digestalg.algorithm.name.of.digest.algorithm"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".sigalg.algorithm.name.of.signature.algorithm"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".verify.verify.a.signed.JAR.file"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".verbose.suboptions.verbose.output.when.signing.verifying."_s)));
	$nc($System::out)->println($($nc(Main::rb)->getString(".suboptions.can.be.all.grouped.or.summary"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".certs.display.certificates.when.verbose.and.verifying"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".certs.revocation.check"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".tsa.url.location.of.the.Timestamping.Authority"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".tsacert.alias.public.key.certificate.for.Timestamping.Authority"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".tsapolicyid.tsapolicyid.for.Timestamping.Authority"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".tsadigestalg.algorithm.of.digest.data.in.timestamping.request"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".altsigner.class.class.name.of.an.alternative.signing.mechanism"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".altsignerpath.pathlist.location.of.an.alternative.signing.mechanism"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".internalsf.include.the.SF.file.inside.the.signature.block"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".sectionsonly.don.t.compute.hash.of.entire.manifest"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".protected.keystore.has.protected.authentication.path"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".providerName.name.provider.name"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".add.provider.option"_s)));
	$nc($System::out)->println($($nc(Main::rb)->getString(".providerArg.option.1"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".providerClass.option"_s)));
	$nc($System::out)->println($($nc(Main::rb)->getString(".providerArg.option.2"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".strict.treat.warnings.as.errors"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".conf.url.specify.a.pre.configured.options.file"_s)));
	$nc($System::out)->println();
	$nc($System::out)->println($($nc(Main::rb)->getString(".print.this.help.message"_s)));
	$nc($System::out)->println();
	$System::exit(0);
}

void Main::verifyJar($String* jarName) {
	$useLocalCurrentObjectStackCache();
	bool anySigned = false;
	$var($JarFile, jf, nullptr);
	$var($Map, digestMap, $new($HashMap));
	$var($Map, sigMap, $new($HashMap));
	$var($Map, sigNameMap, $new($HashMap));
	$var($Map, unparsableSignatures, $new($HashMap));
	{
		$var($Throwable, var$0, nullptr);
		bool return$1 = false;
		try {
			try {
				$assign(jf, $new($JarFile, jarName, true));
				$var($Vector, entriesVec, $new($Vector));
				$var($bytes, buffer, $new($bytes, 8192));
				$var($String, suffix1, "-Digest-Manifest"_s);
				$init($ManifestDigester);
				$var($String, suffix2, $str({"-Digest-"_s, $ManifestDigester::MF_MAIN_ATTRS}));
				int32_t suffixLength1 = suffix1->length();
				int32_t suffixLength2 = $nc(suffix2)->length();
				$var($Enumeration, entries, jf->entries());
				while ($nc(entries)->hasMoreElements()) {
					$var($JarEntry, je, $cast($JarEntry, entries->nextElement()));
					entriesVec->addElement(je);
					{
						$var($InputStream, is, jf->getInputStream(je));
						{
							$var($Throwable, var$2, nullptr);
							try {
								try {
									$var($String, name, $nc(je)->getName());
									bool var$3 = signatureRelated(name);
									if (var$3 && $SignatureFileVerifier::isBlockOrSF(name)) {
										int32_t var$4 = name->lastIndexOf((int32_t)u'/') + 1;
										$var($String, alias, $nc(name)->substring(var$4, name->lastIndexOf((int32_t)u'.')));
										try {
											if (name->endsWith(".SF"_s)) {
												$var($Manifest, sf, $new($Manifest, is));
												bool found = false;
												{
													$var($Iterator, i$, $nc($($nc($(sf->getMainAttributes()))->keySet()))->iterator());
													for (; $nc(i$)->hasNext();) {
														$var($Object, obj, i$->next());
														{
															$var($String, key, $nc($of(obj))->toString());
															if ($nc(key)->endsWith(suffix1)) {
																digestMap->put(alias, $(key->substring(0, key->length() - suffixLength1)));
																found = true;
																break;
															} else if (key->endsWith(suffix2)) {
																digestMap->put(alias, $(key->substring(0, key->length() - suffixLength2)));
																found = true;
																break;
															}
														}
													}
												}
												if (!found) {
													unparsableSignatures->putIfAbsent(alias, $($String::format($($nc(Main::rb)->getString("history.unparsable"_s)), $$new($ObjectArray, {$of(name)}))));
												}
											} else {
												sigNameMap->put(alias, name);
												sigMap->put(alias, $$new($PKCS7, is));
											}
										} catch ($IOException& ioe) {
											unparsableSignatures->putIfAbsent(alias, $($String::format($($nc(Main::rb)->getString("history.unparsable"_s)), $$new($ObjectArray, {$of(name)}))));
										}
									} else {
										while ($nc(is)->read(buffer, 0, buffer->length) != -1) {
										}
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
							} catch ($Throwable& var$5) {
								$assign(var$2, var$5);
							} /*finally*/ {
								if (is != nullptr) {
									is->close();
								}
							}
							if (var$2 != nullptr) {
								$throw(var$2);
							}
						}
					}
				}
				$var($Manifest, man, jf->getManifest());
				bool hasSignature = false;
				$var($Map, output, $new($LinkedHashMap));
				if (man != nullptr) {
					if (this->verbose != nullptr) {
						$nc($System::out)->println();
					}
					$var($Enumeration, e, entriesVec->elements());
					$var($String, tab, $nc(Main::rb)->getString("6SPACE"_s));
					while ($nc(e)->hasMoreElements()) {
						$var($JarEntry, je, $cast($JarEntry, e->nextElement()));
						$var($String, name, $nc(je)->getName());
						if (!Main::extraAttrsDetected && $nc(Main::JUZFA)->getExtraAttributes(je) != -1) {
							Main::extraAttrsDetected = true;
						}
						hasSignature = hasSignature || $SignatureFileVerifier::isBlockOrSF(name);
						$var($CodeSignerArray, signers, je->getCodeSigners());
						bool isSigned = (signers != nullptr);
						anySigned |= isSigned;
						bool var$6 = !isSigned;
						if (var$6) {
							bool var$8 = !je->isDirectory();
							bool var$7 = (var$8 && !signatureRelated(name));
							if (!var$7) {
								bool var$9 = je->isDirectory();
								var$7 = (var$9 && je->getSize() > 0);
							}
							var$6 = (var$7);
						}
						bool unsignedEntry = var$6;
						this->hasUnsignedEntry |= unsignedEntry;
						int32_t inStoreWithAlias = inKeyStore(signers);
						bool inStore = ((int32_t)(inStoreWithAlias & (uint32_t)Main::IN_KEYSTORE)) != 0;
						this->notSignedByAlias |= ((int32_t)(inStoreWithAlias & (uint32_t)Main::NOT_ALIAS)) != 0;
						if (this->keystore != nullptr) {
							this->aliasNotInStore |= isSigned && !inStore;
						}
						$var($StringBuffer, sb, nullptr);
						if (this->verbose != nullptr) {
							$assign(sb, $new($StringBuffer));
							bool var$11 = (man->getAttributes(name) != nullptr);
							bool var$10 = var$11 || (man->getAttributes($$str({"./"_s, name})) != nullptr);
							bool inManifest = (var$10 || (man->getAttributes($$str({"/"_s, name})) != nullptr));
							sb->append(isSigned ? $($nc(Main::rb)->getString("s"_s)) : $($nc(Main::rb)->getString("SPACE"_s)))->append(inManifest ? $($nc(Main::rb)->getString("m"_s)) : $($nc(Main::rb)->getString("SPACE"_s)))->append(inStore ? $($nc(Main::rb)->getString("k"_s)) : $($nc(Main::rb)->getString("SPACE"_s)))->append(((int32_t)(inStoreWithAlias & (uint32_t)Main::NOT_ALIAS)) != 0 ? $($nc(Main::rb)->getString("X"_s)) : $($nc(Main::rb)->getString("SPACE"_s)))->append(unsignedEntry ? $($nc(Main::rb)->getString("q"_s)) : $($nc(Main::rb)->getString("SPACE"_s)))->append($($nc(Main::rb)->getString("SPACE"_s)));
							sb->append(u'|');
						}
						if (isSigned) {
							if (this->showcerts) {
								$nc(sb)->append(u'\n');
							}
							{
								$var($CodeSignerArray, arr$, signers);
								int32_t len$ = arr$->length;
								int32_t i$ = 0;
								for (; i$ < len$; ++i$) {
									$var($CodeSigner, signer, arr$->get(i$));
									{
										$var($String, si, signerInfo(signer, tab));
										if (this->showcerts) {
											$nc(sb)->append(si);
											sb->append(u'\n');
										}
									}
								}
							}
						} else if (this->showcerts && !$nc(this->verbose)->equals("all"_s)) {
							if (signatureRelated(name)) {
								$nc(sb)->append(u'\n')->append(tab)->append($($nc(Main::rb)->getString(".Signature.related.entries."_s)))->append("\n\n"_s);
							} else if (unsignedEntry) {
								$nc(sb)->append(u'\n')->append(tab)->append($($nc(Main::rb)->getString(".Unsigned.entries."_s)))->append("\n\n"_s);
							} else {
								$nc(sb)->append(u'\n')->append(tab)->append($($nc(Main::rb)->getString(".Directory.entries."_s)))->append("\n\n"_s);
							}
						}
						if (this->verbose != nullptr) {
							$var($String, label, $nc(sb)->toString());
							if (signatureRelated(name)) {
								$assign(label, $str({"-"_s, label}));
							}
							if (!output->containsKey(label)) {
								output->put(label, $$new($ArrayList));
							}
							$var($StringBuilder, fb, $new($StringBuilder));
							$var($String, s, $Long::toString(je->getSize()));
							for (int32_t i = 6 - $nc(s)->length(); i > 0; --i) {
								fb->append(u' ');
							}
							fb->append(s)->append(u' ')->append($($$new($Date, je->getTime())->toString()));
							fb->append(u' ')->append(name);
							$nc(($cast($List, $(output->get(label)))))->add($(fb->toString()));
						}
					}
				}
				if (this->verbose != nullptr) {
					{
						$var($Iterator, i$, $nc($(output->entrySet()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Map$Entry, s, $cast($Map$Entry, i$->next()));
							{
								$var($List, files, $cast($List, $nc(s)->getValue()));
								$var($String, key, $cast($String, s->getKey()));
								if ($nc(key)->charAt(0) == u'-') {
									$assign(key, key->substring(1));
								}
								int32_t pipe = $nc(key)->indexOf((int32_t)u'|');
								if ($nc(this->verbose)->equals("all"_s)) {
									{
										$var($Iterator, i$, $nc(files)->iterator());
										for (; $nc(i$)->hasNext();) {
											$var($String, f, $cast($String, i$->next()));
											{
												$nc($System::out)->println($$str({$(key->substring(0, pipe)), f}));
												$nc($System::out)->printf($(key->substring(pipe + 1)), $$new($ObjectArray, 0));
											}
										}
									}
								} else {
									if ($nc(this->verbose)->equals("grouped"_s)) {
										{
											$var($Iterator, i$, $nc(files)->iterator());
											for (; $nc(i$)->hasNext();) {
												$var($String, f, $cast($String, i$->next()));
												{
													$nc($System::out)->println($$str({$(key->substring(0, pipe)), f}));
												}
											}
										}
									} else if ($nc(this->verbose)->equals("summary"_s)) {
										$nc($System::out)->print($(key->substring(0, pipe)));
										if ($nc(files)->size() > 1) {
											$var($String, var$12, $$str({$cast($String, $(files->get(0))), " "_s}));
											$var($String, var$13, $nc(Main::rb)->getString(".and.d.more."_s));
											$nc($System::out)->println($$concat(var$12, $($String::format(var$13, $$new($ObjectArray, {$($of($Integer::valueOf(files->size() - 1)))})))));
										} else {
											$nc($System::out)->println($cast($String, $(files->get(0))));
										}
									}
									$nc($System::out)->printf($(key->substring(pipe + 1)), $$new($ObjectArray, 0));
								}
							}
						}
					}
					$nc($System::out)->println();
					$nc($System::out)->println($($nc(Main::rb)->getString(".s.signature.was.verified."_s)));
					$nc($System::out)->println($($nc(Main::rb)->getString(".m.entry.is.listed.in.manifest"_s)));
					$nc($System::out)->println($($nc(Main::rb)->getString(".k.at.least.one.certificate.was.found.in.keystore"_s)));
					if ($nc(this->ckaliases)->size() > 0) {
						$nc($System::out)->println($($nc(Main::rb)->getString(".X.not.signed.by.specified.alias.es."_s)));
					}
					if (this->hasUnsignedEntry) {
						$nc($System::out)->println($($nc(Main::rb)->getString(".q.unsigned.entry"_s)));
					}
				}
				if (man == nullptr) {
					$nc($System::out)->println();
					$nc($System::out)->println($($nc(Main::rb)->getString("no.manifest."_s)));
				}
				if (!this->aliasNotInStore && this->keystore != nullptr) {
					this->signerSelfSigned = false;
				}
				bool var$15 = !digestMap->isEmpty();
				bool var$14 = var$15 || !sigMap->isEmpty();
				if (var$14 || !unparsableSignatures->isEmpty()) {
					if (this->verbose != nullptr) {
						$nc($System::out)->println();
					}
					{
						$var($Iterator, i$, $nc($(sigMap->keySet()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, s, $cast($String, i$->next()));
							{
								if (!digestMap->containsKey(s)) {
									unparsableSignatures->putIfAbsent(s, $($String::format($($nc(Main::rb)->getString("history.nosf"_s)), $$new($ObjectArray, {$of(s)}))));
								}
							}
						}
					}
					{
						$var($Iterator, i$, $nc($(digestMap->keySet()))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($String, s, $cast($String, i$->next()));
							{
								$var($PKCS7, p7, $cast($PKCS7, sigMap->get(s)));
								if (p7 != nullptr) {
									$var($String, history, nullptr);
									try {
										$var($SignerInfo, si, $nc($(p7->getSignerInfos()))->get(0));
										$var($X509Certificate, signer, $nc(si)->getCertificate(p7));
										$var($String, digestAlg, $cast($String, digestMap->get(s)));
										$var($AlgorithmId, var$16, si->getDigestAlgorithmId());
										$var($AlgorithmId, var$17, si->getDigestEncryptionAlgorithmId());
										$var($String, sigAlg, $SignerInfo::makeSigAlg(var$16, var$17, si->getAuthenticatedAttributes() == nullptr));
										$var($PublicKey, key, $nc(signer)->getPublicKey());
										$var($PKCS7, tsToken, si->getTsToken());
										if (tsToken != nullptr) {
											this->hasTimestampBlock = true;
											$var($SignerInfo, tsSi, $nc($(tsToken->getSignerInfos()))->get(0));
											$var($X509Certificate, tsSigner, $nc(tsSi)->getCertificate(tsToken));
											$var($bytes, encTsTokenInfo, $nc($(tsToken->getContentInfo()))->getData());
											$var($TimestampToken, tsTokenInfo, $new($TimestampToken, encTsTokenInfo));
											$var($PublicKey, tsKey, $nc(tsSigner)->getPublicKey());
											$var($String, tsDigestAlg, $nc($(tsTokenInfo->getHashAlgorithm()))->getName());
											$var($AlgorithmId, var$18, tsSi->getDigestAlgorithmId());
											$var($AlgorithmId, var$19, tsSi->getDigestEncryptionAlgorithmId());
											$var($String, tsSigAlg, $SignerInfo::makeSigAlg(var$18, var$19, tsSi->getAuthenticatedAttributes() == nullptr));
											$var($TimeZone, var$20, $TimeZone::getTimeZone("UTC"_s));
											$init($Locale$Category);
											$var($Calendar, c, $Calendar::getInstance(var$20, $($Locale::getDefault($Locale$Category::FORMAT))));
											$nc(c)->setTime($(tsTokenInfo->getDate()));
											$var($String, var$21, $nc(Main::rb)->getString("history.with.ts"_s));
											$assign(history, $String::format(var$21, $$new($ObjectArray, {
												$($of(signer->getSubjectX500Principal())),
												$($of(verifyWithWeak(digestAlg, Main::DIGEST_PRIMITIVE_SET, false))),
												$($of(verifyWithWeak(sigAlg, Main::SIG_PRIMITIVE_SET, false))),
												$($of(verifyWithWeak(key))),
												$of(c),
												$($of(tsSigner->getSubjectX500Principal())),
												$($of(verifyWithWeak(tsDigestAlg, Main::DIGEST_PRIMITIVE_SET, true))),
												$($of(verifyWithWeak(tsSigAlg, Main::SIG_PRIMITIVE_SET, true))),
												$($of(verifyWithWeak(tsKey)))
											})));
										} else {
											$var($String, var$22, $nc(Main::rb)->getString("history.without.ts"_s));
											$assign(history, $String::format(var$22, $$new($ObjectArray, {
												$($of(signer->getSubjectX500Principal())),
												$($of(verifyWithWeak(digestAlg, Main::DIGEST_PRIMITIVE_SET, false))),
												$($of(verifyWithWeak(sigAlg, Main::SIG_PRIMITIVE_SET, false))),
												$($of(verifyWithWeak(key)))
											})));
										}
									} catch ($Exception& e) {
										$var($String, var$23, $nc(Main::rb)->getString("history.unparsable"_s));
										$assign(history, $String::format(var$23, $$new($ObjectArray, {$(sigNameMap->get(s))})));
									}
									if (this->verbose != nullptr) {
										$nc($System::out)->println(history);
									}
								} else {
									unparsableSignatures->putIfAbsent(s, $($String::format($($nc(Main::rb)->getString("history.nobk"_s)), $$new($ObjectArray, {$of(s)}))));
								}
							}
						}
					}
					if (this->verbose != nullptr) {
						{
							$var($Iterator, i$, $nc($(unparsableSignatures->keySet()))->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($String, s, $cast($String, i$->next()));
								{
									$nc($System::out)->println($cast($String, $(unparsableSignatures->get(s))));
								}
							}
						}
					}
				}
				$nc($System::out)->println();
				if (!anySigned) {
					if (this->disabledAlgFound) {
						if (this->verbose != nullptr) {
							$nc($System::out)->println($($nc(Main::rb)->getString("jar.treated.unsigned.see.weak.verbose"_s)));
							$init($DisabledAlgorithmConstraints);
							$nc($System::out)->println($$str({"\n  "_s, $DisabledAlgorithmConstraints::PROPERTY_JAR_DISABLED_ALGS, "="_s, $($Security::getProperty($DisabledAlgorithmConstraints::PROPERTY_JAR_DISABLED_ALGS))}));
						} else {
							$nc($System::out)->println($($nc(Main::rb)->getString("jar.treated.unsigned.see.weak"_s)));
						}
					} else if (hasSignature) {
						$nc($System::out)->println($($nc(Main::rb)->getString("jar.treated.unsigned"_s)));
					} else {
						$nc($System::out)->println($($nc(Main::rb)->getString("jar.is.unsigned"_s)));
					}
				} else {
					displayMessagesAndResult(false);
				}
				return$1 = true;
				goto $finally;
			} catch ($Exception& e) {
				$nc($System::out)->println($$str({$($nc(Main::rb)->getString("jarsigner."_s)), e}));
				if (this->debug) {
					e->printStackTrace();
				}
			}
		} catch ($Throwable& var$24) {
			$assign(var$0, var$24);
		} $finally: {
			if (jf != nullptr) {
				jf->close();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return;
		}
	}
	$System::exit(1);
}

void Main::displayMessagesAndResult(bool isSigning) {
	$useLocalCurrentObjectStackCache();
	$var($String, result, nullptr);
	$var($List, errors, $new($ArrayList));
	$var($List, warnings, $new($ArrayList));
	$var($List, info, $new($ArrayList));
	bool signerNotExpired = this->expireDate == nullptr || $nc(this->expireDate)->after($$new($Date));
	if (this->badKeyUsage) {
		errors->add(isSigning ? $($nc(Main::rb)->getString("The.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s)) : $($nc(Main::rb)->getString("This.jar.contains.entries.whose.signer.certificate.s.KeyUsage.extension.doesn.t.allow.code.signing."_s)));
	}
	if (this->badExtendedKeyUsage) {
		errors->add(isSigning ? $($nc(Main::rb)->getString("The.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s)) : $($nc(Main::rb)->getString("This.jar.contains.entries.whose.signer.certificate.s.ExtendedKeyUsage.extension.doesn.t.allow.code.signing."_s)));
	}
	if (this->badNetscapeCertType) {
		errors->add(isSigning ? $($nc(Main::rb)->getString("The.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s)) : $($nc(Main::rb)->getString("This.jar.contains.entries.whose.signer.certificate.s.NetscapeCertType.extension.doesn.t.allow.code.signing."_s)));
	}
	if (this->hasUnsignedEntry) {
		errors->add($($nc(Main::rb)->getString("This.jar.contains.unsigned.entries.which.have.not.been.integrity.checked."_s)));
	}
	if (this->hasExpiredCert) {
		errors->add(isSigning ? $($nc(Main::rb)->getString("The.signer.certificate.has.expired."_s)) : $($nc(Main::rb)->getString("This.jar.contains.entries.whose.signer.certificate.has.expired."_s)));
	}
	if (this->notYetValidCert) {
		errors->add(isSigning ? $($nc(Main::rb)->getString("The.signer.certificate.is.not.yet.valid."_s)) : $($nc(Main::rb)->getString("This.jar.contains.entries.whose.signer.certificate.is.not.yet.valid."_s)));
	}
	if (this->chainNotValidated) {
		$var($String, var$0, isSigning ? $nc(Main::rb)->getString("The.signer.s.certificate.chain.is.invalid.reason.1"_s) : $nc(Main::rb)->getString("This.jar.contains.entries.whose.certificate.chain.is.invalid.reason.1"_s));
		errors->add($($String::format(var$0, $$new($ObjectArray, {$($of($nc(this->chainNotValidatedReason)->getLocalizedMessage()))}))));
	}
	if (this->tsaChainNotValidated) {
		$var($String, var$1, isSigning ? $nc(Main::rb)->getString("The.tsa.certificate.chain.is.invalid.reason.1"_s) : $nc(Main::rb)->getString("This.jar.contains.entries.whose.tsa.certificate.chain.is.invalid.reason.1"_s));
		errors->add($($String::format(var$1, $$new($ObjectArray, {$($of($nc(this->tsaChainNotValidatedReason)->getLocalizedMessage()))}))));
	}
	if (this->notSignedByAlias) {
		errors->add($($nc(Main::rb)->getString("This.jar.contains.signed.entries.which.is.not.signed.by.the.specified.alias.es."_s)));
	}
	if (this->aliasNotInStore) {
		errors->add($($nc(Main::rb)->getString("This.jar.contains.signed.entries.that.s.not.signed.by.alias.in.this.keystore."_s)));
	}
	if (this->signerSelfSigned) {
		errors->add(isSigning ? $($nc(Main::rb)->getString("The.signer.s.certificate.is.self.signed."_s)) : $($nc(Main::rb)->getString("This.jar.contains.entries.whose.signer.certificate.is.self.signed."_s)));
	}
	if (isSigning) {
		if (((int32_t)(this->legacyAlg & (uint32_t)1)) == 1) {
			warnings->add($($String::format($($nc(Main::rb)->getString("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s)), $$new($ObjectArray, {
				$of(this->digestalg),
				$of("-digestalg"_s)
			}))));
		}
		if (((int32_t)(this->disabledAlg & (uint32_t)1)) == 1) {
			errors->add($($String::format($($nc(Main::rb)->getString("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s)), $$new($ObjectArray, {
				$of(this->digestalg),
				$of("-digestalg"_s)
			}))));
		}
		if (((int32_t)(this->legacyAlg & (uint32_t)2)) == 2) {
			warnings->add($($String::format($($nc(Main::rb)->getString("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s)), $$new($ObjectArray, {
				$of(this->sigalg),
				$of("-sigalg"_s)
			}))));
		}
		if (((int32_t)(this->disabledAlg & (uint32_t)2)) == 2) {
			errors->add($($String::format($($nc(Main::rb)->getString("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s)), $$new($ObjectArray, {
				$of(this->sigalg),
				$of("-sigalg"_s)
			}))));
		}
		if (((int32_t)(this->legacyAlg & (uint32_t)4)) == 4) {
			warnings->add($($String::format($($nc(Main::rb)->getString("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s)), $$new($ObjectArray, {
				$of(this->tSADigestAlg),
				$of("-tsadigestalg"_s)
			}))));
		}
		if (((int32_t)(this->disabledAlg & (uint32_t)4)) == 4) {
			errors->add($($String::format($($nc(Main::rb)->getString("The.1.algorithm.specified.for.the.2.option.is.considered.a.security.risk.and.is.disabled."_s)), $$new($ObjectArray, {
				$of(this->tSADigestAlg),
				$of("-tsadigestalg"_s)
			}))));
		}
		if (((int32_t)(this->legacyAlg & (uint32_t)8)) == 8) {
			$var($String, var$2, $nc(Main::rb)->getString("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk..This.key.size.will.be.disabled.in.a.future.update."_s));
			warnings->add($($String::format(var$2, $$new($ObjectArray, {
				$($of($nc(this->privateKey)->getAlgorithm())),
				$($of($Integer::valueOf($KeyUtil::getKeySize(static_cast<$Key*>(this->privateKey)))))
			}))));
		}
		if (((int32_t)(this->disabledAlg & (uint32_t)8)) == 8) {
			$var($String, var$3, $nc(Main::rb)->getString("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk.and.is.disabled."_s));
			errors->add($($String::format(var$3, $$new($ObjectArray, {
				$($of($nc(this->privateKey)->getAlgorithm())),
				$($of($Integer::valueOf($KeyUtil::getKeySize(static_cast<$Key*>(this->privateKey)))))
			}))));
		}
	} else {
		if (((int32_t)(this->legacyAlg & (uint32_t)1)) != 0) {
			warnings->add($($String::format($($nc(Main::rb)->getString("The.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s)), $$new($ObjectArray, {$of(this->legacyDigestAlg)}))));
		}
		if (((int32_t)(this->legacyAlg & (uint32_t)2)) == 2) {
			warnings->add($($String::format($($nc(Main::rb)->getString("The.signature.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s)), $$new($ObjectArray, {$of(this->legacySigAlg)}))));
		}
		if (((int32_t)(this->legacyAlg & (uint32_t)4)) != 0) {
			warnings->add($($String::format($($nc(Main::rb)->getString("The.timestamp.digest.algorithm.1.is.considered.a.security.risk..This.algorithm.will.be.disabled.in.a.future.update."_s)), $$new($ObjectArray, {$of(this->legacyTsaDigestAlg)}))));
		}
		if (((int32_t)(this->legacyAlg & (uint32_t)8)) == 8) {
			$var($String, var$4, $nc(Main::rb)->getString("The.1.signing.key.has.a.keysize.of.2.which.is.considered.a.security.risk..This.key.size.will.be.disabled.in.a.future.update."_s));
			warnings->add($($String::format(var$4, $$new($ObjectArray, {
				$($of($nc(this->weakPublicKey)->getAlgorithm())),
				$($of($Integer::valueOf($KeyUtil::getKeySize(static_cast<$Key*>(this->weakPublicKey)))))
			}))));
		}
	}
	if (this->hasExpiredTsaCert) {
		this->hasExpiringTsaCert = false;
		if (!signerNotExpired || !errors->isEmpty()) {
			errors->add($($nc(Main::rb)->getString("The.timestamp.has.expired."_s)));
		} else if (signerNotExpired) {
			if (this->expireDate != nullptr) {
				warnings->add($($String::format($($nc(Main::rb)->getString("The.timestamp.expired.1.but.usable.2"_s)), $$new($ObjectArray, {
					$of(this->tsaExpireDate),
					$of(this->expireDate)
				}))));
			}
			this->hasExpiredTsaCert = false;
		}
	}
	if (this->hasExpiringCert) {
		warnings->add(isSigning ? $($nc(Main::rb)->getString("The.signer.certificate.will.expire.within.six.months."_s)) : $($nc(Main::rb)->getString("This.jar.contains.entries.whose.signer.certificate.will.expire.within.six.months."_s)));
	}
	if (this->hasExpiringTsaCert && this->expireDate != nullptr) {
		if ($nc(this->expireDate)->after(this->tsaExpireDate)) {
			warnings->add($($String::format($($nc(Main::rb)->getString("The.timestamp.will.expire.within.one.year.on.1.but.2"_s)), $$new($ObjectArray, {
				$of(this->tsaExpireDate),
				$of(this->expireDate)
			}))));
		} else {
			warnings->add($($String::format($($nc(Main::rb)->getString("The.timestamp.will.expire.within.one.year.on.1"_s)), $$new($ObjectArray, {$of(this->tsaExpireDate)}))));
		}
	}
	if (this->noTimestamp && this->expireDate != nullptr) {
		if (this->hasTimestampBlock) {
			warnings->add($($String::format(isSigning ? $($nc(Main::rb)->getString("invalid.timestamp.signing"_s)) : $($nc(Main::rb)->getString("bad.timestamp.verifying"_s)), $$new($ObjectArray, {$of(this->expireDate)}))));
		} else {
			warnings->add($($String::format(isSigning ? $($nc(Main::rb)->getString("no.timestamp.signing"_s)) : $($nc(Main::rb)->getString("no.timestamp.verifying"_s)), $$new($ObjectArray, {$of(this->expireDate)}))));
		}
	}
	if (Main::extraAttrsDetected) {
		warnings->add($($nc(Main::rb)->getString("extra.attributes.detected"_s)));
	}
	if ((this->strict) && (!errors->isEmpty())) {
		$assign(result, isSigning ? $nc(Main::rb)->getString("jar.signed.with.signer.errors."_s) : $nc(Main::rb)->getString("jar.verified.with.signer.errors."_s));
	} else {
		$assign(result, isSigning ? $nc(Main::rb)->getString("jar.signed."_s) : $nc(Main::rb)->getString("jar.verified."_s));
	}
	$nc($System::out)->println(result);
	if (this->strict) {
		if (!errors->isEmpty()) {
			$nc($System::out)->println();
			$nc($System::out)->println($($nc(Main::rb)->getString("Error."_s)));
			errors->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$println$1, static_cast<$PrintStream*>($nc($System::out)))));
		}
		if (!warnings->isEmpty()) {
			$nc($System::out)->println();
			$nc($System::out)->println($($nc(Main::rb)->getString("Warning."_s)));
			warnings->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$println$1, static_cast<$PrintStream*>($nc($System::out)))));
		}
	} else {
		bool var$6 = !errors->isEmpty();
		if (var$6 || !warnings->isEmpty()) {
			$nc($System::out)->println();
			$nc($System::out)->println($($nc(Main::rb)->getString("Warning."_s)));
			errors->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$println$1, static_cast<$PrintStream*>($nc($System::out)))));
			warnings->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$println$1, static_cast<$PrintStream*>($nc($System::out)))));
		}
	}
	bool var$7 = !isSigning;
	if (var$7) {
		bool var$8 = !errors->isEmpty();
		var$7 = (var$8 || !warnings->isEmpty());
	}
	if (var$7) {
		if (!(this->verbose != nullptr && this->showcerts)) {
			$nc($System::out)->println();
			$nc($System::out)->println($($nc(Main::rb)->getString("Re.run.with.the.verbose.and.certs.options.for.more.details."_s)));
		}
	}
	if (isSigning || this->verbose != nullptr) {
		if (!this->hasExpiringCert && !this->hasExpiredCert && this->expireDate != nullptr && signerNotExpired) {
			info->add($($String::format($($nc(Main::rb)->getString("The.signer.certificate.will.expire.on.1."_s)), $$new($ObjectArray, {$of(this->expireDate)}))));
		}
		if (!this->noTimestamp) {
			if (!this->hasExpiringTsaCert && !this->hasExpiredTsaCert && this->tsaExpireDate != nullptr) {
				if (signerNotExpired) {
					info->add($($String::format($($nc(Main::rb)->getString("The.timestamp.will.expire.on.1."_s)), $$new($ObjectArray, {$of(this->tsaExpireDate)}))));
				} else {
					info->add($($String::format($($nc(Main::rb)->getString("signer.cert.expired.1.but.timestamp.good.2."_s)), $$new($ObjectArray, {
						$of(this->expireDate),
						$of(this->tsaExpireDate)
					}))));
				}
			}
		}
	}
	if (!info->isEmpty()) {
		$nc($System::out)->println();
		info->forEach(static_cast<$Consumer*>($$new(Main$$Lambda$println$1, static_cast<$PrintStream*>($nc($System::out)))));
	}
}

$String* Main::verifyWithWeak($String* alg, $Set* primitiveSet, bool tsa) {
	$useLocalCurrentObjectStackCache();
	if ($nc(Main::JAR_DISABLED_CHECK)->permits(primitiveSet, alg, ($AlgorithmParameters*)nullptr)) {
		if ($nc(Main::LEGACY_CHECK)->permits(primitiveSet, alg, ($AlgorithmParameters*)nullptr)) {
			return alg;
		} else {
			if (primitiveSet == Main::SIG_PRIMITIVE_SET) {
				this->legacyAlg |= 2;
				$set(this, legacySigAlg, alg);
			} else if (tsa) {
				this->legacyAlg |= 4;
				$set(this, legacyTsaDigestAlg, alg);
			} else {
				this->legacyAlg |= 1;
				$set(this, legacyDigestAlg, alg);
			}
			return $String::format($($nc(Main::rb)->getString("with.weak"_s)), $$new($ObjectArray, {$of(alg)}));
		}
	} else {
		this->disabledAlgFound = true;
		return $String::format($($nc(Main::rb)->getString("with.disabled"_s)), $$new($ObjectArray, {$of(alg)}));
	}
}

$String* Main::verifyWithWeak($PublicKey* key) {
	$useLocalCurrentObjectStackCache();
	int32_t kLen = $KeyUtil::getKeySize(static_cast<$Key*>(key));
	if ($nc(Main::JAR_DISABLED_CHECK)->permits(Main::SIG_PRIMITIVE_SET, static_cast<$Key*>(key))) {
		if ($nc(Main::LEGACY_CHECK)->permits(Main::SIG_PRIMITIVE_SET, static_cast<$Key*>(key))) {
			if (kLen >= 0) {
				$var($String, var$0, $nc(Main::rb)->getString("key.bit"_s));
				return $String::format(var$0, $$new($ObjectArray, {$($of($Integer::valueOf(kLen)))}));
			} else {
				return $nc(Main::rb)->getString("unknown.size"_s);
			}
		} else {
			$set(this, weakPublicKey, key);
			this->legacyAlg |= 8;
			$var($String, var$1, $nc(Main::rb)->getString("key.bit.weak"_s));
			return $String::format(var$1, $$new($ObjectArray, {$($of($Integer::valueOf(kLen)))}));
		}
	} else {
		this->disabledAlgFound = true;
		$var($String, var$2, $nc(Main::rb)->getString("key.bit.disabled"_s));
		return $String::format(var$2, $$new($ObjectArray, {$($of($Integer::valueOf(kLen)))}));
	}
}

void Main::checkWeakSign($String* alg, $Set* primitiveSet, bool tsa) {
	if ($nc(Main::JAR_DISABLED_CHECK)->permits(primitiveSet, alg, ($AlgorithmParameters*)nullptr)) {
		if (!$nc(Main::LEGACY_CHECK)->permits(primitiveSet, alg, ($AlgorithmParameters*)nullptr)) {
			if (primitiveSet == Main::SIG_PRIMITIVE_SET) {
				this->legacyAlg |= 2;
			} else if (tsa) {
				this->legacyAlg |= 4;
			} else {
				this->legacyAlg |= 1;
			}
		}
	} else if (primitiveSet == Main::SIG_PRIMITIVE_SET) {
		this->disabledAlg |= 2;
	} else if (tsa) {
		this->disabledAlg |= 4;
	} else {
		this->disabledAlg |= 1;
	}
}

void Main::checkWeakSign($PrivateKey* key) {
	if ($nc(Main::JAR_DISABLED_CHECK)->permits(Main::SIG_PRIMITIVE_SET, static_cast<$Key*>(key))) {
		if (!$nc(Main::LEGACY_CHECK)->permits(Main::SIG_PRIMITIVE_SET, static_cast<$Key*>(key))) {
			this->legacyAlg |= 8;
		}
	} else {
		this->disabledAlg |= 8;
	}
}

$String* Main::checkWeakKey($PublicKey* key) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	int32_t kLen = $KeyUtil::getKeySize(static_cast<$Key*>(key));
	if ($nc(Main::CERTPATH_DISABLED_CHECK)->permits(Main::SIG_PRIMITIVE_SET, static_cast<$Key*>(key))) {
		if ($nc(Main::LEGACY_CHECK)->permits(Main::SIG_PRIMITIVE_SET, static_cast<$Key*>(key))) {
			if (kLen >= 0) {
				$var($String, var$0, $nc(Main::rb)->getString("key.bit"_s));
				return $String::format(var$0, $$new($ObjectArray, {$($of($Integer::valueOf(kLen)))}));
			} else {
				return $nc(Main::rb)->getString("unknown.size"_s);
			}
		} else {
			$var($String, var$1, $nc(Main::rb)->getString("key.bit.weak"_s));
			return $String::format(var$1, $$new($ObjectArray, {$($of($Integer::valueOf(kLen)))}));
		}
	} else {
		$var($String, var$2, $nc(Main::rb)->getString("key.bit.disabled"_s));
		return $String::format(var$2, $$new($ObjectArray, {$($of($Integer::valueOf(kLen)))}));
	}
}

$String* Main::checkWeakAlg($String* alg) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	if ($nc(Main::CERTPATH_DISABLED_CHECK)->permits(Main::SIG_PRIMITIVE_SET, alg, ($AlgorithmParameters*)nullptr)) {
		if ($nc(Main::LEGACY_CHECK)->permits(Main::SIG_PRIMITIVE_SET, alg, ($AlgorithmParameters*)nullptr)) {
			return alg;
		} else {
			return $String::format($($nc(Main::rb)->getString("with.weak"_s)), $$new($ObjectArray, {$of(alg)}));
		}
	} else {
		return $String::format($($nc(Main::rb)->getString("with.disabled"_s)), $$new($ObjectArray, {$of(alg)}));
	}
}

$String* Main::printCert(bool isTsCert, $String* tab, $Certificate* c, $Date* timestamp, bool checkUsage) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, certStr, $new($StringBuilder));
	$var($String, space, $nc(Main::rb)->getString("SPACE"_s));
	$var($X509Certificate, x509Cert, nullptr);
	if ($instanceOf($X509Certificate, c)) {
		$assign(x509Cert, $cast($X509Certificate, c));
		certStr->append(tab)->append($($nc(x509Cert)->getType()))->append($($nc(Main::rb)->getString("COMMA"_s)))->append($($nc($($nc(x509Cert)->getSubjectX500Principal()))->toString()));
	} else {
		certStr->append(tab)->append($($nc(c)->getType()));
	}
	$var($String, alias, $cast($String, $nc(this->storeHash)->get(c)));
	if (alias != nullptr) {
		certStr->append(space)->append("("_s)->append(alias)->append(")"_s);
	}
	if (x509Cert != nullptr) {
		$var($PublicKey, key, x509Cert->getPublicKey());
		$var($String, sigalg, x509Cert->getSigAlgName());
		if ($nc(this->trustedCerts)->contains(x509Cert)) {
			certStr->append("\n"_s)->append(tab)->append("Signature algorithm: "_s)->append(sigalg)->append($($nc(Main::rb)->getString("COMMA"_s)))->append($(checkWeakKey(key)));
			certStr->append("\n"_s)->append(tab)->append("["_s);
			certStr->append($($nc(Main::rb)->getString("trusted.certificate"_s)));
		} else {
			certStr->append("\n"_s)->append(tab)->append("Signature algorithm: "_s)->append($(checkWeakAlg(sigalg)))->append($($nc(Main::rb)->getString("COMMA"_s)))->append($(checkWeakKey(key)));
			certStr->append("\n"_s)->append(tab)->append("["_s);
			$var($Date, notAfter, x509Cert->getNotAfter());
			try {
				bool printValidity = true;
				if (isTsCert) {
					if (this->tsaExpireDate == nullptr || $nc(this->tsaExpireDate)->after(notAfter)) {
						$set(this, tsaExpireDate, notAfter);
					}
				} else if (this->expireDate == nullptr || $nc(this->expireDate)->after(notAfter)) {
					$set(this, expireDate, notAfter);
				}
				if (timestamp == nullptr) {
					x509Cert->checkValidity();
					int64_t age = isTsCert ? Main::ONE_YEAR : Main::SIX_MONTHS;
					int64_t var$0 = $nc(notAfter)->getTime();
					if (var$0 < $System::currentTimeMillis() + age) {
						if (isTsCert) {
							this->hasExpiringTsaCert = true;
						} else {
							this->hasExpiringCert = true;
						}
						if (Main::expiringTimeForm == nullptr) {
							$assignStatic(Main::expiringTimeForm, $new($MessageFormat, $($nc(Main::rb)->getString("certificate.will.expire.on"_s))));
						}
						$var($ObjectArray, source, $new($ObjectArray, {$of(notAfter)}));
						certStr->append($($nc(Main::expiringTimeForm)->format(source)));
						printValidity = false;
					}
				} else {
					x509Cert->checkValidity(timestamp);
				}
				if (printValidity) {
					if (Main::validityTimeForm == nullptr) {
						$assignStatic(Main::validityTimeForm, $new($MessageFormat, $($nc(Main::rb)->getString("certificate.is.valid.from"_s))));
					}
					$var($ObjectArray, source, $new($ObjectArray, {
						$($of(x509Cert->getNotBefore())),
						$of(notAfter)
					}));
					certStr->append($($nc(Main::validityTimeForm)->format(source)));
				}
			} catch ($CertificateExpiredException& cee) {
				if (isTsCert) {
					this->hasExpiredTsaCert = true;
				} else {
					this->hasExpiredCert = true;
				}
				if (Main::expiredTimeForm == nullptr) {
					$assignStatic(Main::expiredTimeForm, $new($MessageFormat, $($nc(Main::rb)->getString("certificate.expired.on"_s))));
				}
				$var($ObjectArray, source, $new($ObjectArray, {$of(notAfter)}));
				certStr->append($($nc(Main::expiredTimeForm)->format(source)));
			} catch ($CertificateNotYetValidException& cnyve) {
				if (!isTsCert) {
					this->notYetValidCert = true;
				}
				if (Main::notYetTimeForm == nullptr) {
					$assignStatic(Main::notYetTimeForm, $new($MessageFormat, $($nc(Main::rb)->getString("certificate.is.not.valid.until"_s))));
				}
				$var($ObjectArray, source, $new($ObjectArray, {$($of(x509Cert->getNotBefore()))}));
				certStr->append($($nc(Main::notYetTimeForm)->format(source)));
			}
		}
		certStr->append("]"_s);
		if (checkUsage) {
			$var($booleans, bad, $new($booleans, 3));
			checkCertUsage(x509Cert, bad);
			if (bad->get(0) || bad->get(1) || bad->get(2)) {
				$var($String, x, ""_s);
				if (bad->get(0)) {
					$assign(x, "KeyUsage"_s);
				}
				if (bad->get(1)) {
					if (x->length() > 0) {
						$assign(x, $str({x, ", "_s}));
					}
					$assign(x, $str({x, "ExtendedKeyUsage"_s}));
				}
				if (bad->get(2)) {
					if (x->length() > 0) {
						$assign(x, $str({x, ", "_s}));
					}
					$assign(x, $str({x, "NetscapeCertType"_s}));
				}
				certStr->append("\n"_s)->append(tab)->append($($MessageFormat::format($($nc(Main::rb)->getString(".{0}.extension.does.not.support.code.signing."_s)), $$new($ObjectArray, {$of(x)}))));
			}
		}
	}
	return certStr->toString();
}

$String* Main::printTimestamp($String* tab, $Timestamp* timestamp) {
	$useLocalCurrentObjectStackCache();
	if (Main::signTimeForm == nullptr) {
		$assignStatic(Main::signTimeForm, $new($MessageFormat, $($nc(Main::rb)->getString("entry.was.signed.on"_s))));
	}
	$var($ObjectArray, source, $new($ObjectArray, {$($of($nc(timestamp)->getTimestamp()))}));
	return $$new($StringBuilder)->append(tab)->append("["_s)->append($($nc(Main::signTimeForm)->format(source)))->append("]"_s)->toString();
}

int32_t Main::inKeyStoreForOneSigner($CodeSigner* signer) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->cacheForInKS)->containsKey(signer)) {
		return $nc(($cast($Integer, $($nc(this->cacheForInKS)->get(signer)))))->intValue();
	}
	int32_t result = 0;
	if (this->store != nullptr) {
		try {
			$var($List, certs, $nc($($nc(signer)->getSignerCertPath()))->getCertificates());
			{
				$var($Iterator, i$, $nc(certs)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Certificate, c, $cast($Certificate, i$->next()));
					{
						$var($String, alias, $cast($String, $nc(this->storeHash)->get(c)));
						if (alias == nullptr) {
							$assign(alias, $nc(this->store)->getCertificateAlias(c));
							if (alias != nullptr) {
								$nc(this->storeHash)->put(c, alias);
							}
						}
						if (alias != nullptr) {
							result |= Main::IN_KEYSTORE;
						}
						{
							$var($Iterator, i$, $nc(this->ckaliases)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($String, ckalias, $cast($String, i$->next()));
								{
									if ($nc(c)->equals($($nc(this->store)->getCertificate(ckalias)))) {
										result |= Main::SIGNED_BY_ALIAS;
										break;
									}
								}
							}
						}
					}
				}
			}
		} catch ($KeyStoreException& kse) {
		}
	}
	$nc(this->cacheForInKS)->put(signer, $($Integer::valueOf(result)));
	return result;
}

int32_t Main::inKeyStore($CodeSignerArray* signers) {
	$useLocalCurrentObjectStackCache();
	if (signers == nullptr) {
		return 0;
	}
	int32_t output = 0;
	{
		$var($CodeSignerArray, arr$, signers);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($CodeSigner, signer, arr$->get(i$));
			{
				int32_t result = inKeyStoreForOneSigner(signer);
				output |= result;
			}
		}
	}
	if ($nc(this->ckaliases)->size() > 0 && ((int32_t)(output & (uint32_t)Main::SIGNED_BY_ALIAS)) == 0) {
		output |= Main::NOT_ALIAS;
	}
	return output;
}

void Main::signJar($String* jarName, $String* alias) {
	$useLocalCurrentObjectStackCache();
	if (this->digestalg == nullptr) {
		$set(this, digestalg, $JarSigner$Builder::getDefaultDigestAlgorithm());
	}
	checkWeakSign(this->digestalg, Main::DIGEST_PRIMITIVE_SET, false);
	if (this->tSADigestAlg == nullptr) {
		$set(this, tSADigestAlg, $JarSigner$Builder::getDefaultDigestAlgorithm());
	}
	checkWeakSign(this->tSADigestAlg, Main::DIGEST_PRIMITIVE_SET, true);
	if (this->sigalg == nullptr) {
		$set(this, sigalg, $JarSigner$Builder::getDefaultSignatureAlgorithm(this->privateKey));
	}
	checkWeakSign(this->sigalg, Main::SIG_PRIMITIVE_SET, false);
	checkWeakSign(this->privateKey);
	bool aliasUsed = false;
	$var($X509Certificate, tsaCert, nullptr);
	if (this->sigfile == nullptr) {
		$set(this, sigfile, alias);
		aliasUsed = true;
	}
	if ($nc(this->sigfile)->length() > 8) {
		$init($Locale);
		$set(this, sigfile, $($nc(this->sigfile)->substring(0, 8))->toUpperCase($Locale::ENGLISH));
	} else {
		$init($Locale);
		$set(this, sigfile, $nc(this->sigfile)->toUpperCase($Locale::ENGLISH));
	}
	$var($StringBuilder, tmpSigFile, $new($StringBuilder, $nc(this->sigfile)->length()));
	for (int32_t j = 0; j < $nc(this->sigfile)->length(); ++j) {
		char16_t c = $nc(this->sigfile)->charAt(j);
		if (!((c >= u'A' && c <= u'Z') || (c >= u'0' && c <= u'9') || (c == u'-') || (c == u'_'))) {
			if (aliasUsed) {
				c = u'_';
			} else {
				$throwNew($RuntimeException, $($nc(Main::rb)->getString("signature.filename.must.consist.of.the.following.characters.A.Z.0.9.or."_s)));
			}
		}
		tmpSigFile->append(c);
	}
	$set(this, sigfile, tmpSigFile->toString());
	$var($String, tmpJarName, nullptr);
	if (this->signedjar == nullptr) {
		$assign(tmpJarName, $str({jarName, ".sig"_s}));
	} else {
		$assign(tmpJarName, this->signedjar);
	}
	$var($File, jarFile, $new($File, jarName));
	$var($File, signedJarFile, $new($File, tmpJarName));
	try {
		$set(this, zipFile, $new($ZipFile, jarName));
	} catch ($IOException& ioe) {
		error($$str({$($nc(Main::rb)->getString("unable.to.open.jar.file."_s)), jarName}), ioe);
	}
	$var($CertPath, cp, $nc($($CertificateFactory::getInstance("X.509"_s)))->generateCertPath($($Arrays::asList(this->certChain))));
	$var($JarSigner$Builder, builder, $new($JarSigner$Builder, this->privateKey, cp));
	if (this->verbose != nullptr) {
		builder->eventHandler(static_cast<$BiConsumer*>($$new(Main$$Lambda$lambda$signJar$1$2)));
	}
	if (this->digestalg != nullptr) {
		builder->digestAlgorithm(this->digestalg);
	}
	if (this->sigalg != nullptr) {
		builder->signatureAlgorithm(this->sigalg);
	}
	$var($URI, tsaURI, nullptr);
	if (this->tsaUrl != nullptr) {
		$assign(tsaURI, $new($URI, this->tsaUrl));
	} else if (this->tsaAlias != nullptr) {
		$assign(tsaCert, getTsaCert(this->tsaAlias));
		$assign(tsaURI, $PKCS7::getTimestampingURI(tsaCert));
	}
	if (tsaURI != nullptr) {
		if (this->verbose != nullptr) {
			$nc($System::out)->println($($nc(Main::rb)->getString("requesting.a.signature.timestamp"_s)));
			if (this->tsaUrl != nullptr) {
				$nc($System::out)->println($$str({$($nc(Main::rb)->getString("TSA.location."_s)), this->tsaUrl}));
			} else if (tsaCert != nullptr) {
				$var($String, var$0, $($nc(Main::rb)->getString("TSA.certificate."_s)));
				$nc($System::out)->println($$concat(var$0, $(printCert(true, ""_s, tsaCert, nullptr, false))));
			}
		}
		builder->tsa(tsaURI);
		if (this->tSADigestAlg != nullptr) {
			builder->setProperty("tsaDigestAlg"_s, this->tSADigestAlg);
		}
		if (this->tSAPolicyID != nullptr) {
			builder->setProperty("tsaPolicyId"_s, this->tSAPolicyID);
		}
	}
	if (this->altSignerClass != nullptr) {
		builder->setProperty("altSigner"_s, this->altSignerClass);
		if (this->verbose != nullptr) {
			$nc($System::out)->println($($nc(Main::rb)->getString("using.an.alternative.signing.mechanism"_s)));
		}
	}
	if (this->altSignerClasspath != nullptr) {
		builder->setProperty("altSignerPath"_s, this->altSignerClasspath);
	}
	builder->signerName(this->sigfile);
	builder->setProperty("sectionsOnly"_s, $($Boolean::toString(!this->signManifest)));
	builder->setProperty("internalSF"_s, $($Boolean::toString(!this->externalSF)));
	$var($FileOutputStream, fos, nullptr);
	try {
		$assign(fos, $new($FileOutputStream, signedJarFile));
	} catch ($IOException& ioe) {
		error($$str({$($nc(Main::rb)->getString("unable.to.create."_s)), tmpJarName}), ioe);
	}
	$var($Throwable, failedCause, nullptr);
	$var($String, failedMessage, nullptr);
	{
		$var($Throwable, var$1, nullptr);
		try {
			try {
				$init($Event$ReporterCategory);
				$Event::setReportListener($Event$ReporterCategory::ZIPFILEATTRS, static_cast<$Event$Reporter*>($$new(Main$$Lambda$lambda$signJar$2$3)));
				$nc($(builder->build()))->sign(this->zipFile, fos);
			} catch ($JarSignerException& e) {
				$assign(failedCause, e->getCause());
				if ($instanceOf($SocketTimeoutException, failedCause) || $instanceOf($UnknownHostException, failedCause)) {
					$var($String, var$5, $($nc(Main::rb)->getString("unable.to.sign.jar."_s)));
					$var($String, var$4, $$concat(var$5, $($nc(Main::rb)->getString("no.response.from.the.Timestamping.Authority."_s))));
					$var($String, var$3, $$concat(var$4, "\n  -J-Dhttp.proxyHost=<hostname>\n  -J-Dhttp.proxyPort=<portnumber>\n"));
					$var($String, var$2, $$concat(var$3, $($nc(Main::rb)->getString("or"_s))));
					$assign(failedMessage, $concat(var$2, "\n  -J-Dhttps.proxyHost=<hostname> \n  -J-Dhttps.proxyPort=<portnumber> "));
				} else {
					if (failedCause == nullptr) {
						$assign(failedCause, e);
					}
					$assign(failedMessage, $str({$($nc(Main::rb)->getString("unable.to.sign.jar."_s)), failedCause}));
				}
			} catch ($Exception& e) {
				$assign(failedCause, e);
				$assign(failedMessage, $str({$($nc(Main::rb)->getString("unable.to.sign.jar."_s)), failedCause}));
			}
		} catch ($Throwable& var$6) {
			$assign(var$1, var$6);
		} /*finally*/ {
			if (this->zipFile != nullptr) {
				$nc(this->zipFile)->close();
				$set(this, zipFile, nullptr);
			}
			if (fos != nullptr) {
				fos->close();
			}
			$init($Event$ReporterCategory);
			$Event::clearReportListener($Event$ReporterCategory::ZIPFILEATTRS);
		}
		if (var$1 != nullptr) {
			$throw(var$1);
		}
	}
	if (failedCause != nullptr) {
		signedJarFile->delete$();
		error(failedMessage, failedCause);
	}
	if (this->verbose != nullptr) {
		$nc($System::out)->println();
	}
	try {
		$var($JarFile, check, $new($JarFile, signedJarFile));
		{
			$var($Throwable, var$7, nullptr);
			try {
				try {
					$var($PKCS7, p7, $new($PKCS7, $(check->getInputStream($(check->getEntry($$str({"META-INF/"_s, this->sigfile, "."_s, $($SignatureFileVerifier::getBlockExtension(this->privateKey))})))))));
					$var($Timestamp, ts, nullptr);
					try {
						$var($SignerInfo, si, $nc($(p7->getSignerInfos()))->get(0));
						if ($nc(si)->getTsToken() != nullptr) {
							this->hasTimestampBlock = true;
						}
						$assign(ts, $nc(si)->getTimestamp());
					} catch ($Exception& e) {
						this->tsaChainNotValidated = true;
						$set(this, tsaChainNotValidatedReason, e);
					}
					$var($String, result, certsAndTSInfo(""_s, "    "_s, $($Arrays::asList(this->certChain)), ts));
					if (this->verbose != nullptr) {
						$nc($System::out)->println(result);
					}
				} catch ($Throwable& t$) {
					try {
						check->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$8) {
				$assign(var$7, var$8);
			} /*finally*/ {
				check->close();
			}
			if (var$7 != nullptr) {
				$throw(var$7);
			}
		}
	} catch ($Exception& e) {
		if (this->debug) {
			e->printStackTrace();
		}
	}
	if (this->signedjar == nullptr) {
		if (!signedJarFile->renameTo(jarFile)) {
			$var($File, origJar, $new($File, $$str({jarName, ".orig"_s})));
			if (jarFile->renameTo(origJar)) {
				if (signedJarFile->renameTo(jarFile)) {
					origJar->delete$();
				} else {
					$var($MessageFormat, form, $new($MessageFormat, $($nc(Main::rb)->getString("attempt.to.rename.signedJarFile.to.jarFile.failed"_s))));
					$var($ObjectArray, source, $new($ObjectArray, {
						$of(signedJarFile),
						$of(jarFile)
					}));
					error($(form->format(source)));
				}
			} else {
				$var($MessageFormat, form, $new($MessageFormat, $($nc(Main::rb)->getString("attempt.to.rename.jarFile.to.origJar.failed"_s))));
				$var($ObjectArray, source, $new($ObjectArray, {
					$of(jarFile),
					$of(origJar)
				}));
				error($(form->format(source)));
			}
		}
	}
	displayMessagesAndResult(true);
}

bool Main::signatureRelated($String* name) {
	return $SignatureFileVerifier::isSigningRelated(name);
}

$String* Main::signerInfo($CodeSigner* signer, $String* tab) {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->cacheForSignerInfo)->containsKey(signer)) {
		return $cast($String, $nc(this->cacheForSignerInfo)->get(signer));
	}
	$var($List, certs, $nc($($nc(signer)->getSignerCertPath()))->getCertificates());
	$var($Timestamp, ts, signer->getTimestamp());
	$var($String, tsLine, ""_s);
	if (ts != nullptr) {
		$assign(tsLine, $str({$(printTimestamp(tab, ts)), "\n"_s}));
	}
	$var($String, result, certsAndTSInfo(tab, tab, certs, ts));
	$nc(this->cacheForSignerInfo)->put(signer, $$str({tsLine, result}));
	return result;
}

$String* Main::certsAndTSInfo($String* tab1, $String* tab2, $List* certs, $Timestamp* ts) {
	$useLocalCurrentObjectStackCache();
	$var($Date, timestamp, nullptr);
	if (ts != nullptr) {
		$assign(timestamp, ts->getTimestamp());
		this->noTimestamp = false;
	} else {
		$assign(timestamp, nullptr);
	}
	bool first = true;
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(tab1)->append($($nc(Main::rb)->getString("...Signer"_s)))->append(u'\n');
	{
		$var($Iterator, i$, $nc(certs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Certificate, c, $cast($Certificate, i$->next()));
			{
				sb->append($(printCert(false, tab2, c, timestamp, first)));
				sb->append(u'\n');
				first = false;
			}
		}
	}
	try {
		$init($Validator);
		validateCertChain($Validator::VAR_CODE_SIGNING, certs, ts);
	} catch ($Exception& e) {
		this->chainNotValidated = true;
		$set(this, chainNotValidatedReason, e);
		sb->append(tab2)->append($($nc(Main::rb)->getString(".Invalid.certificate.chain."_s)))->append($(e->getLocalizedMessage()))->append("]\n"_s);
	}
	if (ts != nullptr) {
		sb->append(tab1)->append($($nc(Main::rb)->getString("...TSA"_s)))->append(u'\n');
		{
			$var($Iterator, i$, $nc($($nc($(ts->getSignerCertPath()))->getCertificates()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Certificate, c, $cast($Certificate, i$->next()));
				{
					sb->append($(printCert(true, tab2, c, nullptr, false)));
					sb->append(u'\n');
				}
			}
		}
		try {
			$init($Validator);
			validateCertChain($Validator::VAR_TSA_SERVER, $($nc($(ts->getSignerCertPath()))->getCertificates()), nullptr);
		} catch ($Exception& e) {
			this->tsaChainNotValidated = true;
			$set(this, tsaChainNotValidatedReason, e);
			sb->append(tab2)->append($($nc(Main::rb)->getString(".Invalid.TSA.certificate.chain."_s)))->append($(e->getLocalizedMessage()))->append("]\n"_s);
		}
	}
	bool var$0 = certs->size() == 1;
	if (var$0 && $KeyStoreUtil::isSelfSigned($cast($X509Certificate, $(certs->get(0))))) {
		this->signerSelfSigned = true;
	}
	return sb->toString();
}

void Main::loadKeyStore($String* keyStoreName$renamed, bool prompt) {
	$useLocalCurrentObjectStackCache();
	$var($String, keyStoreName, keyStoreName$renamed);
	if (!this->nullStream && keyStoreName == nullptr) {
		$init($File);
		$assign(keyStoreName, $str({$($System::getProperty("user.home"_s)), $File::separator, ".keystore"_s}));
	}
	try {
		try {
			$var($KeyStore, caks, $KeyStoreUtil::getCacertsKeyStore());
			if (caks != nullptr) {
				$var($Enumeration, aliases, caks->aliases());
				while ($nc(aliases)->hasMoreElements()) {
					$var($String, a, $cast($String, aliases->nextElement()));
					try {
						$nc(this->trustedCerts)->add($cast($X509Certificate, $(caks->getCertificate(a))));
					} catch ($Exception& e2) {
					}
				}
			}
		} catch ($Exception& e) {
		}
		if (this->providerName == nullptr) {
			$set(this, store, $KeyStore::getInstance(this->storetype));
		} else {
			$set(this, store, $KeyStore::getInstance(this->storetype, this->providerName));
		}
		if (this->token && this->storepass == nullptr && !this->protectedPath && !$KeyStoreUtil::isWindowsKeyStore(this->storetype)) {
			$set(this, storepass, getPass($($nc(Main::rb)->getString("Enter.Passphrase.for.keystore."_s))));
		} else if (!this->token && this->storepass == nullptr && prompt) {
			$set(this, storepass, getPass($($nc(Main::rb)->getString("Enter.Passphrase.for.keystore."_s))));
		}
		{
			$var($Throwable, var$0, nullptr);
			try {
				if (this->nullStream) {
					$nc(this->store)->load(nullptr, this->storepass);
				} else {
					$init($File);
					$assign(keyStoreName, $nc(keyStoreName)->replace($File::separatorChar, u'/'));
					$var($URL, url, nullptr);
					try {
						$assign(url, $new($URL, keyStoreName));
					} catch ($MalformedURLException& e) {
						$assign(url, $nc($($$new($File, keyStoreName)->toURI()))->toURL());
					}
					$var($InputStream, is, nullptr);
					{
						$var($Throwable, var$1, nullptr);
						try {
							$assign(is, $nc(url)->openStream());
							$nc(this->store)->load(is, this->storepass);
						} catch ($Throwable& var$2) {
							$assign(var$1, var$2);
						} /*finally*/ {
							if (is != nullptr) {
								is->close();
							}
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				}
				$var($Enumeration, aliases, $nc(this->store)->aliases());
				while ($nc(aliases)->hasMoreElements()) {
					$var($String, a, $cast($String, aliases->nextElement()));
					try {
						$var($X509Certificate, c, $cast($X509Certificate, $nc(this->store)->getCertificate(a)));
						bool var$3 = $nc(this->store)->isCertificateEntry(a);
						if (var$3 || $nc($($nc(c)->getSubjectX500Principal()))->equals($(c->getIssuerX500Principal()))) {
							$nc(this->trustedCerts)->add(c);
						}
					} catch ($Exception& e2) {
					}
				}
			} catch ($Throwable& var$4) {
				$assign(var$0, var$4);
			} /*finally*/ {
				try {
					$set(this, pkixParameters, $new($PKIXBuilderParameters, $cast($Set, $($nc($($nc($($nc(this->trustedCerts)->stream()))->map(static_cast<$Function*>($$new(Main$$Lambda$lambda$loadKeyStore$3$4)))))->collect($($Collectors::toSet())))), ($CertSelector*)nullptr));
					if (this->revocationCheck) {
						$Security::setProperty("ocsp.enable"_s, "true"_s);
						$System::setProperty("com.sun.security.enableCRLDP"_s, "true"_s);
						$init($Event$ReporterCategory);
						$Event::setReportListener($Event$ReporterCategory::CRLCHECK, static_cast<$Event$Reporter*>($$new(Main$$Lambda$lambda$loadKeyStore$4$5)));
					}
					$nc(this->pkixParameters)->setRevocationEnabled(this->revocationCheck);
				} catch ($InvalidAlgorithmParameterException& ex) {
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException& ioe) {
		$var($String, var$5, $($nc(Main::rb)->getString("keystore.load."_s)));
		$throwNew($RuntimeException, $$concat(var$5, $(ioe->getMessage())));
	} catch ($CertificateException& ce) {
		$var($String, var$6, $($nc(Main::rb)->getString("certificate.exception."_s)));
		$throwNew($RuntimeException, $$concat(var$6, $(ce->getMessage())));
	} catch ($NoSuchProviderException& pe) {
		$var($String, var$7, $($nc(Main::rb)->getString("keystore.load."_s)));
		$throwNew($RuntimeException, $$concat(var$7, $(pe->getMessage())));
	} catch ($NoSuchAlgorithmException& nsae) {
		$var($String, var$8, $($nc(Main::rb)->getString("keystore.load."_s)));
		$throwNew($RuntimeException, $$concat(var$8, $(nsae->getMessage())));
	} catch ($KeyStoreException& kse) {
		$var($String, var$9, $($nc(Main::rb)->getString("unable.to.instantiate.keystore.class."_s)));
		$throwNew($RuntimeException, $$concat(var$9, $(kse->getMessage())));
	}
}

$X509Certificate* Main::getTsaCert($String* alias) {
	$useLocalCurrentObjectStackCache();
	$var($Certificate, cs, nullptr);
	try {
		$assign(cs, $nc(this->store)->getCertificate(alias));
	} catch ($KeyStoreException& kse) {
	}
	if (cs == nullptr || (!($instanceOf($X509Certificate, cs)))) {
		$var($MessageFormat, form, $new($MessageFormat, $($nc(Main::rb)->getString("Certificate.not.found.for.alias.alias.must.reference.a.valid.KeyStore.entry.containing.an.X.509.public.key.certificate.for.the"_s))));
		$var($ObjectArray, source, $new($ObjectArray, {
			$of(alias),
			$of(alias)
		}));
		error($(form->format(source)));
	}
	return $cast($X509Certificate, cs);
}

void Main::checkCertUsage($X509Certificate* userCert, $booleans* bad) {
	$useLocalCurrentObjectStackCache();
	if (bad != nullptr) {
		bad->set(0, bad->set(1, bad->set(2, false)));
	}
	$var($booleans, keyUsage, $nc(userCert)->getKeyUsage());
	if (keyUsage != nullptr) {
		$assign(keyUsage, $Arrays::copyOf(keyUsage, 9));
		if (!keyUsage->get(0) && !keyUsage->get(1)) {
			if (bad != nullptr) {
				bad->set(0, true);
				this->badKeyUsage = true;
			}
		}
	}
	try {
		$var($List, xKeyUsage, userCert->getExtendedKeyUsage());
		if (xKeyUsage != nullptr) {
			bool var$0 = !xKeyUsage->contains("2.5.29.37.0"_s);
			if (var$0 && !xKeyUsage->contains("1.3.6.1.5.5.7.3.3"_s)) {
				if (bad != nullptr) {
					bad->set(1, true);
					this->badExtendedKeyUsage = true;
				}
			}
		}
	} catch ($CertificateParsingException& e) {
	}
	try {
		$var($bytes, netscapeEx, userCert->getExtensionValue("2.16.840.1.113730.1.1"_s));
		if (netscapeEx != nullptr) {
			$var($DerInputStream, in, $new($DerInputStream, netscapeEx));
			$var($bytes, encoded, in->getOctetString());
			$assign(encoded, $nc($($$new($DerValue, encoded)->getUnalignedBitString()))->toByteArray());
			$var($NetscapeCertTypeExtension, extn, $new($NetscapeCertTypeExtension, encoded));
			$init($NetscapeCertTypeExtension);
			$var($Boolean, val, $cast($Boolean, extn->get($NetscapeCertTypeExtension::OBJECT_SIGNING)));
			if (!$nc(val)->booleanValue()) {
				if (bad != nullptr) {
					bad->set(2, true);
					this->badNetscapeCertType = true;
				}
			}
		}
	} catch ($IOException& e) {
	}
}

void Main::getAliasInfo($String* alias) {
	$useLocalCurrentObjectStackCache();
	$var($Key, key, nullptr);
	try {
		$var($CertificateArray, cs, nullptr);
		if (this->altCertChain != nullptr) {
			try {
				$var($FileInputStream, fis, $new($FileInputStream, this->altCertChain));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							$assign(cs, $fcast($CertificateArray, $nc($($nc($($CertificateFactory::getInstance("X.509"_s)))->generateCertificates(fis)))->toArray($$new($CertificateArray, 0))));
						} catch ($Throwable& t$) {
							try {
								fis->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						fis->close();
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			} catch ($FileNotFoundException& ex) {
				error($($nc(Main::rb)->getString("File.specified.by.certchain.does.not.exist"_s)));
			} catch ($CertificateException& ex) {
				error($($nc(Main::rb)->getString("Cannot.restore.certchain.from.file.specified"_s)));
			} catch ($IOException& ex) {
				error($($nc(Main::rb)->getString("Cannot.restore.certchain.from.file.specified"_s)));
			}
		} else {
			try {
				$assign(cs, $nc(this->store)->getCertificateChain(alias));
			} catch ($KeyStoreException& kse) {
			}
		}
		if (cs == nullptr || $nc(cs)->length == 0) {
			if (this->altCertChain != nullptr) {
				error($($nc(Main::rb)->getString("Certificate.chain.not.found.in.the.file.specified."_s)));
			} else {
				$var($MessageFormat, form, $new($MessageFormat, $($nc(Main::rb)->getString("Certificate.chain.not.found.for.alias.alias.must.reference.a.valid.KeyStore.key.entry.containing.a.private.key.and"_s))));
				$var($ObjectArray, source, $new($ObjectArray, {
					$of(alias),
					$of(alias)
				}));
				error($(form->format(source)));
			}
		}
		$set(this, certChain, $new($X509CertificateArray, $nc(cs)->length));
		for (int32_t i = 0; i < cs->length; ++i) {
			if (!($instanceOf($X509Certificate, cs->get(i)))) {
				error($($nc(Main::rb)->getString("found.non.X.509.certificate.in.signer.s.chain"_s)));
			}
			$nc(this->certChain)->set(i, $cast($X509Certificate, cs->get(i)));
		}
		try {
			if (!this->token && this->keypass == nullptr) {
				$assign(key, $nc(this->store)->getKey(alias, this->storepass));
			} else {
				$assign(key, $nc(this->store)->getKey(alias, this->keypass));
			}
		} catch ($UnrecoverableKeyException& e) {
			if (this->token) {
				$throw(e);
			} else if (this->keypass == nullptr) {
				$var($MessageFormat, form, $new($MessageFormat, $($nc(Main::rb)->getString("Enter.key.password.for.alias."_s))));
				$var($ObjectArray, source, $new($ObjectArray, {$of(alias)}));
				$set(this, keypass, getPass($(form->format(source))));
				$assign(key, $nc(this->store)->getKey(alias, this->keypass));
			}
		}
	} catch ($NoSuchAlgorithmException& e) {
		error($(e->getMessage()));
	} catch ($UnrecoverableKeyException& e) {
		error($($nc(Main::rb)->getString("unable.to.recover.key.from.keystore"_s)));
	} catch ($KeyStoreException& kse) {
	}
	if (!($instanceOf($PrivateKey, key))) {
		$var($MessageFormat, form, $new($MessageFormat, $($nc(Main::rb)->getString("key.associated.with.alias.not.a.private.key"_s))));
		$var($ObjectArray, source, $new($ObjectArray, {$of(alias)}));
		error($(form->format(source)));
	} else {
		$set(this, privateKey, $cast($PrivateKey, key));
	}
}

void Main::error($String* message) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({$($nc(Main::rb)->getString("jarsigner."_s)), message}));
	$System::exit(1);
}

void Main::error($String* message, $Throwable* e) {
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($$str({$($nc(Main::rb)->getString("jarsigner."_s)), message}));
	if (this->debug) {
		$nc(e)->printStackTrace();
	}
	$System::exit(1);
}

void Main::validateCertChain($String* variant, $List* certs, $Timestamp* parameter) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($Validator);
		$nc($($Validator::getInstance($Validator::TYPE_PKIX, variant, this->pkixParameters)))->validate($fcast($X509CertificateArray, $($nc(certs)->toArray($$new($X509CertificateArray, certs->size())))), nullptr, parameter);
	} catch ($Exception& e) {
		if (this->debug) {
			e->printStackTrace();
		}
		$init($Validator);
		if ($nc(variant)->equals($Validator::VAR_TSA_SERVER) && $instanceOf($ValidatorException, e)) {
			bool var$0 = e->getCause() != nullptr;
			if (var$0 && $instanceOf($CertPathValidatorException, $(e->getCause()))) {
				$assign(e, $cast($Exception, e->getCause()));
				$var($Throwable, t, $nc(e)->getCause());
				if ($instanceOf($CertificateExpiredException, t) && this->hasExpiredTsaCert) {
					return;
				}
			}
		}
		if ($nc(variant)->equals($Validator::VAR_CODE_SIGNING) && $instanceOf($ValidatorException, e)) {
			bool var$1 = e->getCause() != nullptr;
			if (var$1 && $instanceOf($CertPathValidatorException, $(e->getCause()))) {
				$assign(e, $cast($Exception, e->getCause()));
				$var($Throwable, t, $nc(e)->getCause());
				if (($instanceOf($CertificateExpiredException, t) && this->hasExpiredCert) || ($instanceOf($CertificateNotYetValidException, t) && this->notYetValidCert)) {
					return;
				}
			}
			if ($instanceOf($ValidatorException, e)) {
				$var($ValidatorException, ve, $cast($ValidatorException, e));
				$init($ValidatorException);
				if ($equals(ve->getErrorType(), $ValidatorException::T_EE_EXTENSIONS) && (this->badKeyUsage || this->badExtendedKeyUsage || this->badNetscapeCertType)) {
					return;
				}
			}
		}
		$throw(e);
	}
}

$chars* Main::getPass($String* prompt) {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->print(prompt);
	$nc($System::err)->flush();
	try {
		$var($chars, pass, $Password::readPassword($System::in));
		if (pass == nullptr) {
			error($($nc(Main::rb)->getString("you.must.enter.key.password"_s)));
		} else {
			return pass;
		}
	} catch ($IOException& ioe) {
		$var($String, var$0, $($nc(Main::rb)->getString("unable.to.read.password."_s)));
		error($$concat(var$0, $(ioe->getMessage())));
	}
	return nullptr;
}

void Main::lambda$loadKeyStore$4($String* t, $ObjectArray* o) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println($($String::format($($nc(Main::rb)->getString(t)), o)));
}

$TrustAnchor* Main::lambda$loadKeyStore$3($X509Certificate* c) {
	$init(Main);
	return $new($TrustAnchor, c, nullptr);
}

void Main::lambda$signJar$2($String* t, $ObjectArray* o) {
	$init(Main);
	Main::extraAttrsDetected = true;
}

void Main::lambda$signJar$1($String* action, $String* file) {
	$init(Main);
	$useLocalCurrentObjectStackCache();
	{
		$var($String, s75228$, action);
		int32_t tmp75228$ = -1;
		switch ($nc(s75228$)->hashCode()) {
		case 0x7C788505:
			{
				if (s75228$->equals("signing"_s)) {
					tmp75228$ = 0;
				}
				break;
			}
		case (int32_t)0xAB364FA1:
			{
				if (s75228$->equals("adding"_s)) {
					tmp75228$ = 1;
				}
				break;
			}
		case 0x4ED54746:
			{
				if (s75228$->equals("updating"_s)) {
					tmp75228$ = 2;
				}
				break;
			}
		}
		switch (tmp75228$) {
		case 0:
			{
				$nc($System::out)->println($$str({$($nc(Main::rb)->getString(".signing."_s)), file}));
				break;
			}
		case 1:
			{
				$nc($System::out)->println($$str({$($nc(Main::rb)->getString(".adding."_s)), file}));
				break;
			}
		case 2:
			{
				$nc($System::out)->println($$str({$($nc(Main::rb)->getString(".updating."_s)), file}));
				break;
			}
		default:
			{
				$throwNew($IllegalArgumentException, $$str({"unknown action: "_s, action}));
			}
		}
	}
}

bool Main::lambda$parseArgs$0($String* x) {
	$init(Main);
	return $nc(Main::collator)->compare(x, "-debug"_s) == 0;
}

void clinit$Main($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Main::NONE, "NONE"_s);
	$assignStatic(Main::P11KEYSTORE, "PKCS11"_s);
	$assignStatic(Main::VERSION, "1.0"_s);
	$beforeCallerSensitive();
	$assignStatic(Main::rb, $ResourceBundle::getBundle("sun.security.tools.jarsigner.Resources"_s));
	$assignStatic(Main::collator, $Collator::getInstance());
	{
		$nc(Main::collator)->setStrength($Collator::PRIMARY);
	}
	$init($DisabledAlgorithmConstraints);
	$assignStatic(Main::JAR_DISABLED_CHECK, $new($DisabledAlgorithmConstraints, $DisabledAlgorithmConstraints::PROPERTY_JAR_DISABLED_ALGS));
	$assignStatic(Main::CERTPATH_DISABLED_CHECK, $new($DisabledAlgorithmConstraints, $DisabledAlgorithmConstraints::PROPERTY_CERTPATH_DISABLED_ALGS));
	$assignStatic(Main::LEGACY_CHECK, $new($DisabledAlgorithmConstraints, $DisabledAlgorithmConstraints::PROPERTY_SECURITY_LEGACY_ALGS));
	$init($CryptoPrimitive);
	$assignStatic(Main::DIGEST_PRIMITIVE_SET, $Collections::unmodifiableSet($($EnumSet::of($CryptoPrimitive::MESSAGE_DIGEST))));
	$assignStatic(Main::SIG_PRIMITIVE_SET, $Collections::unmodifiableSet($($EnumSet::of($CryptoPrimitive::SIGNATURE))));
	$assignStatic(Main::JUZFA, $SharedSecrets::getJavaUtilZipFileAccess());
	$assignStatic(Main::validityTimeForm, nullptr);
	$assignStatic(Main::notYetTimeForm, nullptr);
	$assignStatic(Main::expiredTimeForm, nullptr);
	$assignStatic(Main::expiringTimeForm, nullptr);
	$assignStatic(Main::signTimeForm, nullptr);
}

Main::Main() {
}

$Class* Main::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Main$$Lambda$lambda$parseArgs$0::classInfo$.name)) {
			return Main$$Lambda$lambda$parseArgs$0::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$println$1::classInfo$.name)) {
			return Main$$Lambda$println$1::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$signJar$1$2::classInfo$.name)) {
			return Main$$Lambda$lambda$signJar$1$2::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$signJar$2$3::classInfo$.name)) {
			return Main$$Lambda$lambda$signJar$2$3::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$loadKeyStore$3$4::classInfo$.name)) {
			return Main$$Lambda$lambda$loadKeyStore$3$4::load$(name, initialize);
		}
		if (name->equals(Main$$Lambda$lambda$loadKeyStore$4$5::classInfo$.name)) {
			return Main$$Lambda$lambda$loadKeyStore$4$5::load$(name, initialize);
		}
	}
	$loadClass(Main, name, initialize, &_Main_ClassInfo_, clinit$Main, allocate$Main);
	return class$;
}

$Class* Main::class$ = nullptr;

			} // jarsigner
		} // tools
	} // security
} // sun