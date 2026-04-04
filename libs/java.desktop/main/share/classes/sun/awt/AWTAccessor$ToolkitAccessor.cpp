#include <sun/awt/AWTAccessor$ToolkitAccessor.h>
#include <java/util/ResourceBundle.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace sun {
	namespace awt {

$Class* AWTAccessor$ToolkitAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"setPlatformResources", "(Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$ToolkitAccessor, setPlatformResources, void, $ResourceBundle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$ToolkitAccessor", "sun.awt.AWTAccessor", "ToolkitAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$ToolkitAccessor",
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
		"sun.awt.AWTAccessor"
	};
	$loadClass(AWTAccessor$ToolkitAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$ToolkitAccessor);
	});
	return class$;
}

$Class* AWTAccessor$ToolkitAccessor::class$ = nullptr;

	} // awt
} // sun