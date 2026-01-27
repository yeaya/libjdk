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
using $BasicComboBoxUI$Handler = ::javax::swing::plaf::basic::BasicComboBoxUI$Handler;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicComboBoxUI$ComboBoxLayoutManager_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicComboBoxUI$ComboBoxLayoutManager, this$0)},
	{}
};

$MethodInfo _BasicComboBoxUI$ComboBoxLayoutManager_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicComboBoxUI;)V", nullptr, $PUBLIC, $method(BasicComboBoxUI$ComboBoxLayoutManager, init$, void, $BasicComboBoxUI*)},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, addLayoutComponent, void, $String*, $Component*)},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, layoutContainer, void, $Container*)},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, minimumLayoutSize, $Dimension*, $Container*)},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, preferredLayoutSize, $Dimension*, $Container*)},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(BasicComboBoxUI$ComboBoxLayoutManager, removeLayoutComponent, void, $Component*)},
	{}
};

$InnerClassInfo _BasicComboBoxUI$ComboBoxLayoutManager_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager", "javax.swing.plaf.basic.BasicComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
	{}
};

$ClassInfo _BasicComboBoxUI$ComboBoxLayoutManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_BasicComboBoxUI$ComboBoxLayoutManager_FieldInfo_,
	_BasicComboBoxUI$ComboBoxLayoutManager_MethodInfo_,
	nullptr,
	nullptr,
	_BasicComboBoxUI$ComboBoxLayoutManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicComboBoxUI"
};

$Object* allocate$BasicComboBoxUI$ComboBoxLayoutManager($Class* clazz) {
	return $of($alloc(BasicComboBoxUI$ComboBoxLayoutManager));
}

void BasicComboBoxUI$ComboBoxLayoutManager::init$($BasicComboBoxUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicComboBoxUI$ComboBoxLayoutManager::addLayoutComponent($String* name, $Component* comp) {
}

void BasicComboBoxUI$ComboBoxLayoutManager::removeLayoutComponent($Component* comp) {
}

$Dimension* BasicComboBoxUI$ComboBoxLayoutManager::preferredLayoutSize($Container* parent) {
	return $nc($(this->this$0->getHandler()))->preferredLayoutSize(parent);
}

$Dimension* BasicComboBoxUI$ComboBoxLayoutManager::minimumLayoutSize($Container* parent) {
	return $nc($(this->this$0->getHandler()))->minimumLayoutSize(parent);
}

void BasicComboBoxUI$ComboBoxLayoutManager::layoutContainer($Container* parent) {
	$nc($(this->this$0->getHandler()))->layoutContainer(parent);
}

BasicComboBoxUI$ComboBoxLayoutManager::BasicComboBoxUI$ComboBoxLayoutManager() {
}

$Class* BasicComboBoxUI$ComboBoxLayoutManager::load$($String* name, bool initialize) {
	$loadClass(BasicComboBoxUI$ComboBoxLayoutManager, name, initialize, &_BasicComboBoxUI$ComboBoxLayoutManager_ClassInfo_, allocate$BasicComboBoxUI$ComboBoxLayoutManager);
	return class$;
}

$Class* BasicComboBoxUI$ComboBoxLayoutManager::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax