#include <java/awt/desktop/UserSessionEvent.h>
#include <java/awt/desktop/AppEvent.h>
#include <java/awt/desktop/UserSessionEvent$Reason.h>
#include <jcpp.h>

using $AppEvent = ::java::awt::desktop::AppEvent;
using $UserSessionEvent$Reason = ::java::awt::desktop::UserSessionEvent$Reason;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

void UserSessionEvent::init$($UserSessionEvent$Reason* reason) {
	$AppEvent::init$();
	$set(this, reason, reason);
}

$UserSessionEvent$Reason* UserSessionEvent::getReason() {
	return this->reason;
}

UserSessionEvent::UserSessionEvent() {
}

$Class* UserSessionEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UserSessionEvent, serialVersionUID)},
		{"reason", "Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PRIVATE | $FINAL, $field(UserSessionEvent, reason)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/desktop/UserSessionEvent$Reason;)V", nullptr, $PUBLIC, $method(UserSessionEvent, init$, void, $UserSessionEvent$Reason*)},
		{"getReason", "()Ljava/awt/desktop/UserSessionEvent$Reason;", nullptr, $PUBLIC, $method(UserSessionEvent, getReason, $UserSessionEvent$Reason*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.desktop.UserSessionEvent$Reason", "java.awt.desktop.UserSessionEvent", "Reason", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.desktop.UserSessionEvent",
		"java.awt.desktop.AppEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.desktop.UserSessionEvent$Reason"
	};
	$loadClass(UserSessionEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UserSessionEvent);
	});
	return class$;
}

$Class* UserSessionEvent::class$ = nullptr;

		} // desktop
	} // awt
} // java