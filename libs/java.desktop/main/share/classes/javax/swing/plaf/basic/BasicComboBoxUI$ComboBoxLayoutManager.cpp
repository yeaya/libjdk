#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$Handler.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicComboBoxUI$ComboBoxLayoutManager::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboBoxUI$ComboBoxLayoutManager::addLayoutComponent($String* name, $Component* comp) {
}

void BasicComboBoxUI$ComboBoxLayoutManager::removeLayoutComponent($Component* comp) {
}

$Dimension* BasicComboBoxUI$ComboBoxLayoutManager::preferredLayoutSize($Container* parent) {
	return $$nc(this->this$0->getHandler())->preferredLayoutSize(parent);
}

$Dimension* BasicComboBoxUI$ComboBoxLayoutManager::minimumLayoutSize($Container* parent) {
	return $$nc(this->this$0->getHandler())->minimumLayoutSize(parent);
}

void BasicComboBoxUI$ComboBoxLayoutManager::layoutContainer($Container* parent) {
	$$nc(this->this$0->getHandler())->layoutContainer(parent);
}

BasicComboBoxUI$ComboBoxLayoutManager::BasicComboBoxUI$ComboBoxLayoutManager() {
}

$Class* BasicComboBoxUI$ComboBoxLayoutManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$ComboBoxLayoutManager, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(BasicComboBoxUI$ComboBoxLayoutManager, init$, void, $BasicComboBoxUI*)},
		{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, addLayoutComponent, void, $String*, $Component*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, layoutContainer, void, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, minimumLayoutSize, $Dimension*, $Container*)},
		{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, preferredLayoutSize, $Dimension*, $Container*)},
		{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, removeLayoutComponent, void, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager", "javax.swing.plaf.basic.BasicComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager",
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
		"javax.swing.plaf.basic.BasicComboBoxUI"
	};
	$loadClass(BasicComboBoxUI$ComboBoxLayoutManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicComboBoxUI$ComboBoxLayoutManager);
	});
	return class$;
}

$Class* BasicComboBoxUI$ComboBoxLayoutManager::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax