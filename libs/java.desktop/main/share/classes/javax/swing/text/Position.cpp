#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {

$Class* Position::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Position, getOffset, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.Position$Bias", "javax.swing.text.Position", "Bias", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.text.Position",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.Position$Bias"
	};
	$loadClass(Position, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Position);
	});
	return class$;
}

$Class* Position::class$ = nullptr;

		} // text
	} // swing
} // javax