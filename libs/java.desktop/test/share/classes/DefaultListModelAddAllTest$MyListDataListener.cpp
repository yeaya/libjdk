#include <DefaultListModelAddAllTest$MyListDataListener.h>
#include <DefaultListModelAddAllTest.h>
#include <javax/swing/event/ListDataEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;

void DefaultListModelAddAllTest$MyListDataListener::init$() {
}

void DefaultListModelAddAllTest$MyListDataListener::intervalAdded($ListDataEvent* e) {
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

void DefaultListModelAddAllTest$MyListDataListener::intervalRemoved($ListDataEvent* e) {
}

void DefaultListModelAddAllTest$MyListDataListener::contentsChanged($ListDataEvent* e) {
}

DefaultListModelAddAllTest$MyListDataListener::DefaultListModelAddAllTest$MyListDataListener() {
}

$Class* DefaultListModelAddAllTest$MyListDataListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultListModelAddAllTest$MyListDataListener, init$, void)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$MyListDataListener, contentsChanged, void, $ListDataEvent*)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$MyListDataListener, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultListModelAddAllTest$MyListDataListener, intervalRemoved, void, $ListDataEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultListModelAddAllTest$MyListDataListener", "DefaultListModelAddAllTest", "MyListDataListener", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DefaultListModelAddAllTest$MyListDataListener",
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
		"DefaultListModelAddAllTest"
	};
	$loadClass(DefaultListModelAddAllTest$MyListDataListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultListModelAddAllTest$MyListDataListener);
	});
	return class$;
}

$Class* DefaultListModelAddAllTest$MyListDataListener::class$ = nullptr;