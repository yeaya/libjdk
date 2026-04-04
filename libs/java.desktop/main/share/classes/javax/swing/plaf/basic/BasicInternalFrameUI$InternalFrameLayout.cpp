#include <javax/swing/plaf/basic/BasicInternalFrameUI$InternalFrameLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameUI$InternalFrameLayout::init$($BasicInternalFrameUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameUI$InternalFrameLayout::addLayoutComponent($String* name, $Component* c) {
	$$nc(this->this$0->getHandler())->addLayoutComponent(name, c);
}

void BasicInternalFrameUI$InternalFrameLayout::removeLayoutComponent($Component* c) {
	$$nc(this->this$0->getHandler())->removeLayoutComponent(c);
}

$Dimension* BasicInternalFrameUI$InternalFrameLayout::preferredLayoutSize($Container* c) {
	return $$nc(this->this$0->getHandler())->preferredLayoutSize(c);
}

$Dimension* BasicInternalFrameUI$InternalFrameLayout::minimumLayoutSize($Container* c) {
	return $$nc(this->this$0->getHandler())->minimumLayoutSize(c);
}

void BasicInternalFrameUI$InternalFrameLayout::layoutContainer($Container* c) {
	$$nc(this->this$0->getHandler())->layoutContainer(c);
}

BasicInternalFrameUI$InternalFrameLayout::BasicInternalFrameUI$InternalFrameLayout() {
}

$Class* BasicInternalFrameUI$InternalFrameLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameUI$InternalFrameLayout, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameUI;)V", nullptr, $PUBLIC, $method(BasicInternalFrameUI$InternalFrameLayout, init$, void, $BasicInternalFrameUI*)},
		{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$InternalFrameLayout, addLayoutComponent, void, $String*, $Component*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$InternalFrameLayout, layoutContainer, void, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$InternalFrameLayout, minimumLayoutSize, $Dimension*, $Container*)},
		{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$InternalFrameLayout, preferredLayoutSize, $Dimension*, $Container*)},
		{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameUI$InternalFrameLayout, removeLayoutComponent, void, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFrameLayout", "javax.swing.plaf.basic.BasicInternalFrameUI", "InternalFrameLayout", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameUI$InternalFrameLayout",
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
		"javax.swing.plaf.basic.BasicInternalFrameUI"
	};
	$loadClass(BasicInternalFrameUI$InternalFrameLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicInternalFrameUI$InternalFrameLayout);
	});
	return class$;
}

$Class* BasicInternalFrameUI$InternalFrameLayout::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax