#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$TitlePaneLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$Handler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicInternalFrameTitlePane$TitlePaneLayout::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
}

void BasicInternalFrameTitlePane$TitlePaneLayout::addLayoutComponent($String* name, $Component* c) {
	$$nc(this->this$0->getHandler())->addLayoutComponent(name, c);
}

void BasicInternalFrameTitlePane$TitlePaneLayout::removeLayoutComponent($Component* c) {
	$$nc(this->this$0->getHandler())->removeLayoutComponent(c);
}

$Dimension* BasicInternalFrameTitlePane$TitlePaneLayout::preferredLayoutSize($Container* c) {
	return $$nc(this->this$0->getHandler())->preferredLayoutSize(c);
}

$Dimension* BasicInternalFrameTitlePane$TitlePaneLayout::minimumLayoutSize($Container* c) {
	return $$nc(this->this$0->getHandler())->minimumLayoutSize(c);
}

void BasicInternalFrameTitlePane$TitlePaneLayout::layoutContainer($Container* c) {
	$$nc(this->this$0->getHandler())->layoutContainer(c);
}

BasicInternalFrameTitlePane$TitlePaneLayout::BasicInternalFrameTitlePane$TitlePaneLayout() {
}

$Class* BasicInternalFrameTitlePane$TitlePaneLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$TitlePaneLayout, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(BasicInternalFrameTitlePane$TitlePaneLayout, init$, void, $BasicInternalFrameTitlePane*)},
		{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$TitlePaneLayout, addLayoutComponent, void, $String*, $Component*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$TitlePaneLayout, layoutContainer, void, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$TitlePaneLayout, minimumLayoutSize, $Dimension*, $Container*)},
		{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$TitlePaneLayout, preferredLayoutSize, $Dimension*, $Container*)},
		{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(BasicInternalFrameTitlePane$TitlePaneLayout, removeLayoutComponent, void, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "TitlePaneLayout", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout",
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
		"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
	};
	$loadClass(BasicInternalFrameTitlePane$TitlePaneLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicInternalFrameTitlePane$TitlePaneLayout);
	});
	return class$;
}

$Class* BasicInternalFrameTitlePane$TitlePaneLayout::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax