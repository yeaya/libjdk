#include <org/reactivestreams/tck/flow/support/Optional$Some.h>
#include <org/reactivestreams/tck/flow/support/Optional.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Optional = ::org::reactivestreams::tck::flow::support::Optional;

namespace org {
	namespace reactivestreams {
		namespace tck {
			namespace flow {
				namespace support {

void Optional$Some::init$(Object$* value) {
	$Optional::init$();
	$set(this, value, value);
}

$Object* Optional$Some::get() {
	return this->value;
}

bool Optional$Some::isEmpty() {
	return false;
}

$String* Optional$Some::toString() {
	return $String::format("Some(%s)"_s, $$new($ObjectArray, {this->value}));
}

Optional$Some::Optional$Some() {
}

$Class* Optional$Some::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"value", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(Optional$Some, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;)V", "(TT;)V", 0, $method(Optional$Some, init$, void, Object$*)},
		{"get", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(Optional$Some, get, $Object*)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Optional$Some, isEmpty, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Optional$Some, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.reactivestreams.tck.flow.support.Optional$Some", "org.reactivestreams.tck.flow.support.Optional", "Some", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"org.reactivestreams.tck.flow.support.Optional$Some",
		"org.reactivestreams.tck.flow.support.Optional",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Lorg/reactivestreams/tck/flow/support/Optional<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.reactivestreams.tck.flow.support.Optional"
	};
	$loadClass(Optional$Some, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Optional$Some);
	});
	return class$;
}

$Class* Optional$Some::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org