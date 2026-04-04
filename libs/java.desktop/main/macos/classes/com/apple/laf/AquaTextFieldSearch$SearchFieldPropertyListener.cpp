#include <com/apple/laf/AquaTextFieldSearch$SearchFieldPropertyListener.h>
#include <com/apple/laf/AquaTextFieldSearch.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $AquaTextFieldSearch = ::com::apple::laf::AquaTextFieldSearch;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

void AquaTextFieldSearch$SearchFieldPropertyListener::init$() {
}

void AquaTextFieldSearch$SearchFieldPropertyListener::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	$var($Object, source, $nc(evt)->getSource());
	if (!($instanceOf($JTextComponent, source))) {
		return;
	}
	$var($String, propertyName, evt->getPropertyName());
	bool var$3 = !"JTextField.variant"_s->equals(propertyName);
	bool var$2 = var$3 && !"JTextField.Search.FindPopup"_s->equals(propertyName);
	bool var$1 = var$2 && !"JTextField.Search.FindAction"_s->equals(propertyName);
	bool var$0 = var$1 && !"JTextField.Search.CancelAction"_s->equals(propertyName);
	if (var$0 && !"JTextField.Search.Prompt"_s->equals(propertyName)) {
		return;
	}
	$var($JTextComponent, c, $cast($JTextComponent, source));
	if ($AquaTextFieldSearch::wantsToBeASearchField(c)) {
		$AquaTextFieldSearch::uninstallSearchField(c);
		$AquaTextFieldSearch::installSearchField(c);
	} else {
		$AquaTextFieldSearch::uninstallSearchField(c);
	}
}

AquaTextFieldSearch$SearchFieldPropertyListener::AquaTextFieldSearch$SearchFieldPropertyListener() {
}

$Class* AquaTextFieldSearch$SearchFieldPropertyListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaTextFieldSearch$SearchFieldPropertyListener, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaTextFieldSearch$SearchFieldPropertyListener, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTextFieldSearch$SearchFieldPropertyListener", "com.apple.laf.AquaTextFieldSearch", "SearchFieldPropertyListener", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaTextFieldSearch$SearchFieldPropertyListener",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTextFieldSearch"
	};
	$loadClass(AquaTextFieldSearch$SearchFieldPropertyListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTextFieldSearch$SearchFieldPropertyListener);
	});
	return class$;
}

$Class* AquaTextFieldSearch$SearchFieldPropertyListener::class$ = nullptr;

		} // laf
	} // apple
} // com