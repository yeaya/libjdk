#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature$SignatureException.h>
#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void JNIWriter$TypeSignature$SignatureException::init$($String* reason) {
	$Exception::init$(reason);
}

JNIWriter$TypeSignature$SignatureException::JNIWriter$TypeSignature$SignatureException() {
}

JNIWriter$TypeSignature$SignatureException::JNIWriter$TypeSignature$SignatureException(const JNIWriter$TypeSignature$SignatureException& e) : $Exception(e) {
}

void JNIWriter$TypeSignature$SignatureException::throw$() {
	throw *this;
}

$Class* JNIWriter$TypeSignature$SignatureException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JNIWriter$TypeSignature$SignatureException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(JNIWriter$TypeSignature$SignatureException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "com.sun.tools.javac.jvm.JNIWriter", "TypeSignature", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException", "com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "SignatureException", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.JNIWriter"
	};
	$loadClass(JNIWriter$TypeSignature$SignatureException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JNIWriter$TypeSignature$SignatureException);
	});
	return class$;
}

$Class* JNIWriter$TypeSignature$SignatureException::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com