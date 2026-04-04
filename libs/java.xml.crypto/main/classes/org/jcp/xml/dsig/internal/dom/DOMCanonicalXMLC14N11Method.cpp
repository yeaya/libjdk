#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalXMLC14N11Method.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dsig/TransformException.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheCanonicalizer.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <jcpp.h>

using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $InvalidCanonicalizerException = ::com::sun::org::apache::xml::internal::security::c14n::InvalidCanonicalizerException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Data = ::javax::xml::crypto::Data;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
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

$String* DOMCanonicalXMLC14N11Method::C14N_11 = nullptr;
$String* DOMCanonicalXMLC14N11Method::C14N_11_WITH_COMMENTS = nullptr;

void DOMCanonicalXMLC14N11Method::init$() {
	$ApacheCanonicalizer::init$();
}

void DOMCanonicalXMLC14N11Method::init($TransformParameterSpec* params) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "no parameters should be specified for Canonical XML 1.1 algorithm"_s);
	}
}

$Data* DOMCanonicalXMLC14N11Method::transform($Data* data, $XMLCryptoContext* xc) {
	$useLocalObjectStack();
	if ($instanceOf($DOMSubTreeData, data)) {
		$var($DOMSubTreeData, subTree, $cast($DOMSubTreeData, data));
		if (subTree->excludeComments()) {
			try {
				$set(this, canonicalizer, $Canonicalizer::getInstance(DOMCanonicalXMLC14N11Method::C14N_11));
			} catch ($InvalidCanonicalizerException& ice) {
				$throwNew($TransformException, $$str({"Couldn\'t find Canonicalizer for: "_s, DOMCanonicalXMLC14N11Method::C14N_11, ": "_s, $(ice->getMessage())}), ice);
			}
		}
	}
	return canonicalize(data, xc);
}

DOMCanonicalXMLC14N11Method::DOMCanonicalXMLC14N11Method() {
}

void DOMCanonicalXMLC14N11Method::clinit$($Class* clazz) {
	$assignStatic(DOMCanonicalXMLC14N11Method::C14N_11, "http://www.w3.org/2006/12/xml-c14n11"_s);
	$assignStatic(DOMCanonicalXMLC14N11Method::C14N_11_WITH_COMMENTS, "http://www.w3.org/2006/12/xml-c14n11#WithComments"_s);
}

$Class* DOMCanonicalXMLC14N11Method::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"C14N_11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMCanonicalXMLC14N11Method, C14N_11)},
		{"C14N_11_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMCanonicalXMLC14N11Method, C14N_11_WITH_COMMENTS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DOMCanonicalXMLC14N11Method, init$, void)},
		{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, $virtualMethod(DOMCanonicalXMLC14N11Method, init, void, $TransformParameterSpec*), "java.security.InvalidAlgorithmParameterException"},
		{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, $virtualMethod(DOMCanonicalXMLC14N11Method, transform, $Data*, $Data*, $XMLCryptoContext*), "javax.xml.crypto.dsig.TransformException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14N11Method",
		"org.jcp.xml.dsig.internal.dom.ApacheCanonicalizer",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DOMCanonicalXMLC14N11Method, name, initialize, &classInfo$$, DOMCanonicalXMLC14N11Method::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMCanonicalXMLC14N11Method));
	});
	return class$;
}

$Class* DOMCanonicalXMLC14N11Method::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org