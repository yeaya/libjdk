#include <org/reactivestreams/tck/flow/support/Optional.h>
#include <org/reactivestreams/tck/flow/support/Optional$1.h>
#include <org/reactivestreams/tck/flow/support/Optional$Some.h>
#include <jcpp.h>

#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional$1 = ::org::reactivestreams::tck::flow::support::Optional$1;
using $Optional$Some = ::org::reactivestreams::tck::flow::support::Optional$Some;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

Optional* Optional::NONE = nullptr;

void Optional::init$() {
}

Optional* Optional::empty() {
	$init(Optional);
	return Optional::NONE;
}

Optional* Optional::of(Object$* it) {
	$init(Optional);
	if (it == nullptr) {
		return Optional::NONE;
	} else {
		return $new($Optional$Some, it);
	}
}

bool Optional::isDefined() {
	return !isEmpty();
}

$String* Optional::toString() {
	return "None"_s;
}

void Optional::clinit$($Class* clazz) {
	$assignStatic(Optional::NONE, $new($Optional$1));
}

Optional::Optional() {
}

$Class* Optional::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NONE", "Lorg/reactivestreams/tck/flow/support/Optional;", "Lorg/reactivestreams/tck/flow/support/Optional<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Optional, NONE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Optional, init$, void)},
		{"empty", "()Lorg/reactivestreams/tck/flow/support/Optional;", "<T:Ljava/lang/Object;>()Lorg/reactivestreams/tck/flow/support/Optional<TT;>;", $PUBLIC | $STATIC, $staticMethod(Optional, empty, Optional*)},
		{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC | $ABSTRACT, $virtualMethod(Optional, get, $Object*)},
		{"isDefined", "()Z", nullptr, $PUBLIC, $virtualMethod(Optional, isDefined, bool)},
		{"isEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Optional, isEmpty, bool)},
		{"of", "(Ljava/lang/Object;)Lorg/reactivestreams/tck/flow/support/Optional;", "<T:Ljava/lang/Object;>(TT;)Lorg/reactivestreams/tck/flow/support/Optional<TT;>;", $PUBLIC | $STATIC, $staticMethod(Optional, of, Optional*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Optional, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.reactivestreams.tck.flow.support.Optional$Some", "org.reactivestreams.tck.flow.support.Optional", "Some", $PUBLIC | $STATIC},
		{"org.reactivestreams.tck.flow.support.Optional$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"org.reactivestreams.tck.flow.support.Optional",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"org.reactivestreams.tck.flow.support.Optional$Some,org.reactivestreams.tck.flow.support.Optional$1"
	};
	$loadClass(Optional, name, initialize, &classInfo$$, Optional::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Optional);
	});
	return class$;
}

$Class* Optional::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org