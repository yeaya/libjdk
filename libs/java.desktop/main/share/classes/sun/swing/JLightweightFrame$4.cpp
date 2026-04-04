#include <sun/swing/JLightweightFrame$4.h>
#include <java/awt/Component.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <sun/swing/JLightweightFrame.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;

namespace sun {
	namespace swing {

void JLightweightFrame$4::init$($JLightweightFrame* this$0) {
	$set(this, this$0, this$0);
}

void JLightweightFrame$4::componentAdded($ContainerEvent* e) {
	$var($Component, c, this->this$0->component);
	if ($nc(e)->getChild() == c) {
		$nc(c)->addPropertyChangeListener("preferredSize"_s, this->this$0->layoutSizeListener);
		c->addPropertyChangeListener("maximumSize"_s, this->this$0->layoutSizeListener);
		c->addPropertyChangeListener("minimumSize"_s, this->this$0->layoutSizeListener);
	}
}

void JLightweightFrame$4::componentRemoved($ContainerEvent* e) {
	$var($Component, c, this->this$0->component);
	if ($nc(e)->getChild() == c) {
		$nc(c)->removePropertyChangeListener(this->this$0->layoutSizeListener);
	}
}

JLightweightFrame$4::JLightweightFrame$4() {
}

$Class* JLightweightFrame$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/JLightweightFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JLightweightFrame$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/JLightweightFrame;)V", nullptr, 0, $method(JLightweightFrame$4, init$, void, $JLightweightFrame*)},
		{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame$4, componentAdded, void, $ContainerEvent*)},
		{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame$4, componentRemoved, void, $ContainerEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.JLightweightFrame",
		"initInterior",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.JLightweightFrame$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.JLightweightFrame$4",
		"java.lang.Object",
		"java.awt.event.ContainerListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.JLightweightFrame"
	};
	$loadClass(JLightweightFrame$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JLightweightFrame$4);
	});
	return class$;
}

$Class* JLightweightFrame$4::class$ = nullptr;

	} // swing
} // sun