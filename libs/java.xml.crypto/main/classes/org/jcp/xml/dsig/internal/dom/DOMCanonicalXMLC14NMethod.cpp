#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalXMLC14NMethod.h>

#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/TransformException.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheCanonicalizer.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <jcpp.h>

#undef INCLUSIVE

using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $InvalidCanonicalizerException = ::com::sun::org::apache::xml::internal::security::c14n::InvalidCanonicalizerException;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Data = ::javax::xml::crypto::Data;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $TransformException = ::javax::xml::crypto::dsig::TransformException;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $ApacheCanonicalizer = ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer;
using $DOMSubTreeData = ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMCanonicalXMLC14NMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DOMCanonicalXMLC14NMethod, init$, void)},
	{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, $virtualMethod(DOMCanonicalXMLC14NMethod, init, void, $TransformParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, $virtualMethod(DOMCanonicalXMLC14NMethod, transform, $Data*, $Data*, $XMLCryptoContext*), "javax.xml.crypto.dsig.TransformException"},
	{}
};

$ClassInfo _DOMCanonicalXMLC14NMethod_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14NMethod",
	"org.jcp.xml.dsig.internal.dom.ApacheCanonicalizer",
	nullptr,
	nullptr,
	_DOMCanonicalXMLC14NMethod_MethodInfo_
};

$Object* allocate$DOMCanonicalXMLC14NMethod($Class* clazz) {
	return $of($alloc(DOMCanonicalXMLC14NMethod));
}

void DOMCanonicalXMLC14NMethod::init$() {
	$ApacheCanonicalizer::init$();
}

void DOMCanonicalXMLC14NMethod::init($TransformParameterSpec* params) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "no parameters should be specified for Canonical XML C14N algorithm"_s);
	}
}

$Data* DOMCanonicalXMLC14NMethod::transform($Data* data, $XMLCryptoContext* xc) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DOMSubTreeData, data)) {
		$var($DOMSubTreeData, subTree, $cast($DOMSubTreeData, data));
		if ($nc(subTree)->excludeComments()) {
			try {
				$init($CanonicalizationMethod);
				$set(this, canonicalizer, $Canonicalizer::getInstance($CanonicalizationMethod::INCLUSIVE));
			} catch ($InvalidCanonicalizerException& ice) {
				$init($CanonicalizationMethod);
				$throwNew($TransformException, $$str({"Couldn\'t find Canonicalizer for: "_s, $CanonicalizationMethod::INCLUSIVE, ": "_s, $(ice->getMessage())}), ice);
			}
		}
	}
	return canonicalize(data, xc);
}

DOMCanonicalXMLC14NMethod::DOMCanonicalXMLC14NMethod() {
}

$Class* DOMCanonicalXMLC14NMethod::load$($String* name, bool initialize) {
	$loadClass(DOMCanonicalXMLC14NMethod, name, initialize, &_DOMCanonicalXMLC14NMethod_ClassInfo_, allocate$DOMCanonicalXMLC14NMethod);
	return class$;
}

$Class* DOMCanonicalXMLC14NMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org