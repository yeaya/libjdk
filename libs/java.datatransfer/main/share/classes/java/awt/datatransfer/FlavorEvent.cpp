#include <java/awt/datatransfer/FlavorEvent.h>

#include <java/awt/datatransfer/Clipboard.h>
#include <java/util/EventObject.h>
#include <jcpp.h>

using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;

namespace java {
	namespace awt {
		namespace datatransfer {

$FieldInfo _FlavorEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FlavorEvent, serialVersionUID)},
	{}
};

$MethodInfo _FlavorEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/datatransfer/Clipboard;)V", nullptr, $PUBLIC, $method(FlavorEvent, init$, void, $Clipboard*)},
	{}
};

$ClassInfo _FlavorEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.datatransfer.FlavorEvent",
	"java.util.EventObject",
	nullptr,
	_FlavorEvent_FieldInfo_,
	_FlavorEvent_MethodInfo_
};

$Object* allocate$FlavorEvent($Class* clazz) {
	return $of($alloc(FlavorEvent));
}

void FlavorEvent::init$($Clipboard* source) {
	$EventObject::init$(source);
}

FlavorEvent::FlavorEvent() {
}

$Class* FlavorEvent::load$($String* name, bool initialize) {
	$loadClass(FlavorEvent, name, initialize, &_FlavorEvent_ClassInfo_, allocate$FlavorEvent);
	return class$;
}

$Class* FlavorEvent::class$ = nullptr;

		} // datatransfer
	} // awt
} // java