#include <sun/tools/jar/FingerPrint.h>

#include <java/security/GeneralSecurityException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <jdk/internal/org/objectweb/asm/ClassReader.h>
#include <jdk/internal/org/objectweb/asm/ClassVisitor.h>
#include <sun/tools/jar/FingerPrint$ClassAttributes.h>
#include <jcpp.h>

#undef MD

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $ClassReader = ::jdk::internal::org::objectweb::asm$::ClassReader;
using $ClassVisitor = ::jdk::internal::org::objectweb::asm$::ClassVisitor;
using $FingerPrint$ClassAttributes = ::sun::tools::jar::FingerPrint$ClassAttributes;

namespace sun {
	namespace tools {
		namespace jar {

$FieldInfo _FingerPrint_FieldInfo_[] = {
	{"MD", "Ljava/security/MessageDigest;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FingerPrint, MD)},
	{"basename", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint, basename$)},
	{"entryName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint, entryName$)},
	{"mrversion", "I", nullptr, $PRIVATE | $FINAL, $field(FingerPrint, mrversion$)},
	{"sha1", "[B", nullptr, $PRIVATE | $FINAL, $field(FingerPrint, sha1$)},
	{"attrs", "Lsun/tools/jar/FingerPrint$ClassAttributes;", nullptr, $PRIVATE | $FINAL, $field(FingerPrint, attrs)},
	{"isClassEntry", "Z", nullptr, $PRIVATE | $FINAL, $field(FingerPrint, isClassEntry)},
	{"cafeBabe", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FingerPrint, cafeBabe)},
	{}
};

$MethodInfo _FingerPrint_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;I[B)V", nullptr, $PUBLIC, $method(FingerPrint, init$, void, $String*, $String*, int32_t, $bytes*), "java.io.IOException"},
	{"basename", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(FingerPrint, basename, $String*)},
	{"className", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(FingerPrint, className, $String*)},
	{"entryName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(FingerPrint, entryName, $String*)},
	{"getClassAttributes", "([B)Lsun/tools/jar/FingerPrint$ClassAttributes;", nullptr, $PRIVATE, $method(FingerPrint, getClassAttributes, $FingerPrint$ClassAttributes*, $bytes*)},
	{"isCafeBabe", "([B)Z", nullptr, $PRIVATE, $method(FingerPrint, isCafeBabe, bool, $bytes*)},
	{"isClass", "()Z", nullptr, $PUBLIC, $method(FingerPrint, isClass, bool)},
	{"isCompatibleVersion", "(Lsun/tools/jar/FingerPrint;)Z", nullptr, $PUBLIC, $method(FingerPrint, isCompatibleVersion, bool, FingerPrint*)},
	{"isEqual", "([B[B)Z", nullptr, $PRIVATE, $method(FingerPrint, isEqual, bool, $bytes*, $bytes*)},
	{"isIdentical", "(Lsun/tools/jar/FingerPrint;)Z", nullptr, $PUBLIC, $method(FingerPrint, isIdentical, bool, FingerPrint*)},
	{"isNestedClass", "()Z", nullptr, $PUBLIC, $method(FingerPrint, isNestedClass, bool)},
	{"isPublicClass", "()Z", nullptr, $PUBLIC, $method(FingerPrint, isPublicClass, bool)},
	{"isSameAPI", "(Lsun/tools/jar/FingerPrint;)Z", nullptr, $PUBLIC, $method(FingerPrint, isSameAPI, bool, FingerPrint*)},
	{"mrversion", "()I", nullptr, $PUBLIC, $method(FingerPrint, mrversion, int32_t)},
	{"outerClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(FingerPrint, outerClassName, $String*)},
	{"sha1", "([B)[B", nullptr, $PRIVATE, $method(FingerPrint, sha1, $bytes*, $bytes*)},
	{"sha1", "([BI)[B", nullptr, $PRIVATE, $method(FingerPrint, sha1, $bytes*, $bytes*, int32_t)},
	{}
};

$InnerClassInfo _FingerPrint_InnerClassesInfo_[] = {
	{"sun.tools.jar.FingerPrint$ClassAttributes", "sun.tools.jar.FingerPrint", "ClassAttributes", $PRIVATE | $STATIC | $FINAL},
	{"sun.tools.jar.FingerPrint$Method", "sun.tools.jar.FingerPrint", "Method", $PRIVATE | $STATIC | $FINAL},
	{"sun.tools.jar.FingerPrint$Field", "sun.tools.jar.FingerPrint", "Field", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _FingerPrint_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.tools.jar.FingerPrint",
	"java.lang.Object",
	nullptr,
	_FingerPrint_FieldInfo_,
	_FingerPrint_MethodInfo_,
	nullptr,
	nullptr,
	_FingerPrint_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.tools.jar.FingerPrint$ClassAttributes,sun.tools.jar.FingerPrint$Method,sun.tools.jar.FingerPrint$Field"
};

$Object* allocate$FingerPrint($Class* clazz) {
	return $of($alloc(FingerPrint));
}

$MessageDigest* FingerPrint::MD = nullptr;
$bytes* FingerPrint::cafeBabe = nullptr;

void FingerPrint::init$($String* basename, $String* entryName, int32_t mrversion, $bytes* bytes) {
	$set(this, basename$, basename);
	$set(this, entryName$, entryName);
	this->mrversion$ = mrversion;
	if (isCafeBabe(bytes)) {
		this->isClassEntry = true;
		$set(this, sha1$, sha1(bytes, 8));
		$set(this, attrs, getClassAttributes(bytes));
	} else {
		this->isClassEntry = false;
		$set(this, sha1$, nullptr);
		$set(this, attrs, nullptr);
	}
}

bool FingerPrint::isClass() {
	return this->isClassEntry;
}

bool FingerPrint::isNestedClass() {
	return $nc(this->attrs)->nestedClass;
}

bool FingerPrint::isPublicClass() {
	return $nc(this->attrs)->publicClass;
}

bool FingerPrint::isIdentical(FingerPrint* that) {
	if (that == nullptr) {
		return false;
	}
	if (this == that) {
		return true;
	}
	return isEqual(this->sha1$, $nc(that)->sha1$);
}

bool FingerPrint::isCompatibleVersion(FingerPrint* that) {
	return $nc(this->attrs)->version >= $nc($nc(that)->attrs)->version;
}

bool FingerPrint::isSameAPI(FingerPrint* that) {
	if (that == nullptr) {
		return false;
	}
	return $nc(this->attrs)->equals($nc(that)->attrs);
}

$String* FingerPrint::basename() {
	return this->basename$;
}

$String* FingerPrint::entryName() {
	return this->entryName$;
}

$String* FingerPrint::className() {
	return $nc(this->attrs)->name;
}

int32_t FingerPrint::mrversion() {
	return this->mrversion$;
}

$String* FingerPrint::outerClassName() {
	return $nc(this->attrs)->outerClassName;
}

$bytes* FingerPrint::sha1($bytes* entry) {
	$nc(FingerPrint::MD)->update(entry);
	return $nc(FingerPrint::MD)->digest();
}

$bytes* FingerPrint::sha1($bytes* entry, int32_t offset) {
	$nc(FingerPrint::MD)->update(entry, offset, $nc(entry)->length - offset);
	return $nc(FingerPrint::MD)->digest();
}

bool FingerPrint::isEqual($bytes* sha1_1, $bytes* sha1_2) {
	return $MessageDigest::isEqual(sha1_1, sha1_2);
}

bool FingerPrint::isCafeBabe($bytes* bytes) {
	if ($nc(bytes)->length < 4) {
		return false;
	}
	for (int32_t i = 0; i < 4; ++i) {
		if ($nc(bytes)->get(i) != $nc(FingerPrint::cafeBabe)->get(i)) {
			return false;
		}
	}
	return true;
}

$FingerPrint$ClassAttributes* FingerPrint::getClassAttributes($bytes* bytes) {
	$useLocalCurrentObjectStackCache();
	$var($ClassReader, rdr, $new($ClassReader, bytes));
	$var($FingerPrint$ClassAttributes, attrs, $new($FingerPrint$ClassAttributes));
	rdr->accept(attrs, 0);
	return attrs;
}

void clinit$FingerPrint($Class* class$) {
	{
		try {
			$assignStatic(FingerPrint::MD, $MessageDigest::getInstance("SHA-1"_s));
		} catch ($NoSuchAlgorithmException& x) {
			$throwNew($RuntimeException, static_cast<$Throwable*>(x));
		}
	}
	$assignStatic(FingerPrint::cafeBabe, $new($bytes, {
		(int8_t)202,
		(int8_t)254,
		(int8_t)186,
		(int8_t)190
	}));
}

FingerPrint::FingerPrint() {
}

$Class* FingerPrint::load$($String* name, bool initialize) {
	$loadClass(FingerPrint, name, initialize, &_FingerPrint_ClassInfo_, clinit$FingerPrint, allocate$FingerPrint);
	return class$;
}

$Class* FingerPrint::class$ = nullptr;

		} // jar
	} // tools
} // sun