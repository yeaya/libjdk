#include <javax/swing/JTable$Resizable2.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$Class* JTable$Resizable2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getElementCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JTable$Resizable2, getElementCount, int32_t)},
		{"getLowerBoundAt", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JTable$Resizable2, getLowerBoundAt, int32_t, int32_t)},
		{"getUpperBoundAt", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JTable$Resizable2, getUpperBoundAt, int32_t, int32_t)},
		{"setSizeAt", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JTable$Resizable2, setSizeAt, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$Resizable2", "javax.swing.JTable", "Resizable2", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.swing.JTable$Resizable2",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$Resizable2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$Resizable2);
	});
	return class$;
}

$Class* JTable$Resizable2::class$ = nullptr;

	} // swing
} // javax