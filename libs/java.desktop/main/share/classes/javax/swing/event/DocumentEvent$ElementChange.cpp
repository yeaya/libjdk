#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $ElementArray = $Array<::javax::swing::text::Element>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace event {

$Class* DocumentEvent$ElementChange::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getChildrenAdded", "()[Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentEvent$ElementChange, getChildrenAdded, $ElementArray*)},
		{"getChildrenRemoved", "()[Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentEvent$ElementChange, getChildrenRemoved, $ElementArray*)},
		{"getElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentEvent$ElementChange, getElement, $Element*)},
		{"getIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentEvent$ElementChange, getIndex, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.event.DocumentEvent$ElementChange", "javax.swing.event.DocumentEvent", "ElementChange", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.event.DocumentEvent$ElementChange",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.event.DocumentEvent"
	};
	$loadClass(DocumentEvent$ElementChange, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentEvent$ElementChange);
	});
	return class$;
}

$Class* DocumentEvent$ElementChange::class$ = nullptr;

		} // event
	} // swing
} // javax