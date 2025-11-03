#include <jdk/security/jarsigner/JarSigner$SignatureFile.h>

#include <java/io/OutputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/security/MessageDigest.h>
#include <java/security/PrivateKey.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/jar/Attributes$Name.h>
#include <java/util/jar/Attributes.h>
#include <java/util/jar/Manifest.h>
#include <jdk/security/jarsigner/JarSigner.h>
#include <sun/security/util/ManifestDigester$Entry.h>
#include <sun/security/util/ManifestDigester.h>
#include <sun/security/util/SignatureFileVerifier.h>
#include <jcpp.h>

#undef MF_MAIN_ATTRS
#undef SIGNATURE_VERSION

using $MessageDigestArray = $Array<::java::security::MessageDigest>;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $PrivateKey = ::java::security::PrivateKey;
using $Base64 = ::java::util::Base64;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Attributes = ::java::util::jar::Attributes;
using $Attributes$Name = ::java::util::jar::Attributes$Name;
using $Manifest = ::java::util::jar::Manifest;
using $JarSigner = ::jdk::security::jarsigner::JarSigner;
using $ManifestDigester = ::sun::security::util::ManifestDigester;
using $ManifestDigester$Entry = ::sun::security::util::ManifestDigester$Entry;
using $SignatureFileVerifier = ::sun::security::util::SignatureFileVerifier;

namespace jdk {
	namespace security {
		namespace jarsigner {

$FieldInfo _JarSigner$SignatureFile_FieldInfo_[] = {
	{"sf", "Ljava/util/jar/Manifest;", nullptr, 0, $field(JarSigner$SignatureFile, sf)},
	{"baseName", "Ljava/lang/String;", nullptr, 0, $field(JarSigner$SignatureFile, baseName)},
	{}
};

$MethodInfo _JarSigner$SignatureFile_MethodInfo_[] = {
	{"<init>", "([Ljava/security/MessageDigest;Ljava/util/jar/Manifest;Lsun/security/util/ManifestDigester;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JarSigner$SignatureFile::*)($MessageDigestArray*,$Manifest*,$ManifestDigester*,$String*,bool)>(&JarSigner$SignatureFile::init$))},
	{"getBaseSignatureFilesName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&JarSigner$SignatureFile::getBaseSignatureFilesName))},
	{"getBlockName", "(Ljava/security/PrivateKey;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMetaName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"write", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JarSigner$SignatureFile_InnerClassesInfo_[] = {
	{"jdk.security.jarsigner.JarSigner$SignatureFile", "jdk.security.jarsigner.JarSigner", "SignatureFile", $STATIC},
	{}
};

$ClassInfo _JarSigner$SignatureFile_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.security.jarsigner.JarSigner$SignatureFile",
	"java.lang.Object",
	nullptr,
	_JarSigner$SignatureFile_FieldInfo_,
	_JarSigner$SignatureFile_MethodInfo_,
	nullptr,
	nullptr,
	_JarSigner$SignatureFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.security.jarsigner.JarSigner"
};

$Object* allocate$JarSigner$SignatureFile($Class* clazz) {
	return $of($alloc(JarSigner$SignatureFile));
}

void JarSigner$SignatureFile::init$($MessageDigestArray* digests, $Manifest* mf, $ManifestDigester* md, $String* baseName, bool sectionsonly) {
	$useLocalCurrentObjectStackCache();
	$set(this, baseName, baseName);
	$var($String, version, $System::getProperty("java.version"_s));
	$var($String, javaVendor, $System::getProperty("java.vendor"_s));
	$set(this, sf, $new($Manifest));
	$var($Attributes, mattr, $nc(this->sf)->getMainAttributes());
	$init($Attributes$Name);
	$nc(mattr)->putValue($($nc($Attributes$Name::SIGNATURE_VERSION)->toString()), "1.0"_s);
	mattr->putValue("Created-By"_s, $$str({version, " ("_s, javaVendor, ")"_s}));
	if (!sectionsonly) {
		{
			$var($MessageDigestArray, arr$, digests);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($MessageDigest, digest, arr$->get(i$));
				{
					$var($String, var$0, $str({$($nc(digest)->getAlgorithm()), "-Digest-Manifest"_s}));
					mattr->putValue(var$0, $($nc($($Base64::getEncoder()))->encodeToString($($nc(md)->manifestDigest(digest)))));
				}
			}
		}
	}
	$var($ManifestDigester$Entry, mde, $nc(md)->getMainAttsEntry(false));
	if (mde != nullptr) {
		{
			$var($MessageDigestArray, arr$, digests);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($MessageDigest, digest, arr$->get(i$));
				{
					$var($String, var$1, $str({$($nc(digest)->getAlgorithm()), "-Digest-"_s, $ManifestDigester::MF_MAIN_ATTRS}));
					mattr->putValue(var$1, $($nc($($Base64::getEncoder()))->encodeToString($(mde->digest(digest)))));
				}
			}
		}
	} else {
		$throwNew($IllegalStateException, "ManifestDigester failed to create Manifest-Main-Attribute entry"_s);
	}
	$var($Map, entries, $nc(this->sf)->getEntries());
	{
		$var($Iterator, i$, $nc($($nc($($nc(mf)->getEntries()))->keySet()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, name, $cast($String, i$->next()));
			{
				$assign(mde, md->get(name, false));
				if (mde != nullptr) {
					$var($Attributes, attr, $new($Attributes));
					{
						$var($MessageDigestArray, arr$, digests);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($MessageDigest, digest, arr$->get(i$));
							{
								$var($String, var$2, $str({$($nc(digest)->getAlgorithm()), "-Digest"_s}));
								attr->putValue(var$2, $($nc($($Base64::getEncoder()))->encodeToString($(mde->digest(digest)))));
							}
						}
					}
					$nc(entries)->put(name, attr);
				}
			}
		}
	}
}

void JarSigner$SignatureFile::write($OutputStream* out) {
	$nc(this->sf)->write(out);
}

$String* JarSigner$SignatureFile::getBaseSignatureFilesName($String* baseName) {
	return $str({"META-INF/"_s, baseName, "."_s});
}

$String* JarSigner$SignatureFile::getMetaName() {
	return $str({$(getBaseSignatureFilesName(this->baseName)), "SF"_s});
}

$String* JarSigner$SignatureFile::getBlockName($PrivateKey* privateKey) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, $SignatureFileVerifier::getBlockExtension(privateKey));
	return $str({$(getBaseSignatureFilesName(this->baseName)), type});
}

JarSigner$SignatureFile::JarSigner$SignatureFile() {
}

$Class* JarSigner$SignatureFile::load$($String* name, bool initialize) {
	$loadClass(JarSigner$SignatureFile, name, initialize, &_JarSigner$SignatureFile_ClassInfo_, allocate$JarSigner$SignatureFile);
	return class$;
}

$Class* JarSigner$SignatureFile::class$ = nullptr;

		} // jarsigner
	} // security
} // jdk