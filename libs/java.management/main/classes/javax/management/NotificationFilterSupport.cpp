#include <javax/management/NotificationFilterSupport.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $Notification = ::javax::management::Notification;

namespace javax {
	namespace management {

void NotificationFilterSupport::init$() {
	$set(this, enabledTypes, $new($Vector));
}

bool NotificationFilterSupport::isNotificationEnabled($Notification* notification) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($String, type, $nc(notification)->getType());
		if (type == nullptr) {
			return false;
		}
		try {
			$var($Iterator, i$, $nc(this->enabledTypes)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, prefix, $cast($String, i$->next()));
				if ($nc(type)->startsWith(prefix)) {
					return true;
				}
			}
		} catch ($NullPointerException& e) {
			return false;
		}
		return false;
	}
}

void NotificationFilterSupport::enableType($String* prefix) {
	$synchronized(this) {
		if (prefix == nullptr) {
			$throwNew($IllegalArgumentException, "The prefix cannot be null."_s);
		}
		if (!$nc(this->enabledTypes)->contains(prefix)) {
			this->enabledTypes->add(prefix);
		}
	}
}

void NotificationFilterSupport::disableType($String* prefix) {
	$synchronized(this) {
		$nc(this->enabledTypes)->remove(prefix);
	}
}

void NotificationFilterSupport::disableAllTypes() {
	$synchronized(this) {
		$nc(this->enabledTypes)->clear();
	}
}

$Vector* NotificationFilterSupport::getEnabledTypes() {
	$synchronized(this) {
		return $cast($Vector, this->enabledTypes);
	}
}

NotificationFilterSupport::NotificationFilterSupport() {
}

$Class* NotificationFilterSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotificationFilterSupport, serialVersionUID)},
		{"enabledTypes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(NotificationFilterSupport, enabledTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NotificationFilterSupport, init$, void)},
		{"disableAllTypes", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(NotificationFilterSupport, disableAllTypes, void)},
		{"disableType", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(NotificationFilterSupport, disableType, void, $String*)},
		{"enableType", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(NotificationFilterSupport, enableType, void, $String*), "java.lang.IllegalArgumentException"},
		{"getEnabledTypes", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljava/lang/String;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(NotificationFilterSupport, getEnabledTypes, $Vector*)},
		{"isNotificationEnabled", "(Ljavax/management/Notification;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(NotificationFilterSupport, isNotificationEnabled, bool, $Notification*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.NotificationFilterSupport",
		"java.lang.Object",
		"javax.management.NotificationFilter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotificationFilterSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationFilterSupport);
	});
	return class$;
}

$Class* NotificationFilterSupport::class$ = nullptr;

	} // management
} // javax