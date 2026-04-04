#include <javax/swing/plaf/basic/BasicListUI$ListDataHandler.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/plaf/basic/BasicListUI$Handler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicListUI$ListDataHandler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicListUI$ListDataHandler::intervalAdded($ListDataEvent* e) {
	$$nc(this->this$0->getHandler())->intervalAdded(e);
}

void BasicListUI$ListDataHandler::intervalRemoved($ListDataEvent* e) {
	$$nc(this->this$0->getHandler())->intervalRemoved(e);
}

void BasicListUI$ListDataHandler::contentsChanged($ListDataEvent* e) {
	$$nc(this->this$0->getHandler())->contentsChanged(e);
}

BasicListUI$ListDataHandler::BasicListUI$ListDataHandler() {
}

$Class* BasicListUI$ListDataHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$ListDataHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PUBLIC, $method(BasicListUI$ListDataHandler, init$, void, $BasicListUI*)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$ListDataHandler, contentsChanged, void, $ListDataEvent*)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$ListDataHandler, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicListUI$ListDataHandler, intervalRemoved, void, $ListDataEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicListUI$ListDataHandler", "javax.swing.plaf.basic.BasicListUI", "ListDataHandler", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicListUI$ListDataHandler",
		"java.lang.Object",
		"javax.swing.event.ListDataListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicListUI"
	};
	$loadClass(BasicListUI$ListDataHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicListUI$ListDataHandler);
	});
	return class$;
}

$Class* BasicListUI$ListDataHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax