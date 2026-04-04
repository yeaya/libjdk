#include <com/sun/org/apache/xml/internal/security/signature/Reference$2$1.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference$2.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $Reference$2 = ::com::sun::org::apache::xml::internal::security::signature::Reference$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

void Reference$2$1::init$($Reference$2* this$1) {
	$set(this, this$1, this$1);
	$set(this, sIterator, $nc(this->this$1->val$s)->iterator());
}

bool Reference$2$1::hasNext() {
	return $nc(this->sIterator)->hasNext();
}

$Object* Reference$2$1::next() {
	return $cast($Node, $nc(this->sIterator)->next());
}

void Reference$2$1::remove() {
	$throwNew($UnsupportedOperationException);
}

Reference$2$1::Reference$2$1() {
}

$Class* Reference$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lcom/sun/org/apache/xml/internal/security/signature/Reference$2;", nullptr, $FINAL | $SYNTHETIC, $field(Reference$2$1, this$1)},
		{"sIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $FINAL, $field(Reference$2$1, sIterator)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference$2;)V", nullptr, 0, $method(Reference$2$1, init$, void, $Reference$2*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Reference$2$1, hasNext, bool)},
		{"next", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(Reference$2$1, next, $Object*)},
		{"remove", "()V", nullptr, $PUBLIC, $virtualMethod(Reference$2$1, remove, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xml.internal.security.signature.Reference$2",
		"iterator",
		"()Ljava/util/Iterator;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.signature.Reference$2", nullptr, nullptr, 0},
		{"com.sun.org.apache.xml.internal.security.signature.Reference$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.signature.Reference$2$1",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Lorg/w3c/dom/Node;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.signature.Reference"
	};
	$loadClass(Reference$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Reference$2$1);
	});
	return class$;
}

$Class* Reference$2$1::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com