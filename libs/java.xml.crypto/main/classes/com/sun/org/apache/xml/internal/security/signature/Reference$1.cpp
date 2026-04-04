#include <com/sun/org/apache/xml/internal/security/signature/Reference$1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <org/w3c/dom/Document.h>
#include <jcpp.h>

#undef _TAG_DIGESTMETHOD

using $Algorithm = ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm;
using $Reference = ::com::sun::org::apache::xml::internal::security::signature::Reference;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

void Reference$1::init$($Reference* this$0, $Document* doc, $String* algorithmURI) {
	$set(this, this$0, this$0);
	$Algorithm::init$(doc, algorithmURI);
}

$String* Reference$1::getBaseNamespace() {
	$init($Constants);
	return $Constants::SignatureSpecNS;
}

$String* Reference$1::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_DIGESTMETHOD;
}

Reference$1::Reference$1() {
}

$Class* Reference$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/security/signature/Reference;", nullptr, $FINAL | $SYNTHETIC, $field(Reference$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, 0, $method(Reference$1, init$, void, $Reference*, $Document*, $String*)},
		{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Reference$1, getBaseLocalName, $String*)},
		{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Reference$1, getBaseNamespace, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xml.internal.security.signature.Reference",
		"<init>",
		"(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/signature/Manifest;Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.signature.Reference$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.signature.Reference$1",
		"com.sun.org.apache.xml.internal.security.algorithms.Algorithm",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.signature.Reference"
	};
	$loadClass(Reference$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reference$1);
	});
	return class$;
}

$Class* Reference$1::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com