#include <DefaultComboBoxModelAddAllElementsTest$MyListDataListener.h>
#include <DefaultComboBoxModelAddAllElementsTest.h>
#include <javax/swing/event/ListDataEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;

void DefaultComboBoxModelAddAllElementsTest$MyListDataListener::init$() {
}

void DefaultComboBoxModelAddAllElementsTest$MyListDataListener::intervalAdded($ListDataEvent* e) {
	$useLocalObjectStack();
	int32_t var$0 = $nc(e)->getIndex1();
	if (var$0 - e->getIndex0() != 50 - 0 - 1) {
		$var($StringBuilder, var$1, $new($StringBuilder));
		var$1->append("Test case failed. Expected "_s);
		var$1->append(50);
		var$1->append(0);
		var$1->append(" elements to be added, but only got "_s);
		var$1->append(e->getIndex1());
		var$1->append(e->getIndex0());
		$throwNew($RuntimeException, $$str(var$1));
	}
}

void DefaultComboBoxModelAddAllElementsTest$MyListDataListener::intervalRemoved($ListDataEvent* e) {
}

void DefaultComboBoxModelAddAllElementsTest$MyListDataListener::contentsChanged($ListDataEvent* e) {
}

DefaultComboBoxModelAddAllElementsTest$MyListDataListener::DefaultComboBoxModelAddAllElementsTest$MyListDataListener() {
}

$Class* DefaultComboBoxModelAddAllElementsTest$MyListDataListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultComboBoxModelAddAllElementsTest$MyListDataListener, init$, void)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$MyListDataListener, contentsChanged, void, $ListDataEvent*)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$MyListDataListener, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultComboBoxModelAddAllElementsTest$MyListDataListener, intervalRemoved, void, $ListDataEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultComboBoxModelAddAllElementsTest$MyListDataListener", "DefaultComboBoxModelAddAllElementsTest", "MyListDataListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DefaultComboBoxModelAddAllElementsTest$MyListDataListener",
		"java.lang.Object",
		"javax.swing.event.ListDataListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DefaultComboBoxModelAddAllElementsTest"
	};
	$loadClass(DefaultComboBoxModelAddAllElementsTest$MyListDataListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultComboBoxModelAddAllElementsTest$MyListDataListener);
	});
	return class$;
}

$Class* DefaultComboBoxModelAddAllElementsTest$MyListDataListener::class$ = nullptr;