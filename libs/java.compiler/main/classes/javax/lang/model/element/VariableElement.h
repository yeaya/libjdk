#ifndef _javax_lang_model_element_VariableElement_h_
#define _javax_lang_model_element_VariableElement_h_
//$ interface javax.lang.model.element.VariableElement
//$ extends javax.lang.model.element.Element

#include <javax/lang/model/element/Element.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $export VariableElement : public ::javax::lang::model::element::Element {
	$interface(VariableElement, $NO_CLASS_INIT, ::javax::lang::model::element::Element)
public:
	virtual ::javax::lang::model::type::TypeMirror* asType() override {return nullptr;}
	virtual $Object* getConstantValue() {return nullptr;}
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override {return nullptr;}
	virtual ::javax::lang::model::element::Name* getSimpleName() override {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_VariableElement_h_