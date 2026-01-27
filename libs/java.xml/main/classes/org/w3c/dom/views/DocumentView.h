#ifndef _org_w3c_dom_views_DocumentView_h_
#define _org_w3c_dom_views_DocumentView_h_
//$ interface org.w3c.dom.views.DocumentView
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace views {
				class AbstractView;
			}
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace views {

class $export DocumentView : public ::java::lang::Object {
	$interface(DocumentView, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::views::AbstractView* getDefaultView() {return nullptr;}
};

			} // views
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_views_DocumentView_h_