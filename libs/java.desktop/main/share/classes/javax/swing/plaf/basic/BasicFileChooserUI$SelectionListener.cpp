#include <javax/swing/plaf/basic/BasicFileChooserUI$SelectionListener.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$Handler.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicFileChooserUI$SelectionListener::init$($BasicFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicFileChooserUI$SelectionListener::valueChanged($ListSelectionEvent* e) {
	$$nc(this->this$0->getHandler())->valueChanged(e);
}

BasicFileChooserUI$SelectionListener::BasicFileChooserUI$SelectionListener() {
}

$Class* BasicFileChooserUI$SelectionListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicFileChooserUI$SelectionListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicFileChooserUI;)V", nullptr, $PROTECTED, $method(BasicFileChooserUI$SelectionListener, init$, void, $BasicFileChooserUI*)},
		{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicFileChooserUI$SelectionListener, valueChanged, void, $ListSelectionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicFileChooserUI$SelectionListener", "javax.swing.plaf.basic.BasicFileChooserUI", "SelectionListener", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicFileChooserUI$SelectionListener",
		"java.lang.Object",
		"javax.swing.event.ListSelectionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicFileChooserUI"
	};
	$loadClass(BasicFileChooserUI$SelectionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicFileChooserUI$SelectionListener);
	});
	return class$;
}

$Class* BasicFileChooserUI$SelectionListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax