#include <com/sun/beans/finder/MethodFinder$1.h>
#include <com/sun/beans/finder/MethodFinder.h>
#include <com/sun/beans/finder/Signature.h>
#include <com/sun/beans/finder/SignatureException.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/reflect/Executable.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ExecutableArray = $Array<::java::lang::reflect::Executable>;
using $MethodFinder = ::com::sun::beans::finder::MethodFinder;
using $Signature = ::com::sun::beans::finder::Signature;
using $SignatureException = ::com::sun::beans::finder::SignatureException;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

void MethodFinder$1::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind) {
	$Cache::init$(keyKind, valueKind);
}

$Method* MethodFinder$1::create($Signature* signature) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($String, var$0, $nc(signature)->getName());
		$var($MethodFinder, finder, $new($MethodFinder, var$0, $(signature->getArgs())));
		return $MethodFinder::findAccessibleMethod($$cast($Method, finder->find($$cast($ExecutableArray, $nc(signature->getType())->getMethods()))));
	} catch ($Exception& exception) {
		$throwNew($SignatureException, exception);
	}
	$shouldNotReachHere();
}

$Object* MethodFinder$1::create(Object$* signature) {
	return $of(this->create($cast($Signature, signature)));
}

MethodFinder$1::MethodFinder$1() {
}

$Class* MethodFinder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;)V", nullptr, 0, $method(MethodFinder$1, init$, void, $Cache$Kind*, $Cache$Kind*)},
		{"create", "(Lcom/sun/beans/finder/Signature;)Ljava/lang/reflect/Method;", nullptr, $PUBLIC, $virtualMethod(MethodFinder$1, create, $Method*, $Signature*)},
		{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodFinder$1, create, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.beans.finder.MethodFinder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.finder.MethodFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.beans.finder.MethodFinder$1",
		"com.sun.beans.util.Cache",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/beans/util/Cache<Lcom/sun/beans/finder/Signature;Ljava/lang/reflect/Method;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.finder.MethodFinder"
	};
	$loadClass(MethodFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodFinder$1);
	});
	return class$;
}

$Class* MethodFinder$1::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com