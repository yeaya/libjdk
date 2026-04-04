#include <com/sun/jmx/mbeanserver/PerInterface$MethodAndSig.h>
#include <com/sun/jmx/mbeanserver/PerInterface.h>
#include <jcpp.h>

using $PerInterface = ::com::sun::jmx::mbeanserver::PerInterface;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void PerInterface$MethodAndSig::init$($PerInterface* this$0) {
	$set(this, this$0, this$0);
}

PerInterface$MethodAndSig::PerInterface$MethodAndSig() {
}

$Class* PerInterface$MethodAndSig::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/mbeanserver/PerInterface;", nullptr, $FINAL | $SYNTHETIC, $field(PerInterface$MethodAndSig, this$0)},
		{"method", "Ljava/lang/Object;", "TM;", 0, $field(PerInterface$MethodAndSig, method)},
		{"signature", "[Ljava/lang/String;", nullptr, 0, $field(PerInterface$MethodAndSig, signature)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/mbeanserver/PerInterface;)V", nullptr, $PRIVATE, $method(PerInterface$MethodAndSig, init$, void, $PerInterface*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.PerInterface$MethodAndSig", "com.sun.jmx.mbeanserver.PerInterface", "MethodAndSig", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.PerInterface$MethodAndSig",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.PerInterface"
	};
	$loadClass(PerInterface$MethodAndSig, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PerInterface$MethodAndSig);
	});
	return class$;
}

$Class* PerInterface$MethodAndSig::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com