#include <javax/swing/plaf/metal/MetalTitlePane$IconifyAction.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/Locale.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $UIManager = ::javax::swing::UIManager;
using $MetalTitlePane = ::javax::swing::plaf::metal::MetalTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalTitlePane$IconifyAction::init$($MetalTitlePane* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$AbstractAction::init$($($UIManager::getString("MetalTitlePane.iconifyTitle"_s, $(this$0->getLocale()))));
}

void MetalTitlePane$IconifyAction::actionPerformed($ActionEvent* e) {
	this->this$0->iconify();
}

MetalTitlePane$IconifyAction::MetalTitlePane$IconifyAction() {
}

$Class* MetalTitlePane$IconifyAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTitlePane$IconifyAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalTitlePane;)V", nullptr, $PUBLIC, $method(MetalTitlePane$IconifyAction, init$, void, $MetalTitlePane*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(MetalTitlePane$IconifyAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalTitlePane$IconifyAction", "javax.swing.plaf.metal.MetalTitlePane", "IconifyAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalTitlePane$IconifyAction",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalTitlePane"
	};
	$loadClass(MetalTitlePane$IconifyAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalTitlePane$IconifyAction));
	});
	return class$;
}

$Class* MetalTitlePane$IconifyAction::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax