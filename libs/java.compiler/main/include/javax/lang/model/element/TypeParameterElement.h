#ifndef _javax_lang_model_element_TypeParameterElement_h_
#define _javax_lang_model_element_TypeParameterElement_h_
//$ interface javax.lang.model.element.TypeParameterElement
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

class $import TypeParameterElement : public ::javax::lang::model::element::Element {
	$interface(TypeParameterElement, $NO_CLASS_INIT, ::javax::lang::model::element::Element)
public:
	virtual ::javax::lang::model::type::TypeMirror* asType() override {return nullptr;}
	virtual ::java::util::List* getBounds() {return nullptr;}
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override {return nullptr;}
	virtual ::javax::lang::model::element::Element* getGenericElement() {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_TypeParameterElement_h_