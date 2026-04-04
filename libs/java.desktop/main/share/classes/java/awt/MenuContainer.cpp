#include <java/awt/MenuContainer.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/MenuComponent.h>
#include <jcpp.h>

using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $MenuComponent = ::java::awt::MenuComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* MenuContainer::load$($String* name, bool initialize) {
	$CompoundAttribute postEventmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuContainer, getFont, $Font*)},
		{"postEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(MenuContainer, postEvent, bool, $Event*), nullptr, nullptr, postEventmethodAnnotations$$},
		{"remove", "(Ljava/awt/MenuComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuContainer, remove, void, $MenuComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.MenuContainer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuContainer);
	});
	return class$;
}

$Class* MenuContainer::class$ = nullptr;

	} // awt
} // java