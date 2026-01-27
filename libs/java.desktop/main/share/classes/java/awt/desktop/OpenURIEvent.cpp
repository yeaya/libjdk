#include <java/awt/desktop/OpenURIEvent.h>

#include <java/awt/desktop/AppEvent.h>
#include <java/net/URI.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;

namespace java {
	namespace awt {
		namespace desktop {

$FieldInfo _OpenURIEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OpenURIEvent, serialVersionUID)},
	{"uri", "Ljava/net/URI;", nullptr, $FINAL, $field(OpenURIEvent, uri)},
	{}
};

$MethodInfo _OpenURIEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(OpenURIEvent, init$, void, $URI*)},
	{"getURI", "()Ljava/net/URI;", nullptr, $PUBLIC, $method(OpenURIEvent, getURI, $URI*)},
	{}
};

$ClassInfo _OpenURIEvent_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.awt.desktop.OpenURIEvent",
	"java.awt.desktop.AppEvent",
	nullptr,
	_OpenURIEvent_FieldInfo_,
	_OpenURIEvent_MethodInfo_
};

$Object* allocate$OpenURIEvent($Class* clazz) {
	return $of($alloc(OpenURIEvent));
}

void OpenURIEvent::init$($URI* uri) {
	$AppEvent::init$();
	$set(this, uri, uri);
}

$URI* OpenURIEvent::getURI() {
	return this->uri;
}

OpenURIEvent::OpenURIEvent() {
}

$Class* OpenURIEvent::load$($String* name, bool initialize) {
	$loadClass(OpenURIEvent, name, initialize, &_OpenURIEvent_ClassInfo_, allocate$OpenURIEvent);
	return class$;
}

$Class* OpenURIEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java