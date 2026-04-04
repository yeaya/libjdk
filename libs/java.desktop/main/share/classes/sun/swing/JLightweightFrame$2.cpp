#include <sun/swing/JLightweightFrame$2.h>
#include <java/awt/Dimension.h>
#include <java/beans/PropertyChangeEvent.h>
#include <sun/swing/JLightweightFrame.h>
#include <sun/swing/LightweightContent.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLightweightFrame = ::sun::swing::JLightweightFrame;

namespace sun {
	namespace swing {

void JLightweightFrame$2::init$($JLightweightFrame* this$0) {
	$set(this, this$0, this$0);
}

void JLightweightFrame$2::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($Dimension, d, $cast($Dimension, $nc(e)->getNewValue()));
	if ("preferredSize"_s->equals($(e->getPropertyName()))) {
		$nc(this->this$0->content)->preferredSizeChanged($nc(d)->width, $nc(d)->height);
	} else if ("maximumSize"_s->equals($(e->getPropertyName()))) {
		$nc(this->this$0->content)->maximumSizeChanged($nc(d)->width, $nc(d)->height);
	} else if ("minimumSize"_s->equals($(e->getPropertyName()))) {
		$nc(this->this$0->content)->minimumSizeChanged($nc(d)->width, $nc(d)->height);
	}
}

JLightweightFrame$2::JLightweightFrame$2() {
}

$Class* JLightweightFrame$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/JLightweightFrame;", nullptr, $FINAL | $SYNTHETIC, $field(JLightweightFrame$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/JLightweightFrame;)V", nullptr, 0, $method(JLightweightFrame$2, init$, void, $JLightweightFrame*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JLightweightFrame$2, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.JLightweightFrame",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.JLightweightFrame$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.JLightweightFrame$2",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
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
	$loadClass(JLightweightFrame$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JLightweightFrame$2);
	});
	return class$;
}

$Class* JLightweightFrame$2::class$ = nullptr;

	} // swing
} // sun