#include <org/jcp/xml/dsig/internal/dom/DOMReference$1.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <org/jcp/xml/dsig/internal/dom/DOMReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMReference$1::init$($Set* val$s) {
	$set(this, val$s, val$s);
}

$Iterator* DOMReference$1::iterator() {
	return $nc(this->val$s)->iterator();
}

DOMReference$1::DOMReference$1() {
}

$Class* DOMReference$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(DOMReference$1, val$s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Set;)V", "()V", 0, $method(DOMReference$1, init$, void, $Set*)},
		{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC, $virtualMethod(DOMReference$1, iterator, $Iterator*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"org.jcp.xml.dsig.internal.dom.DOMReference",
		"copyDerefData",
		"(Ljavax/xml/crypto/Data;)Ljavax/xml/crypto/Data;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMReference$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMReference$1",
		"java.lang.Object",
		"javax.xml.crypto.NodeSetData",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/xml/crypto/NodeSetData<Lorg/w3c/dom/Node;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMReference"
	};
	$loadClass(DOMReference$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DOMReference$1));
	});
	return class$;
}

$Class* DOMReference$1::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org