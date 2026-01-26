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

$FieldInfo _JgssExtender_FieldInfo_[] = {
	{"theOne", "Lsun/security/jgss/JgssExtender;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JgssExtender, theOne)},
	{}
};

$MethodInfo _JgssExtender_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JgssExtender, init$, void)},
	{"getExtender", "()Lsun/security/jgss/JgssExtender;", nullptr, $PUBLIC | $STATIC, $staticMethod(JgssExtender, getExtender, JgssExtender*)},
	{"setExtender", "(Lsun/security/jgss/JgssExtender;)V", nullptr, $PROTECTED | $STATIC, $staticMethod(JgssExtender, setExtender, void, JgssExtender*)},
	{"wrap", "(Lorg/ietf/jgss/GSSCredential;)Lorg/ietf/jgss/GSSCredential;", nullptr, $PUBLIC, $virtualMethod(JgssExtender, wrap, $GSSCredential*, $GSSCredential*)},
	{"wrap", "(Lorg/ietf/jgss/GSSContext;)Lorg/ietf/jgss/GSSContext;", nullptr, $PUBLIC, $virtualMethod(JgssExtender, wrap, $GSSContext*, $GSSContext*)},
	{}
};

$ClassInfo _JgssExtender_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.jgss.JgssExtender",
	"java.lang.Object",
	nullptr,
	_JgssExtender_FieldInfo_,
	_JgssExtender_MethodInfo_
};

$Object* allocate$JgssExtender($Class* clazz) {
	return $of($alloc(JgssExtender));
}

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

void clinit$JgssExtender($Class* class$) {
	$assignStatic(JgssExtender::theOne, $new(JgssExtender));
}

JgssExtender::JgssExtender() {
}

$Class* JgssExtender::load$($String* name, bool initialize) {
	$loadClass(JgssExtender, name, initialize, &_JgssExtender_ClassInfo_, clinit$JgssExtender, allocate$JgssExtender);
	return class$;
}

$Class* JgssExtender::class$ = nullptr;

		} // jgss
	} // security
} // sun