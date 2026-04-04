#include <javax/security/sasl/Sasl$2.h>
#include <java/util/Iterator.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslServerFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $SaslServerFactory = ::javax::security::sasl::SaslServerFactory;

namespace javax {
	namespace security {
		namespace sasl {

void Sasl$2::init$($Iterator* val$iter) {
	$set(this, val$iter, val$iter);
}

bool Sasl$2::hasMoreElements() {
	return $nc(this->val$iter)->hasNext();
}

$Object* Sasl$2::nextElement() {
	return $cast($SaslServerFactory, $nc(this->val$iter)->next());
}

Sasl$2::Sasl$2() {
}

$Class* Sasl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$iter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(Sasl$2, val$iter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Iterator;)V", "()V", 0, $method(Sasl$2, init$, void, $Iterator*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(Sasl$2, hasMoreElements, bool)},
		{"nextElement", "()Ljavax/security/sasl/SaslServerFactory;", nullptr, $PUBLIC, $virtualMethod(Sasl$2, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.security.sasl.Sasl",
		"getSaslServerFactories",
		"()Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.sasl.Sasl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.sasl.Sasl$2",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljavax/security/sasl/SaslServerFactory;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.sasl.Sasl"
	};
	$loadClass(Sasl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Sasl$2);
	});
	return class$;
}

$Class* Sasl$2::class$ = nullptr;

		} // sasl
	} // security
} // javax