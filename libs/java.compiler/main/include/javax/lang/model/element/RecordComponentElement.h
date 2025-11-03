#ifndef _javax_lang_model_element_RecordComponentElement_h_
#define _javax_lang_model_element_RecordComponentElement_h_
//$ interface javax.lang.model.element.RecordComponentElement
//$ extends javax.lang.model.element.Element

#include <javax/lang/model/element/Element.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ExecutableElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import RecordComponentElement : public ::javax::lang::model::element::Element {
	$interface(RecordComponentElement, $NO_CLASS_INIT, ::javax::lang::model::element::Element)
public:
	virtual ::javax::lang::model::element::ExecutableElement* getAccessor() {return nullptr;}
	virtual ::javax::lang::model::element::Element* getEnclosingElement() override {return nullptr;}
	virtual ::javax::lang::model::element::Name* getSimpleName() override {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_RecordComponentElement_h_