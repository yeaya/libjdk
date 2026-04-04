#include <javax/swing/JTable$Resizable3.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$Class* JTable$Resizable3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getMidPointAt", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JTable$Resizable3, getMidPointAt, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$Resizable3", "javax.swing.JTable", "Resizable3", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.JTable$Resizable2", "javax.swing.JTable", "Resizable2", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.swing.JTable$Resizable3",
		nullptr,
		"javax.swing.JTable$Resizable2",
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
	$loadClass(JTable$Resizable3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$Resizable3);
	});
	return class$;
}

$Class* JTable$Resizable3::class$ = nullptr;

	} // swing
} // javax