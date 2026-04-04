#include <javax/swing/plaf/metal/MetalComboBoxUI$MetalComboBoxLayoutManager.h>
#include <java/awt/Container.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalComboBoxUI$MetalComboBoxLayoutManager::init$($MetalComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$ComboBoxLayoutManager::init$(this$0);
}

void MetalComboBoxUI$MetalComboBoxLayoutManager::layoutContainer($Container* parent) {
	this->this$0->layoutComboBox(parent, this);
}

void MetalComboBoxUI$MetalComboBoxLayoutManager::superLayout($Container* parent) {
	$BasicComboBoxUI$ComboBoxLayoutManager::layoutContainer(parent);
}

MetalComboBoxUI$MetalComboBoxLayoutManager::MetalComboBoxUI$MetalComboBoxLayoutManager() {
}

$Class* MetalComboBoxUI$MetalComboBoxLayoutManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxUI$MetalComboBoxLayoutManager, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxUI;)V", nullptr, $PUBLIC, $method(MetalComboBoxUI$MetalComboBoxLayoutManager, init$, void, $MetalComboBoxUI*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(MetalComboBoxUI$MetalComboBoxLayoutManager, layoutContainer, void, $Container*)},
		{"superLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(MetalComboBoxUI$MetalComboBoxLayoutManager, superLayout, void, $Container*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboBoxLayoutManager", "javax.swing.plaf.metal.MetalComboBoxUI", "MetalComboBoxLayoutManager", $PUBLIC},
		{"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager", "javax.swing.plaf.basic.BasicComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalComboBoxUI$MetalComboBoxLayoutManager",
		"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalComboBoxUI"
	};
	$loadClass(MetalComboBoxUI$MetalComboBoxLayoutManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalComboBoxUI$MetalComboBoxLayoutManager);
	});
	return class$;
}

$Class* MetalComboBoxUI$MetalComboBoxLayoutManager::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax