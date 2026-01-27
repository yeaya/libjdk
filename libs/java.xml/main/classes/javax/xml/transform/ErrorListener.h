#ifndef _javax_xml_transform_ErrorListener_h_
#define _javax_xml_transform_ErrorListener_h_
//$ interface javax.xml.transform.ErrorListener
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace transform {
			class TransformerException;
		}
	}
}

namespace javax {
	namespace xml {
		namespace transform {

class $export ErrorListener : public ::java::lang::Object {
	$interface(ErrorListener, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void error(::javax::xml::transform::TransformerException* exception) {}
	virtual void fatalError(::javax::xml::transform::TransformerException* exception) {}
	virtual void warning(::javax::xml::transform::TransformerException* exception) {}
};

		} // transform
	} // xml
} // javax

#endif // _javax_xml_transform_ErrorListener_h_