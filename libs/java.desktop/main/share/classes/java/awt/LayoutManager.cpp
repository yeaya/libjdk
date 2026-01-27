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

$MethodInfo _LayoutManager_MethodInfo_[] = {
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, addLayoutComponent, void, $String*, $Component*)},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, layoutContainer, void, $Container*)},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, minimumLayoutSize, $Dimension*, $Container*)},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, preferredLayoutSize, $Dimension*, $Container*)},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LayoutManager, removeLayoutComponent, void, $Component*)},
	{}
};

$ClassInfo _LayoutManager_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.LayoutManager",
	nullptr,
	nullptr,
	nullptr,
	_LayoutManager_MethodInfo_
};

$Object* allocate$LayoutManager($Class* clazz) {
	return $of($alloc(LayoutManager));
}

$Class* LayoutManager::load$($String* name, bool initialize) {
	$loadClass(LayoutManager, name, initialize, &_LayoutManager_ClassInfo_, allocate$LayoutManager);
	return class$;
}

$Class* LayoutManager::class$ = nullptr;

	} // awt
} // java