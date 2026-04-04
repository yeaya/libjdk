#include <java/awt/event/ContainerEvent.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

#undef COMPONENT_ADDED
#undef COMPONENT_REMOVED
#undef CONTAINER_FIRST
#undef CONTAINER_LAST

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace event {

void ContainerEvent::init$($Component* source, int32_t id, $Component* child) {
	$ComponentEvent::init$(source, id);
	$set(this, child, child);
}

$Container* ContainerEvent::getContainer() {
	return ($instanceOf($Container, this->source)) ? $cast($Container, this->source) : ($Container*)nullptr;
}

$Component* ContainerEvent::getChild() {
	return this->child;
}

$String* ContainerEvent::paramString() {
	$useLocalObjectStack();
	$var($String, typeStr, nullptr);
	switch (this->id) {
	case ContainerEvent::COMPONENT_ADDED:
		$assign(typeStr, "COMPONENT_ADDED"_s);
		break;
	case ContainerEvent::COMPONENT_REMOVED:
		$assign(typeStr, "COMPONENT_REMOVED"_s);
		break;
	default:
		$assign(typeStr, "unknown type"_s);
	}
	return $str({typeStr, ",child="_s, $($nc(this->child)->getName())});
}

ContainerEvent::ContainerEvent() {
}

$Class* ContainerEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CONTAINER_FIRST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContainerEvent, CONTAINER_FIRST)},
		{"CONTAINER_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContainerEvent, CONTAINER_LAST)},
		{"COMPONENT_ADDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContainerEvent, COMPONENT_ADDED)},
		{"COMPONENT_REMOVED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ContainerEvent, COMPONENT_REMOVED)},
		{"child", "Ljava/awt/Component;", nullptr, 0, $field(ContainerEvent, child)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ContainerEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;ILjava/awt/Component;)V", nullptr, $PUBLIC, $method(ContainerEvent, init$, void, $Component*, int32_t, $Component*)},
		{"getChild", "()Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(ContainerEvent, getChild, $Component*)},
		{"getContainer", "()Ljava/awt/Container;", nullptr, $PUBLIC, $virtualMethod(ContainerEvent, getContainer, $Container*)},
		{"paramString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ContainerEvent, paramString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.event.ContainerEvent",
		"java.awt.event.ComponentEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ContainerEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ContainerEvent);
	});
	return class$;
}

$Class* ContainerEvent::class$ = nullptr;

		} // event
	} // awt
} // java