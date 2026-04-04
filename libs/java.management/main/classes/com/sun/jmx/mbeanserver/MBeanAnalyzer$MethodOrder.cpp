#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MethodOrder.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

MBeanAnalyzer$MethodOrder* MBeanAnalyzer$MethodOrder::instance = nullptr;

void MBeanAnalyzer$MethodOrder::init$() {
}

int32_t MBeanAnalyzer$MethodOrder::compare($Method* a, $Method* b) {
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
	if (!$Arrays::equals(aparams, bparams)) {
		return $$nc($Arrays::toString(aparams))->compareTo($($Arrays::toString(bparams)));
	}
	$Class* aret = a->getReturnType();
	$Class* bret = b->getReturnType();
	if (aret == bret) {
		return 0;
	}
	if ($nc(aret)->isAssignableFrom(bret)) {
		return -1;
	}
	return +1;
}

int32_t MBeanAnalyzer$MethodOrder::compare(Object$* a, Object$* b) {
	return this->compare($cast($Method, a), $cast($Method, b));
}

void MBeanAnalyzer$MethodOrder::clinit$($Class* clazz) {
	$assignStatic(MBeanAnalyzer$MethodOrder::instance, $new(MBeanAnalyzer$MethodOrder));
}

MBeanAnalyzer$MethodOrder::MBeanAnalyzer$MethodOrder() {
}

$Class* MBeanAnalyzer$MethodOrder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"instance", "Lcom/sun/jmx/mbeanserver/MBeanAnalyzer$MethodOrder;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MBeanAnalyzer$MethodOrder, instance)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MBeanAnalyzer$MethodOrder, init$, void)},
		{"compare", "(Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;)I", nullptr, $PUBLIC, $virtualMethod(MBeanAnalyzer$MethodOrder, compare, int32_t, $Method*, $Method*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MBeanAnalyzer$MethodOrder, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MethodOrder", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MethodOrder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.MBeanAnalyzer$MethodOrder",
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
		"com.sun.jmx.mbeanserver.MBeanAnalyzer"
	};
	$loadClass(MBeanAnalyzer$MethodOrder, name, initialize, &classInfo$$, MBeanAnalyzer$MethodOrder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanAnalyzer$MethodOrder);
	});
	return class$;
}

$Class* MBeanAnalyzer$MethodOrder::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com