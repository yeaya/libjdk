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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OpenURIEvent, serialVersionUID)},
		{"uri", "Ljava/net/URI;", nullptr, $FINAL, $field(OpenURIEvent, uri)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URI;)V", nullptr, $PUBLIC, $method(OpenURIEvent, init$, void, $URI*)},
		{"getURI", "()Ljava/net/URI;", nullptr, $PUBLIC, $method(OpenURIEvent, getURI, $URI*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.desktop.OpenURIEvent",
		"java.awt.desktop.AppEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OpenURIEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenURIEvent);
	});
	return class$;
}

$Class* OpenURIEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java