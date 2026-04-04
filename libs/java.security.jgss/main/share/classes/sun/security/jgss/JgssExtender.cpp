#include <sun/security/jgss/JgssExtender.h>
#include <org/ietf/jgss/GSSContext.h>
#include <org/ietf/jgss/GSSCredential.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GSSContext = ::org::ietf::jgss::GSSContext;
using $GSSCredential = ::org::ietf::jgss::GSSCredential;

namespace sun {
	namespace security {
		namespace jgss {

$volatile(JgssExtender*) JgssExtender::theOne = nullptr;

void JgssExtender::init$() {
}

JgssExtender* JgssExtender::getExtender() {
	$init(JgssExtender);
	return JgssExtender::theOne;
}

void JgssExtender::setExtender(JgssExtender* theOne) {
	$init(JgssExtender);
	$assignStatic(JgssExtender::theOne, theOne);
}

$GSSCredential* JgssExtender::wrap($GSSCredential* cred) {
	return cred;
}

$GSSContext* JgssExtender::wrap($GSSContext* ctxt) {
	return ctxt;
}

void JgssExtender::clinit$($Class* clazz) {
	$assignStatic(JgssExtender::theOne, $new(JgssExtender));
}

JgssExtender::JgssExtender() {
}

$Class* JgssExtender::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theOne", "Lsun/security/jgss/JgssExtender;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JgssExtender, theOne)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JgssExtender, init$, void)},
		{"getExtender", "()Lsun/security/jgss/JgssExtender;", nullptr, $PUBLIC | $STATIC, $staticMethod(JgssExtender, getExtender, JgssExtender*)},
		{"setExtender", "(Lsun/security/jgss/JgssExtender;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(JgssExtender, setExtender, void, JgssExtender*)},
		{"wrap", "(Lorg/ietf/jgss/GSSCredential;)Lorg/ietf/jgss/GSSCredential;", nullptr, $PUBLIC, $virtualMethod(JgssExtender, wrap, $GSSCredential*, $GSSCredential*)},
		{"wrap", "(Lorg/ietf/jgss/GSSContext;)Lorg/ietf/jgss/GSSContext;", nullptr, $PUBLIC, $virtualMethod(JgssExtender, wrap, $GSSContext*, $GSSContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.jgss.JgssExtender",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JgssExtender, name, initialize, &classInfo$$, JgssExtender::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JgssExtender);
	});
	return class$;
}

$Class* JgssExtender::class$ = nullptr;

		} // jgss
	} // security
} // sun