#include <org/reactivestreams/tck/flow/support/Optional$1.h>
#include <java/util/NoSuchElementException.h>
#include <org/reactivestreams/tck/flow/support/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Optional = ::org::reactivestreams::tck::flow::support::Optional;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

void Optional$1::init$() {
	$Optional::init$();
}

$Object* Optional$1::get() {
	$throwNew($NoSuchElementException, ".get call on None!"_s);
	$shouldNotReachHere();
}

bool Optional$1::isEmpty() {
	return true;
}

Optional$1::Optional$1() {
}

$Class* Optional$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Optional$1, init$, void)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Optional$1, get, $Object*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Optional$1, isEmpty, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"org.reactivestreams.tck.flow.support.Optional",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.reactivestreams.tck.flow.support.Optional$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"org.reactivestreams.tck.flow.support.Optional$1",
		"org.reactivestreams.tck.flow.support.Optional",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lorg/reactivestreams/tck/flow/support/Optional<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.reactivestreams.tck.flow.support.Optional"
	};
	$loadClass(Optional$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Optional$1);
	});
	return class$;
}

$Class* Optional$1::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org