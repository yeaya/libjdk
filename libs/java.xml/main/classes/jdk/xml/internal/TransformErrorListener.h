#ifndef _jdk_xml_internal_TransformErrorListener_h_
#define _jdk_xml_internal_TransformErrorListener_h_
//$ class jdk.xml.internal.TransformErrorListener
//$ extends javax.xml.transform.ErrorListener

#include <javax/xml/transform/ErrorListener.h>

namespace javax {
	namespace xml {
		namespace transform {
			class TransformerException;
		}
	}
}

namespace jdk {
	namespace xml {
		namespace internal {

class TransformErrorListener : public ::javax::xml::transform::ErrorListener {
	$class(TransformErrorListener, $NO_CLASS_INIT, ::javax::xml::transform::ErrorListener)
public:
	TransformErrorListener();
	void init$();
	virtual void error(::javax::xml::transform::TransformerException* e) override;
	virtual void fatalError(::javax::xml::transform::TransformerException* e) override;
	virtual void warning(::javax::xml::transform::TransformerException* e) override;
};

		} // internal
	} // xml
} // jdk

#endif // _jdk_xml_internal_TransformErrorListener_h_