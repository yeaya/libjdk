#include <com/apple/laf/AquaTreeUI$LineListener.h>
#include <com/apple/laf/AquaTreeUI.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $AquaTreeUI = ::com::apple::laf::AquaTreeUI;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaTreeUI$LineListener::init$($AquaTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void AquaTreeUI$LineListener::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, name, $nc(e)->getPropertyName());
	if ($nc(name)->equals("JTree.lineStyle"_s)) {
		this->this$0->decodeLineStyle($(e->getNewValue()));
	}
}

AquaTreeUI$LineListener::AquaTreeUI$LineListener() {
}

$Class* AquaTreeUI$LineListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaTreeUI$LineListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaTreeUI;)V", nullptr, 0, $method(AquaTreeUI$LineListener, init$, void, $AquaTreeUI*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTreeUI$LineListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTreeUI$LineListener", "com.apple.laf.AquaTreeUI", "LineListener", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTreeUI$LineListener",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTreeUI"
	};
	$loadClass(AquaTreeUI$LineListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTreeUI$LineListener);
	});
	return class$;
}

$Class* AquaTreeUI$LineListener::class$ = nullptr;

		} // laf
	} // apple
} // com