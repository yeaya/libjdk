#include <javax/swing/event/TreeExpansionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace event {

void TreeExpansionEvent::init$(Object$* source, $TreePath* path) {
	$EventObject::init$(source);
	$set(this, path, path);
}

$TreePath* TreeExpansionEvent::getPath() {
	return this->path;
}

TreeExpansionEvent::TreeExpansionEvent() {
}

$Class* TreeExpansionEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED, $field(TreeExpansionEvent, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, $method(TreeExpansionEvent, init$, void, Object$*, $TreePath*)},
		{"getPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC, $virtualMethod(TreeExpansionEvent, getPath, $TreePath*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.event.TreeExpansionEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TreeExpansionEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeExpansionEvent);
	});
	return class$;
}

$Class* TreeExpansionEvent::class$ = nullptr;

		} // event
	} // swing
} // javax