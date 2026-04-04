#include <org/w3c/dom/views/DocumentView.h>
#include <org/w3c/dom/views/AbstractView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractView = ::org::w3c::dom::views::AbstractView;

namespace org {
	namespace w3c {
		namespace dom {
			namespace views {

$Class* DocumentView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDefaultView", "()Lorg/w3c/dom/views/AbstractView;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentView, getDefaultView, $AbstractView*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.views.DocumentView",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DocumentView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentView);
	});
	return class$;
}

$Class* DocumentView::class$ = nullptr;

			} // views
		} // dom
	} // w3c
} // org