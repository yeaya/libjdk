#include <javax/swing/JPopupMenu$1.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;

namespace javax {
	namespace swing {

void JPopupMenu$1::init$($JPopupMenu* this$0) {
	$set(this, this$0, this$0);
	$JMenuItem::init$();
}

$PropertyChangeListener* JPopupMenu$1::createActionPropertyChangeListener($Action* a) {
	$var($PropertyChangeListener, pcl, this->this$0->createActionChangeListener(this));
	if (pcl == nullptr) {
		$assign(pcl, $JMenuItem::createActionPropertyChangeListener(a));
	}
	return pcl;
}

JPopupMenu$1::JPopupMenu$1() {
}

$Class* JPopupMenu$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JPopupMenu;", nullptr, $FINAL | $SYNTHETIC, $field(JPopupMenu$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JPopupMenu;)V", nullptr, 0, $method(JPopupMenu$1, init$, void, $JPopupMenu*)},
		{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(JPopupMenu$1, createActionPropertyChangeListener, $PropertyChangeListener*, $Action*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JPopupMenu",
		"createActionComponent",
		"(Ljavax/swing/Action;)Ljavax/swing/JMenuItem;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JPopupMenu$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JPopupMenu$1",
		"javax.swing.JMenuItem",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JPopupMenu"
	};
	$loadClass(JPopupMenu$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JPopupMenu$1));
	});
	return class$;
}

$Class* JPopupMenu$1::class$ = nullptr;

	} // swing
} // javax