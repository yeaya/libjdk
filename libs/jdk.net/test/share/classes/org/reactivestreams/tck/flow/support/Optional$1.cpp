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

$MethodInfo _Optional$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Optional$1, init$, void)},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Optional$1, get, $Object*)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(Optional$1, isEmpty, bool)},
	{}
};

$EnclosingMethodInfo _Optional$1_EnclosingMethodInfo_ = {
	"org.reactivestreams.tck.flow.support.Optional",
	nullptr,
	nullptr
};

$InnerClassInfo _Optional$1_InnerClassesInfo_[] = {
	{"org.reactivestreams.tck.flow.support.Optional$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Optional$1_ClassInfo_ = {
	$ACC_SUPER,
	"org.reactivestreams.tck.flow.support.Optional$1",
	"org.reactivestreams.tck.flow.support.Optional",
	nullptr,
	nullptr,
	_Optional$1_MethodInfo_,
	"Lorg/reactivestreams/tck/flow/support/Optional<Ljava/lang/Object;>;",
	&_Optional$1_EnclosingMethodInfo_,
	_Optional$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.reactivestreams.tck.flow.support.Optional"
};

$Object* allocate$Optional$1($Class* clazz) {
	return $of($alloc(Optional$1));
}

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
	$loadClass(Optional$1, name, initialize, &_Optional$1_ClassInfo_, allocate$Optional$1);
	return class$;
}

$Class* Optional$1::class$ = nullptr;

				} // support
			} // flow
		} // tck
	} // reactivestreams
} // org