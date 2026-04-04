#include <javax/swing/JToolBar$1.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JButton = ::javax::swing::JButton;
using $JToolBar = ::javax::swing::JToolBar;

namespace javax {
	namespace swing {

void JToolBar$1::init$($JToolBar* this$0) {
	$set(this, this$0, this$0);
	$JButton::init$();
}

$PropertyChangeListener* JToolBar$1::createActionPropertyChangeListener($Action* a) {
	$var($PropertyChangeListener, pcl, this->this$0->createActionChangeListener(this));
	if (pcl == nullptr) {
		$assign(pcl, $JButton::createActionPropertyChangeListener(a));
	}
	return pcl;
}

JToolBar$1::JToolBar$1() {
}

$Class* JToolBar$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JToolBar;", nullptr, $FINAL | $SYNTHETIC, $field(JToolBar$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JToolBar;)V", nullptr, 0, $method(JToolBar$1, init$, void, $JToolBar*)},
		{"createActionPropertyChangeListener", "(Ljavax/swing/Action;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(JToolBar$1, createActionPropertyChangeListener, $PropertyChangeListener*, $Action*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JToolBar",
		"createActionComponent",
		"(Ljavax/swing/Action;)Ljavax/swing/JButton;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JToolBar$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JToolBar$1",
		"javax.swing.JButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JToolBar"
	};
	$loadClass(JToolBar$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JToolBar$1));
	});
	return class$;
}

$Class* JToolBar$1::class$ = nullptr;

	} // swing
} // javax