#include <com/sun/org/apache/xml/internal/security/signature/Reference$2.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference$2$1.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Reference = ::com::sun::org::apache::xml::internal::security::signature::Reference;
using $Reference$2$1 = ::com::sun::org::apache::xml::internal::security::signature::Reference$2$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

void Reference$2::init$($Reference* this$0, $Set* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
}

$Iterator* Reference$2::iterator() {
	return $new($Reference$2$1, this);
}

Reference$2::Reference$2() {
}

$Class* Reference$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xml/internal/security/signature/Reference;", nullptr, $FINAL | $SYNTHETIC, $field(Reference$2, this$0)},
		{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(Reference$2, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/util/Set;)V", "()V", 0, $method(Reference$2, init$, void, $Reference*, $Set*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC, $virtualMethod(Reference$2, iterator, $Iterator*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xml.internal.security.signature.Reference",
		"cacheDereferencedElement",
		"(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.signature.Reference$2", nullptr, nullptr, 0},
		{"com.sun.org.apache.xml.internal.security.signature.Reference$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.signature.Reference$2",
		"java.lang.Object",
		"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceNodeSetData",
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
	$loadClass(Reference$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reference$2);
	});
	return class$;
}

$Class* Reference$2::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com