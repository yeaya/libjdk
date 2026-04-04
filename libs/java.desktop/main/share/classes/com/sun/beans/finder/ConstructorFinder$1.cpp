#include <com/sun/beans/finder/ConstructorFinder$1.h>
#include <com/sun/beans/finder/ConstructorFinder.h>
#include <com/sun/beans/finder/Signature.h>
#include <com/sun/beans/finder/SignatureException.h>
#include <com/sun/beans/util/Cache$Kind.h>
#include <com/sun/beans/util/Cache.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Executable.h>
#include <jcpp.h>

using $ExecutableArray = $Array<::java::lang::reflect::Executable>;
using $ConstructorFinder = ::com::sun::beans::finder::ConstructorFinder;
using $Signature = ::com::sun::beans::finder::Signature;
using $SignatureException = ::com::sun::beans::finder::SignatureException;
using $Cache = ::com::sun::beans::util::Cache;
using $Cache$Kind = ::com::sun::beans::util::Cache$Kind;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

void ConstructorFinder$1::init$($Cache$Kind* keyKind, $Cache$Kind* valueKind) {
	$Cache::init$(keyKind, valueKind);
}

$Constructor* ConstructorFinder$1::create($Signature* signature) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($ConstructorFinder, finder, $new($ConstructorFinder, $($nc(signature)->getArgs())));
		return $cast($Constructor, finder->find($$cast($ExecutableArray, $nc(signature->getType())->getConstructors())));
	} catch ($Exception& exception) {
		$throwNew($SignatureException, exception);
	}
	$shouldNotReachHere();
}

$Object* ConstructorFinder$1::create(Object$* signature) {
	return $of(this->create($cast($Signature, signature)));
}

ConstructorFinder$1::ConstructorFinder$1() {
}

$Class* ConstructorFinder$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/beans/util/Cache$Kind;Lcom/sun/beans/util/Cache$Kind;)V", nullptr, 0, $method(ConstructorFinder$1, init$, void, $Cache$Kind*, $Cache$Kind*)},
		{"create", "(Lcom/sun/beans/finder/Signature;)Ljava/lang/reflect/Constructor;", "(Lcom/sun/beans/finder/Signature;)Ljava/lang/reflect/Constructor<*>;", $PUBLIC, $virtualMethod(ConstructorFinder$1, create, $Constructor*, $Signature*)},
		{"create", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ConstructorFinder$1, create, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.beans.finder.ConstructorFinder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.finder.ConstructorFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.beans.finder.ConstructorFinder$1",
		"com.sun.beans.util.Cache",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lcom/sun/beans/util/Cache<Lcom/sun/beans/finder/Signature;Ljava/lang/reflect/Constructor<*>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.finder.ConstructorFinder"
	};
	$loadClass(ConstructorFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConstructorFinder$1);
	});
	return class$;
}

$Class* ConstructorFinder$1::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com