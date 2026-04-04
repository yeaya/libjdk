#include <com/apple/laf/AquaInternalFramePaneUI$DockLayoutManager.h>
#include <com/apple/laf/AquaInternalFramePaneUI$Dock.h>
#include <com/apple/laf/AquaInternalFramePaneUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $AquaInternalFramePaneUI = ::com::apple::laf::AquaInternalFramePaneUI;
using $AquaInternalFramePaneUI$Dock = ::com::apple::laf::AquaInternalFramePaneUI$Dock;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaInternalFramePaneUI$DockLayoutManager::init$($AquaInternalFramePaneUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaInternalFramePaneUI$DockLayoutManager::addLayoutComponent($String* name, $Component* comp) {
}

void AquaInternalFramePaneUI$DockLayoutManager::removeLayoutComponent($Component* comp) {
}

$Dimension* AquaInternalFramePaneUI$DockLayoutManager::preferredLayoutSize($Container* parent) {
	return $nc(parent)->getSize();
}

$Dimension* AquaInternalFramePaneUI$DockLayoutManager::minimumLayoutSize($Container* parent) {
	return $nc(parent)->getSize();
}

void AquaInternalFramePaneUI$DockLayoutManager::layoutContainer($Container* parent) {
	if (this->this$0->fDock != nullptr) {
		$cast($AquaInternalFramePaneUI$Dock, this->this$0->fDock)->updateSize();
	}
}

AquaInternalFramePaneUI$DockLayoutManager::AquaInternalFramePaneUI$DockLayoutManager() {
}

$Class* AquaInternalFramePaneUI$DockLayoutManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaInternalFramePaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaInternalFramePaneUI$DockLayoutManager, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaInternalFramePaneUI;)V", nullptr, 0, $method(AquaInternalFramePaneUI$DockLayoutManager, init$, void, $AquaInternalFramePaneUI*)},
		{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFramePaneUI$DockLayoutManager, addLayoutComponent, void, $String*, $Component*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFramePaneUI$DockLayoutManager, layoutContainer, void, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaInternalFramePaneUI$DockLayoutManager, minimumLayoutSize, $Dimension*, $Container*)},
		{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(AquaInternalFramePaneUI$DockLayoutManager, preferredLayoutSize, $Dimension*, $Container*)},
		{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(AquaInternalFramePaneUI$DockLayoutManager, removeLayoutComponent, void, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaInternalFramePaneUI$DockLayoutManager", "com.apple.laf.AquaInternalFramePaneUI", "DockLayoutManager", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaInternalFramePaneUI$DockLayoutManager",
		"java.lang.Object",
		"java.awt.LayoutManager",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaInternalFramePaneUI"
	};
	$loadClass(AquaInternalFramePaneUI$DockLayoutManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaInternalFramePaneUI$DockLayoutManager);
	});
	return class$;
}

$Class* AquaInternalFramePaneUI$DockLayoutManager::class$ = nullptr;

		} // laf
	} // apple
} // com