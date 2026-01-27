#ifndef _org_w3c_dom_views_AbstractView_h_
#define _org_w3c_dom_views_AbstractView_h_
//$ interface org.w3c.dom.views.AbstractView
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace views {
				class DocumentView;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace views {

class $export AbstractView : public ::java::lang::Object {
	$interface(AbstractView, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::views::DocumentView* getDocument() {return nullptr;}
};

			} // views
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_views_AbstractView_h_