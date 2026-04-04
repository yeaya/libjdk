#include <java/awt/KeyboardFocusManager$HeavyweightFocusRequest.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager$LightweightFocusRequest.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef CLEAR_GLOBAL_FOCUS_OWNER
#undef FINE

using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $KeyboardFocusManager$LightweightFocusRequest = ::java::awt::KeyboardFocusManager$LightweightFocusRequest;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

KeyboardFocusManager$HeavyweightFocusRequest* KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER = nullptr;

void KeyboardFocusManager$HeavyweightFocusRequest::init$() {
	$set(this, heavyweight, nullptr);
	$set(this, lightweightRequests, nullptr);
}

void KeyboardFocusManager$HeavyweightFocusRequest::init$($Component* heavyweight, $Component* descendant, bool temporary, $FocusEvent$Cause* cause) {
	$init($KeyboardFocusManager);
	$init($PlatformLogger$Level);
	if ($nc($KeyboardFocusManager::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (heavyweight == nullptr) {
			$KeyboardFocusManager::log->fine("Assertion (heavyweight != null) failed"_s);
		}
	}
	$set(this, heavyweight, heavyweight);
	$set(this, lightweightRequests, $new($LinkedList));
	addLightweightRequest(descendant, temporary, cause);
}

bool KeyboardFocusManager$HeavyweightFocusRequest::addLightweightRequest($Component* descendant, bool temporary, $FocusEvent$Cause* cause) {
	$useLocalObjectStack();
	$init($KeyboardFocusManager);
	$init($PlatformLogger$Level);
	if ($nc($KeyboardFocusManager::log)->isLoggable($PlatformLogger$Level::FINE)) {
		if (this == KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER) {
			$KeyboardFocusManager::log->fine("Assertion (this != HeavyweightFocusRequest.CLEAR_GLOBAL_FOCUS_OWNER) failed"_s);
		}
		if (descendant == nullptr) {
			$KeyboardFocusManager::log->fine("Assertion (descendant != null) failed"_s);
		}
	}
	$var($Component, lastDescendant, ($nc(this->lightweightRequests)->size() > 0) ? $nc(($$cast($KeyboardFocusManager$LightweightFocusRequest, this->lightweightRequests->getLast())))->component : ($Component*)nullptr);
	if (descendant != lastDescendant) {
		this->lightweightRequests->add($$new($KeyboardFocusManager$LightweightFocusRequest, descendant, temporary, cause));
		return true;
	} else {
		return false;
	}
}

$KeyboardFocusManager$LightweightFocusRequest* KeyboardFocusManager$HeavyweightFocusRequest::getFirstLightweightRequest() {
	if (this == KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER) {
		return nullptr;
	}
	return $cast($KeyboardFocusManager$LightweightFocusRequest, $nc(this->lightweightRequests)->getFirst());
}

$String* KeyboardFocusManager$HeavyweightFocusRequest::toString() {
	$useLocalObjectStack();
	bool first = true;
	$var($String, str, $str({"HeavyweightFocusRequest[heavyweight="_s, this->heavyweight, ",lightweightRequests="_s}));
	if (this->lightweightRequests == nullptr) {
		$plusAssign(str, nullptr);
	} else {
		$plusAssign(str, "["_s);
		{
			$var($Iterator, i$, this->lightweightRequests->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($KeyboardFocusManager$LightweightFocusRequest, lwRequest, $cast($KeyboardFocusManager$LightweightFocusRequest, i$->next()));
				{
					if (first) {
						first = false;
					} else {
						$plusAssign(str, ","_s);
					}
					$plusAssign(str, lwRequest);
				}
			}
		}
		$plusAssign(str, "]"_s);
	}
	$plusAssign(str, "]"_s);
	return str;
}

void KeyboardFocusManager$HeavyweightFocusRequest::clinit$($Class* clazz) {
	$assignStatic(KeyboardFocusManager$HeavyweightFocusRequest::CLEAR_GLOBAL_FOCUS_OWNER, $new(KeyboardFocusManager$HeavyweightFocusRequest));
}

KeyboardFocusManager$HeavyweightFocusRequest::KeyboardFocusManager$HeavyweightFocusRequest() {
}

$Class* KeyboardFocusManager$HeavyweightFocusRequest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"heavyweight", "Ljava/awt/Component;", nullptr, $FINAL, $field(KeyboardFocusManager$HeavyweightFocusRequest, heavyweight)},
		{"lightweightRequests", "Ljava/util/LinkedList;", "Ljava/util/LinkedList<Ljava/awt/KeyboardFocusManager$LightweightFocusRequest;>;", $FINAL, $field(KeyboardFocusManager$HeavyweightFocusRequest, lightweightRequests)},
		{"CLEAR_GLOBAL_FOCUS_OWNER", "Ljava/awt/KeyboardFocusManager$HeavyweightFocusRequest;", nullptr, $STATIC | $FINAL, $staticField(KeyboardFocusManager$HeavyweightFocusRequest, CLEAR_GLOBAL_FOCUS_OWNER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(KeyboardFocusManager$HeavyweightFocusRequest, init$, void)},
		{"<init>", "(Ljava/awt/Component;Ljava/awt/Component;ZLjava/awt/event/FocusEvent$Cause;)V", nullptr, 0, $method(KeyboardFocusManager$HeavyweightFocusRequest, init$, void, $Component*, $Component*, bool, $FocusEvent$Cause*)},
		{"addLightweightRequest", "(Ljava/awt/Component;ZLjava/awt/event/FocusEvent$Cause;)Z", nullptr, 0, $method(KeyboardFocusManager$HeavyweightFocusRequest, addLightweightRequest, bool, $Component*, bool, $FocusEvent$Cause*)},
		{"getFirstLightweightRequest", "()Ljava/awt/KeyboardFocusManager$LightweightFocusRequest;", nullptr, 0, $method(KeyboardFocusManager$HeavyweightFocusRequest, getFirstLightweightRequest, $KeyboardFocusManager$LightweightFocusRequest*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$HeavyweightFocusRequest, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.KeyboardFocusManager$HeavyweightFocusRequest", "java.awt.KeyboardFocusManager", "HeavyweightFocusRequest", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.awt.KeyboardFocusManager$HeavyweightFocusRequest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.KeyboardFocusManager"
	};
	$loadClass(KeyboardFocusManager$HeavyweightFocusRequest, name, initialize, &classInfo$$, KeyboardFocusManager$HeavyweightFocusRequest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardFocusManager$HeavyweightFocusRequest);
	});
	return class$;
}

$Class* KeyboardFocusManager$HeavyweightFocusRequest::class$ = nullptr;

	} // awt
} // java