#include <javax/swing/UIDefaults$ActiveValue.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {

$Class* UIDefaults$ActiveValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UIDefaults$ActiveValue, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.UIDefaults$ActiveValue",
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
		"javax.swing.UIDefaults"
	};
	$loadClass(UIDefaults$ActiveValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIDefaults$ActiveValue);
	});
	return class$;
}

$Class* UIDefaults$ActiveValue::class$ = nullptr;

	} // swing
} // javax