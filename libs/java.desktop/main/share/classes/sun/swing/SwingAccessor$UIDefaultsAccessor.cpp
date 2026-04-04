#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <javax/swing/UIDefaults.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace sun {
	namespace swing {

$Class* SwingAccessor$UIDefaultsAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addInternalBundle", "(Ljavax/swing/UIDefaults;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$UIDefaultsAccessor, addInternalBundle, void, $UIDefaults*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingAccessor$UIDefaultsAccessor", "sun.swing.SwingAccessor", "UIDefaultsAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.SwingAccessor$UIDefaultsAccessor",
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
		"sun.swing.SwingAccessor"
	};
	$loadClass(SwingAccessor$UIDefaultsAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingAccessor$UIDefaultsAccessor);
	});
	return class$;
}

$Class* SwingAccessor$UIDefaultsAccessor::class$ = nullptr;

	} // swing
} // sun