#include <javax/swing/event/HyperlinkListener.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;

namespace javax {
	namespace swing {
		namespace event {

$Class* HyperlinkListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"hyperlinkUpdate", "(Ljavax/swing/event/HyperlinkEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(HyperlinkListener, hyperlinkUpdate, void, $HyperlinkEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.HyperlinkListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(HyperlinkListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HyperlinkListener);
	});
	return class$;
}

$Class* HyperlinkListener::class$ = nullptr;

		} // event
	} // swing
} // javax