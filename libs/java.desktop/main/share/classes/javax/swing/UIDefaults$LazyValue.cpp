#include <javax/swing/UIDefaults$LazyValue.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {

$Class* UIDefaults$LazyValue::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UIDefaults$LazyValue, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.UIDefaults$LazyValue",
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
	$loadClass(UIDefaults$LazyValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIDefaults$LazyValue);
	});
	return class$;
}

$Class* UIDefaults$LazyValue::class$ = nullptr;

	} // swing
} // javax