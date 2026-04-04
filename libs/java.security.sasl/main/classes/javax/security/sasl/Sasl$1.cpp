#include <javax/security/sasl/Sasl$1.h>
#include <java/util/Iterator.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslClientFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $SaslClientFactory = ::javax::security::sasl::SaslClientFactory;

namespace javax {
	namespace security {
		namespace sasl {

void Sasl$1::init$($Iterator* val$iter) {
	$set(this, val$iter, val$iter);
}

bool Sasl$1::hasMoreElements() {
	return $nc(this->val$iter)->hasNext();
}

$Object* Sasl$1::nextElement() {
	return $cast($SaslClientFactory, $nc(this->val$iter)->next());
}

Sasl$1::Sasl$1() {
}

$Class* Sasl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$iter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Sasl$1, val$iter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", "()V", 0, $method(Sasl$1, init$, void, $Iterator*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Sasl$1, hasMoreElements, bool)},
		{"nextElement", "()Ljavax/security/sasl/SaslClientFactory;", nullptr, $PUBLIC, $virtualMethod(Sasl$1, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.sasl.Sasl",
		"getSaslClientFactories",
		"()Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.sasl.Sasl$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.sasl.Sasl$1",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/security/sasl/SaslClientFactory;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.sasl.Sasl"
	};
	$loadClass(Sasl$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sasl$1);
	});
	return class$;
}

$Class* Sasl$1::class$ = nullptr;

		} // sasl
	} // security
} // javax