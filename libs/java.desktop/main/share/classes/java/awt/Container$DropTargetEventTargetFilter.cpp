#include <java/awt/Container$DropTargetEventTargetFilter.h>
#include <java/awt/Component.h>
#include <java/awt/Container$EventTargetFilter.h>
#include <java/awt/Container.h>
#include <java/awt/dnd/DropTarget.h>
#include <jcpp.h>

#undef FILTER

using $Component = ::java::awt::Component;
using $Container$EventTargetFilter = ::java::awt::Container$EventTargetFilter;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Container$EventTargetFilter* Container$DropTargetEventTargetFilter::FILTER = nullptr;

void Container$DropTargetEventTargetFilter::init$() {
}

bool Container$DropTargetEventTargetFilter::accept($Component* comp) {
	$var($DropTarget, dt, $nc(comp)->getDropTarget());
	return dt != nullptr && dt->isActive();
}

void Container$DropTargetEventTargetFilter::clinit$($Class* clazz) {
	$assignStatic(Container$DropTargetEventTargetFilter::FILTER, $new(Container$DropTargetEventTargetFilter));
}

Container$DropTargetEventTargetFilter::Container$DropTargetEventTargetFilter() {
}

$Class* Container$DropTargetEventTargetFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FILTER", "Ljava/awt/Container$EventTargetFilter;", nullptr, $STATIC | $FINAL, $staticField(Container$DropTargetEventTargetFilter, FILTER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Container$DropTargetEventTargetFilter, init$, void)},
		{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC, $virtualMethod(Container$DropTargetEventTargetFilter, accept, bool, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Container$DropTargetEventTargetFilter", "java.awt.Container", "DropTargetEventTargetFilter", $STATIC},
		{"java.awt.Container$EventTargetFilter", "java.awt.Container", "EventTargetFilter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Container$DropTargetEventTargetFilter",
		"java.lang.Object",
		"java.awt.Container$EventTargetFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Container"
	};
	$loadClass(Container$DropTargetEventTargetFilter, name, initialize, &classInfo$$, Container$DropTargetEventTargetFilter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Container$DropTargetEventTargetFilter);
	});
	return class$;
}

$Class* Container$DropTargetEventTargetFilter::class$ = nullptr;

	} // awt
} // java