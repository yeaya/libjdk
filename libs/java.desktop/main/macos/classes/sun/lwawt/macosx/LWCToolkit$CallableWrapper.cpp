#include <sun/lwawt/macosx/LWCToolkit$CallableWrapper.h>
#include <java/util/concurrent/Callable.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callable = ::java::util::concurrent::Callable;

namespace sun {
	namespace lwawt {
		namespace macosx {

void LWCToolkit$CallableWrapper::init$($Callable* callable) {
	$set(this, callable, callable);
}

void LWCToolkit$CallableWrapper::run() {
	try {
		$set(this, object, $nc(this->callable)->call());
	} catch ($Exception& e) {
		$set(this, e, e);
	}
}

$Object* LWCToolkit$CallableWrapper::getResult() {
	if (this->e != nullptr) {
		$throw(this->e);
	}
	return this->object;
}

LWCToolkit$CallableWrapper::LWCToolkit$CallableWrapper() {
}

$Class* LWCToolkit$CallableWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"callable", "Ljava/util/concurrent/Callable;", "Ljava/util/concurrent/Callable<TT;>;", $FINAL, $field(LWCToolkit$CallableWrapper, callable)},
		{"object", "Ljava/lang/Object;", "TT;", 0, $field(LWCToolkit$CallableWrapper, object)},
		{"e", "Ljava/lang/Exception;", nullptr, 0, $field(LWCToolkit$CallableWrapper, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/Callable;)V", "(Ljava/util/concurrent/Callable<TT;>;)V", 0, $method(LWCToolkit$CallableWrapper, init$, void, $Callable*)},
		{"getResult", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $method(LWCToolkit$CallableWrapper, getResult, $Object*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LWCToolkit$CallableWrapper, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.LWCToolkit$CallableWrapper", "sun.lwawt.macosx.LWCToolkit", "CallableWrapper", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.macosx.LWCToolkit$CallableWrapper",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/lang/Runnable;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.LWCToolkit"
	};
	$loadClass(LWCToolkit$CallableWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LWCToolkit$CallableWrapper);
	});
	return class$;
}

$Class* LWCToolkit$CallableWrapper::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun