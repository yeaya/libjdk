#ifndef _javax_lang_model_element_Parameterizable_h_
#define _javax_lang_model_element_Parameterizable_h_
//$ interface javax.lang.model.element.Parameterizable
//$ extends javax.lang.model.element.Element

#include <javax/lang/model/element/Element.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import Parameterizable : public ::javax::lang::model::element::Element {
	$interface(Parameterizable, $NO_CLASS_INIT, ::javax::lang::model::element::Element)
public:
	virtual ::java::util::List* getTypeParameters() {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_Parameterizable_h_