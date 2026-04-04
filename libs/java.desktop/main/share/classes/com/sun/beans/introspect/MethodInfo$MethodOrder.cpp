#include <com/sun/beans/introspect/MethodInfo$MethodOrder.h>
#include <com/sun/beans/introspect/MethodInfo.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace com {
	namespace sun {
		namespace beans {
			namespace introspect {

MethodInfo$MethodOrder* MethodInfo$MethodOrder::instance = nullptr;

void MethodInfo$MethodOrder::init$() {
}

int32_t MethodInfo$MethodOrder::compare($Method* a, $Method* b) {
	$useLocalObjectStack();
	int32_t cmp = $$nc($nc(a)->getName())->compareTo($($nc(b)->getName()));
	if (cmp != 0) {
		return cmp;
	}
	$var($ClassArray, aparams, a->getParameterTypes());
	$var($ClassArray, bparams, b->getParameterTypes());
	if ($nc(aparams)->length != $nc(bparams)->length) {
		return aparams->length - bparams->length;
	}
	for (int32_t i = 0; i < aparams->length; ++i) {
		$Class* aparam = aparams->get(i);
		$Class* bparam = bparams->get(i);
		if (aparam == bparam) {
			continue;
		}
		cmp = $$nc($nc(aparam)->getName())->compareTo($($nc(bparam)->getName()));
		if (cmp != 0) {
			return cmp;
		}
	}
	$Class* aret = a->getReturnType();
	$Class* bret = b->getReturnType();
	if (aret == bret) {
		return 0;
	}
	if ($nc(aret)->isAssignableFrom(bret)) {
		return 1;
	}
	if ($nc(bret)->isAssignableFrom(aret)) {
		return -1;
	}
	return $$nc(aret->getName())->compareTo($(bret->getName()));
}

int32_t MethodInfo$MethodOrder::compare(Object$* a, Object$* b) {
	return this->compare($cast($Method, a), $cast($Method, b));
}

void MethodInfo$MethodOrder::clinit$($Class* clazz) {
	$assignStatic(MethodInfo$MethodOrder::instance, $new(MethodInfo$MethodOrder));
}

MethodInfo$MethodOrder::MethodInfo$MethodOrder() {
}

$Class* MethodInfo$MethodOrder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lcom/sun/beans/introspect/MethodInfo$MethodOrder;", nullptr, $STATIC | $FINAL, $staticField(MethodInfo$MethodOrder, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MethodInfo$MethodOrder, init$, void)},
		{"compare", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)I", nullptr, $PUBLIC, $method(MethodInfo$MethodOrder, compare, int32_t, $Method*, $Method*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MethodInfo$MethodOrder, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.beans.introspect.MethodInfo$MethodOrder", "com.sun.beans.introspect.MethodInfo", "MethodOrder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.beans.introspect.MethodInfo$MethodOrder",
		"java.lang.Object",
		"java.util.Comparator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/reflect/Method;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.beans.introspect.MethodInfo"
	};
	$loadClass(MethodInfo$MethodOrder, name, initialize, &classInfo$$, MethodInfo$MethodOrder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodInfo$MethodOrder);
	});
	return class$;
}

$Class* MethodInfo$MethodOrder::class$ = nullptr;

			} // introspect
		} // beans
	} // sun
} // com