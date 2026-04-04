#include <java/awt/LayoutManager.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* LayoutManager::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, addLayoutComponent, void, $String*, $Component*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, layoutContainer, void, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, minimumLayoutSize, $Dimension*, $Container*)},
		{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, preferredLayoutSize, $Dimension*, $Container*)},
		{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, removeLayoutComponent, void, $Component*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.LayoutManager",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LayoutManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LayoutManager);
	});
	return class$;
}

$Class* LayoutManager::class$ = nullptr;

	} // awt
} // java