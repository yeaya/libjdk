#include <org/w3c/dom/views/AbstractView.h>
#include <org/w3c/dom/views/DocumentView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentView = ::org::w3c::dom::views::DocumentView;

namespace org {
	namespace w3c {
		namespace dom {
			namespace views {

$Class* AbstractView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDocument", "()Lorg/w3c/dom/views/DocumentView;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractView, getDocument, $DocumentView*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.views.AbstractView",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(AbstractView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractView);
	});
	return class$;
}

$Class* AbstractView::class$ = nullptr;

			} // views
		} // dom
	} // w3c
} // org