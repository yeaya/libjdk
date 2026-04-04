#include <com/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$Class* MBeanAnalyzer$MBeanVisitor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"visitAttribute", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;TM;)V", $PUBLIC | $ABSTRACT, $virtualMethod(MBeanAnalyzer$MBeanVisitor, visitAttribute, void, $String*, Object$*, Object$*)},
		{"visitOperation", "(Ljava/lang/String;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;)V", $PUBLIC | $ABSTRACT, $virtualMethod(MBeanAnalyzer$MBeanVisitor, visitOperation, void, $String*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MBeanVisitor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<M:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.MBeanAnalyzer"
	};
	$loadClass(MBeanAnalyzer$MBeanVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanAnalyzer$MBeanVisitor);
	});
	return class$;
}

$Class* MBeanAnalyzer$MBeanVisitor::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com