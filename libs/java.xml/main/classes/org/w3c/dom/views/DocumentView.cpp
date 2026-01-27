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

$MethodInfo _DocumentView_MethodInfo_[] = {
	{"getDefaultView", "()Lorg/w3c/dom/views/AbstractView;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocumentView, getDefaultView, $AbstractView*)},
	{}
};

$ClassInfo _DocumentView_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.views.DocumentView",
	nullptr,
	nullptr,
	nullptr,
	_DocumentView_MethodInfo_
};

$Object* allocate$DocumentView($Class* clazz) {
	return $of($alloc(DocumentView));
}

$Class* DocumentView::load$($String* name, bool initialize) {
	$loadClass(DocumentView, name, initialize, &_DocumentView_ClassInfo_, allocate$DocumentView);
	return class$;
}

$Class* DocumentView::class$ = nullptr;

			} // views
		} // dom
	} // w3c
} // org