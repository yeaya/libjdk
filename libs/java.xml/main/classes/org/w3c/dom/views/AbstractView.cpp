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

$MethodInfo _AbstractView_MethodInfo_[] = {
	{"getDocument", "()Lorg/w3c/dom/views/DocumentView;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AbstractView, getDocument, $DocumentView*)},
	{}
};

$ClassInfo _AbstractView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.views.AbstractView",
	nullptr,
	nullptr,
	nullptr,
	_AbstractView_MethodInfo_
};

$Object* allocate$AbstractView($Class* clazz) {
	return $of($alloc(AbstractView));
}

$Class* AbstractView::load$($String* name, bool initialize) {
	$loadClass(AbstractView, name, initialize, &_AbstractView_ClassInfo_, allocate$AbstractView);
	return class$;
}

$Class* AbstractView::class$ = nullptr;

			} // views
		} // dom
	} // w3c
} // org