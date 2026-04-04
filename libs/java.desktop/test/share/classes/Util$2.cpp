#include <Util$2.h>
#include <Util.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <jcpp.h>

using $ExceptionArray = $Array<::java::lang::Exception>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;

void Util$2::init$($List* val$result, $Callable* val$task, $ExceptionArray* val$exception) {
	$set(this, val$result, val$result);
	$set(this, val$task, val$task);
	$set(this, val$exception, val$exception);
}

void Util$2::run() {
	try {
		$nc(this->val$result)->add($($nc(this->val$task)->call()));
	} catch ($Exception& e) {
		$nc(this->val$exception)->set(0, e);
	}
}

Util$2::Util$2() {
}

$Class* Util$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$exception", "[Ljava/lang/Exception;", nullptr, $FINAL | $SYNTHETIC, $field(Util$2, val$exception)},
		{"val$task", "Ljava/util/concurrent/Callable;", nullptr, $FINAL | $SYNTHETIC, $field(Util$2, val$task)},
		{"val$result", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(Util$2, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;Ljava/util/concurrent/Callable;[Ljava/lang/Exception;)V", "()V", 0, $method(Util$2, init$, void, $List*, $Callable*, $ExceptionArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Util$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Util",
		"invokeOnEDT",
		"(Ljava/util/concurrent/Callable;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Util$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Util$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Util"
	};
	$loadClass(Util$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Util$2);
	});
	return class$;
}

$Class* Util$2::class$ = nullptr;