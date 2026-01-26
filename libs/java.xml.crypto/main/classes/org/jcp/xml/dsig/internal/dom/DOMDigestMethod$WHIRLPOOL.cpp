#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$WHIRLPOOL.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef WHIRLPOOL

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DOMDigestMethod = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMDigestMethod$WHIRLPOOL_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(DOMDigestMethod$WHIRLPOOL, init$, void, $AlgorithmParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(DOMDigestMethod$WHIRLPOOL, init$, void, $Element*), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DOMDigestMethod$WHIRLPOOL, getAlgorithm, $String*)},
	{"getMessageDigestAlgorithm", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(DOMDigestMethod$WHIRLPOOL, getMessageDigestAlgorithm, $String*)},
	{}
};

$InnerClassInfo _DOMDigestMethod$WHIRLPOOL_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$WHIRLPOOL", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "WHIRLPOOL", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMDigestMethod$WHIRLPOOL_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$WHIRLPOOL",
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod",
	nullptr,
	nullptr,
	_DOMDigestMethod$WHIRLPOOL_MethodInfo_,
	nullptr,
	nullptr,
	_DOMDigestMethod$WHIRLPOOL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod"
};

$Object* allocate$DOMDigestMethod$WHIRLPOOL($Class* clazz) {
	return $of($alloc(DOMDigestMethod$WHIRLPOOL));
}

void DOMDigestMethod$WHIRLPOOL::init$($AlgorithmParameterSpec* params) {
	$DOMDigestMethod::init$(params);
}

void DOMDigestMethod$WHIRLPOOL::init$($Element* dmElem) {
	$DOMDigestMethod::init$(dmElem);
}

$String* DOMDigestMethod$WHIRLPOOL::getAlgorithm() {
	$init($DOMDigestMethod);
	return $DOMDigestMethod::WHIRLPOOL;
}

$String* DOMDigestMethod$WHIRLPOOL::getMessageDigestAlgorithm() {
	return "WHIRLPOOL"_s;
}

DOMDigestMethod$WHIRLPOOL::DOMDigestMethod$WHIRLPOOL() {
}

$Class* DOMDigestMethod$WHIRLPOOL::load$($String* name, bool initialize) {
	$loadClass(DOMDigestMethod$WHIRLPOOL, name, initialize, &_DOMDigestMethod$WHIRLPOOL_ClassInfo_, allocate$DOMDigestMethod$WHIRLPOOL);
	return class$;
}

$Class* DOMDigestMethod$WHIRLPOOL::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org