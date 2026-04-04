#include <javax/swing/text/TextAction.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/Enumeration.h>
#include <java/util/EventObject.h>
#include <java/util/Hashtable.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef NAME

using $ActionArray = $Array<::javax::swing::Action>;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

void TextAction::init$($String* name) {
	$AbstractAction::init$(name);
}

$JTextComponent* TextAction::getTextComponent($ActionEvent* e) {
	if (e != nullptr) {
		$var($Object, o, e->getSource());
		if ($instanceOf($JTextComponent, o)) {
			return $cast($JTextComponent, o);
		}
	}
	return getFocusedComponent();
}

$ActionArray* TextAction::augmentList($ActionArray* list1, $ActionArray* list2) {
	$init(TextAction);
	$useLocalObjectStack();
	$var($Hashtable, h, $new($Hashtable));
	{
		$var($ActionArray, arr$, list1);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Action, a, arr$->get(i$));
			{
				$var($String, value, $cast($String, $nc(a)->getValue($Action::NAME)));
				h->put((value != nullptr ? value : ""_s), a);
			}
		}
	}
	{
		$var($ActionArray, arr$, list2);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Action, a, arr$->get(i$));
			{
				$var($String, value, $cast($String, $nc(a)->getValue($Action::NAME)));
				h->put((value != nullptr ? value : ""_s), a);
			}
		}
	}
	$var($ActionArray, actions, $new($ActionArray, h->size()));
	int32_t index = 0;
	{
		$var($Enumeration, e, h->elements());
		for (; $nc(e)->hasMoreElements();) {
			actions->set(index++, $$cast($Action, e->nextElement()));
		}
	}
	return actions;
}

$JTextComponent* TextAction::getFocusedComponent() {
	return $JTextComponent::getFocusedComponent();
}

TextAction::TextAction() {
}

$Class* TextAction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(TextAction, init$, void, $String*)},
		{"augmentList", "([Ljavax/swing/Action;[Ljavax/swing/Action;)[Ljavax/swing/Action;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(TextAction, augmentList, $ActionArray*, $ActionArray*, $ActionArray*)},
		{"getFocusedComponent", "()Ljavax/swing/text/JTextComponent;", nullptr, $PROTECTED | $FINAL, $method(TextAction, getFocusedComponent, $JTextComponent*)},
		{"getTextComponent", "(Ljava/awt/event/ActionEvent;)Ljavax/swing/text/JTextComponent;", nullptr, $PROTECTED | $FINAL, $method(TextAction, getTextComponent, $JTextComponent*, $ActionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.swing.text.TextAction",
		"javax.swing.AbstractAction",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TextAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TextAction));
	});
	return class$;
}

$Class* TextAction::class$ = nullptr;

		} // text
	} // swing
} // javax