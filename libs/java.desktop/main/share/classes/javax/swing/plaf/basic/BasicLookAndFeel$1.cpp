#include <javax/swing/plaf/basic/BasicLookAndFeel$1.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicLookAndFeel$1::init$($BasicLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

void BasicLookAndFeel$1::propertyChange($PropertyChangeEvent* prpChg) {
	this->this$0->uninitialize();
}

BasicLookAndFeel$1::BasicLookAndFeel$1() {
}

$Class* BasicLookAndFeel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicLookAndFeel$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicLookAndFeel;)V", nullptr, 0, $method(BasicLookAndFeel$1, init$, void, $BasicLookAndFeel*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicLookAndFeel$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicLookAndFeel",
		"installAWTEventListener",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicLookAndFeel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicLookAndFeel$1",
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
		"javax.swing.plaf.basic.BasicLookAndFeel"
	};
	$loadClass(BasicLookAndFeel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicLookAndFeel$1);
	});
	return class$;
}

$Class* BasicLookAndFeel$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax