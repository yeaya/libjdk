#include <javax/swing/JMenu$1.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace javax {
	namespace swing {

void JMenu$1::init$($JMenu* this$0) {
	$set(this, this$0, this$0);
	$JMenuItem::init$();
}

$PropertyChangeListener* JMenu$1::createActionPropertyChangeListener($Action* a) {
	$var($PropertyChangeListener, pcl, this->this$0->createActionChangeListener(this));
	if (pcl == nullptr) {
		$assign(pcl, $JMenuItem::createActionPropertyChangeListener(a));
	}
	return pcl;
}

JMenu$1::JMenu$1() {
}

$Class* JMenu$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JMenu;", nullptr, $FINAL | $SYNTHETIC, $field(JMenu$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JMenu;)V", nullptr, 0, $method(JMenu$1, init$, void, $JMenu*)},
		{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(JMenu$1, createActionPropertyChangeListener, $PropertyChangeListener*, $Action*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JMenu",
		"createActionComponent",
		"(Ljavax/swing/Action;)Ljavax/swing/JMenuItem;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JMenu$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JMenu$1",
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
		"javax.swing.JMenu"
	};
	$loadClass(JMenu$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JMenu$1));
	});
	return class$;
}

$Class* JMenu$1::class$ = nullptr;

	} // swing
} // javax