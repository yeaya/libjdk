#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$AttrMethods.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void MBeanAnalyzer$AttrMethods::init$() {
}

MBeanAnalyzer$AttrMethods::MBeanAnalyzer$AttrMethods() {
}

$Class* MBeanAnalyzer$AttrMethods::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"getter", "Ljava/lang/Object;", "TM;", 0, $field(MBeanAnalyzer$AttrMethods, getter)},
		{"setter", "Ljava/lang/Object;", "TM;", 0, $field(MBeanAnalyzer$AttrMethods, setter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MBeanAnalyzer$AttrMethods, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MBeanAnalyzer$AttrMethods", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "AttrMethods", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.MBeanAnalyzer$AttrMethods",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<M:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.MBeanAnalyzer"
	};
	$loadClass(MBeanAnalyzer$AttrMethods, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanAnalyzer$AttrMethods);
	});
	return class$;
}

$Class* MBeanAnalyzer$AttrMethods::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com