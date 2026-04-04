#include <java/awt/LayoutManager2.h>
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

$Class* LayoutManager2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager2, addLayoutComponent, void, $Component*, Object$*)},
		{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager2, getLayoutAlignmentX, float, $Container*)},
		{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager2, getLayoutAlignmentY, float, $Container*)},
		{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager2, invalidateLayout, void, $Container*)},
		{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager2, maximumLayoutSize, $Dimension*, $Container*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.LayoutManager2",
		nullptr,
		"java.awt.LayoutManager",
		nullptr,
		methodInfos$$
	};
	$loadClass(LayoutManager2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LayoutManager2);
	});
	return class$;
}

$Class* LayoutManager2::class$ = nullptr;

	} // awt
} // java